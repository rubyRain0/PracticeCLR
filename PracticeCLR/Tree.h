#pragma once
#include "AuxFuncs.h"

struct nodeBST {
    Student data;
    nodeBST* left;
    nodeBST* right;
    int height; // for AVL-balancing

    nodeBST(const Student& studentInfo);

    nodeBST(const std::string& first, const std::string& last, float avg);

    nodeBST(const std::string& first, const std::string& last, float avg, int _height);

    ~nodeBST();
};


int getHeight(nodeBST* node);
int getBalance(nodeBST* node);
void updateHeight(nodeBST* node);

nodeBST* rotateLeft(nodeBST* node);
nodeBST* rotateRight(nodeBST* node);
nodeBST* balance(nodeBST* node);
nodeBST* insertAVL(nodeBST* root, const std::string& first, const std::string& last, float avg);

void printLevels(nodeBST* root, int numLevels);

nodeBST* buildAVLTree(const std::string& filename);

nodeBST* insertBST(nodeBST* root, const std::string& first, const std::string& last, float avg);



void inorderTraversalPrint(nodeBST* root);

nodeBST* buildBinarySearchTree(const std::string& filename);