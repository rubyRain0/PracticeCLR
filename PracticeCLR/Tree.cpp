#pragma once
#include "Tree.h"

nodeBST::nodeBST(const Student& studentInfo)
    : data(studentInfo), left(nullptr), right(nullptr), height(0) {};

nodeBST::nodeBST(const std::string& first, const std::string& last, float avg)
    : data(first, last, avg), left(nullptr), right(nullptr), height(0) {};

nodeBST::nodeBST(const std::string& first, const std::string& last, float avg, int _height)
    : data(first, last, avg), left(nullptr), right(nullptr), height(_height) {};

nodeBST::~nodeBST()
{
    delete left;
    delete right;
}

int getHeight(nodeBST* node) {
    if (node == nullptr)
        return -1;
    return node->height;
}

int getBalance(nodeBST* node) {
    if (node == nullptr)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

void updateHeight(nodeBST* node) {
    int leftHeight = getHeight(node->left);
    int rightHeight = getHeight(node->right);
    node->height = 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

nodeBST* rotateLeft(nodeBST* node) {
    nodeBST* newRoot = node->right;
    node->right = newRoot->left;
    newRoot->left = node;
    updateHeight(node);
    updateHeight(newRoot);
    return newRoot;
}

nodeBST* rotateRight(nodeBST* node) {
    nodeBST* newRoot = node->left;
    node->left = newRoot->right;
    newRoot->right = node;
    updateHeight(node);
    updateHeight(newRoot);
    return newRoot;
}

nodeBST* balance(nodeBST* node) {
    if (getBalance(node) < -1) {
        if (getBalance(node->right) > 0)
            node->right = rotateRight(node->right);
        return rotateLeft(node);
    }
    if (getBalance(node) > 1) {
        if (getBalance(node->left) < 0)
            node->left = rotateLeft(node->left);
        return rotateRight(node);
    }
    return node;
}

nodeBST* insertAVL(nodeBST* root, const std::string& first, const std::string& last, float avg) {
    if (root == nullptr) {
        nodeBST* newNode = new nodeBST(first, last, avg);
        return newNode;
    }
    if (avg < root->data.averageGrade)
        root->left = insertAVL(root->left, first, last, avg);
    else
        root->right = insertAVL(root->right, first, last, avg);
    updateHeight(root);
    return balance(root);
}

void printLevels(nodeBST* root, int numLevels) {
    if (root == nullptr || numLevels <= 0) {
        return;
    }

    std::queue<nodeBST*> q;
    q.push(root);

    int currentLevel = 1;
    int nodesInCurrentLevel = 1;
    int nodesInNextLevel = 0;

    while (!q.empty() && currentLevel <= numLevels) {
        nodeBST* node = q.front();
        q.pop();

        // Print the node
        std::cout << "Name: " << node->data.firstName << " " << node->data.lastName << ", Average Grade: " << node->data.averageGrade << std::endl;

        // Enqueue left and right children if they exist
        if (node->left != nullptr) {
            q.push(node->left);
            ++nodesInNextLevel;
        }
        if (node->right != nullptr) {
            q.push(node->right);
            ++nodesInNextLevel;
        }

        // Move to the next level if all nodes in the current level are processed
        --nodesInCurrentLevel;
        if (nodesInCurrentLevel == 0) {
            ++currentLevel;
            nodesInCurrentLevel = nodesInNextLevel;
            nodesInNextLevel = 0;

            // Break the loop if we have printed the desired number of levels
            if (currentLevel > numLevels) {
                break;
            }
        }
    }
    std::cout << "==========================\n";
}

nodeBST* buildAVLTree(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Failed to open file: " << filename << std::endl;
        return nullptr;
    }

    int numStudents;
    file >> numStudents;
    if (isMyFileEmpty(filename) || numStudents == 0)
    {
        std::cout << "No students in text file..." << std::endl;
        return nullptr;
    }

    std::string line;
    std::getline(file, line); // Read the remaining newline character


    nodeBST* root = nullptr;

    for (int i = 0; i < numStudents; ++i) {
        std::getline(file, line);
        std::istringstream iss(line);

        std::string firstName;
        std::string lastName;
        float sumGrades = 0.0f;
        float grade;
        int numGrades = 0;

        if (iss >> firstName >> lastName) {
            while (iss >> grade) {
                sumGrades += grade;
                ++numGrades;
            }

            float averageGrade = (numGrades > 0) ? (sumGrades / numGrades) : 0.0f;
            root = insertAVL(root, firstName, lastName, averageGrade);
        }
    }

    file.close();

    std::cout << "AVL Tree (1-3 levels):\n";
    printLevels(root, 3);

    return root;
}

nodeBST* insertBST(nodeBST* root, const std::string& first, const std::string& last, float avg) {
    if (root == nullptr) {
        return new nodeBST(first, last, avg);
    }

    if (avg < root->data.averageGrade)
        root->left = insertBST(root->left, first, last, avg);
    else
        root->right = insertBST(root->right, first, last, avg);

    return root;
}

void inorderTraversalPrint(nodeBST* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversalPrint(root->left);
    std::cout << "Name: " << root->data.firstName << " " << root->data.lastName << ", Average Grade: " << root->data.averageGrade << std::endl;
    inorderTraversalPrint(root->right);
}

nodeBST* buildBinarySearchTree(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Failed to open the file." << std::endl;
        return nullptr;
    }

    int numStudents;
    file >> numStudents;
    if (isMyFileEmpty(filename) || numStudents == 0)
    {
        std::cout << "No students in text file..." << std::endl;
        return nullptr;
    }

    std::string line;
    std::getline(file, line); // Read the remaining newline character

    nodeBST* root = nullptr;

    for (int i = 0; i < numStudents; ++i) {
        std::getline(file, line);
        std::istringstream iss(line);

        std::string firstName;
        std::string lastName;
        float sumGrades = 0.0f;
        float grade;
        int numGrades = 0;

        if (iss >> firstName >> lastName) {
            while (iss >> grade) {
                sumGrades += grade;
                ++numGrades;
            }

            float averageGrade = (numGrades > 0) ? (sumGrades / numGrades) : 0.0f;
            root = insertBST(root, firstName, lastName, averageGrade);
        }
    }

    file.close();

    std::cout << "BST (1-3 levels):\n";
    printLevels(root, 3);

    return root;
}