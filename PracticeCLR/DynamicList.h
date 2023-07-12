#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <sstream>
#include <queue>
#include "msclr\marshal_cppstd.h"
inline void createFileFromInput(std::string filename) {
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cout << "Failed to create file." << std::endl;
        return;
    }

    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    file << n << std::endl;

    for (int i = 0; i < n; i++) {
        std::string firstName, lastName;
        std::list<int> grades;

        std::cout << "Enter student's first name: ";
        std::cin >> firstName;
        file << firstName << " ";

        std::cout << "Enter student's last name: ";
        std::cin >> lastName;
        file << lastName << " ";

        std::cout << "Enter student's grades (separated by spaces): ";
        for (int j = 0; j < 5; j++) {
            int grade;
            std::cin >> grade;

            if (grade >= 2 && grade <= 5) {
                grades.push_back(grade);
                file << grade << " ";
            }
            else {
                std::cout << "Invalid grade. Please enter a grade between 2 and 5." << std::endl;
                j--;
            }
        }

        file << std::endl;
    }

    file.close();
    std::cout << "File created successfully." << std::endl;
}

inline void printStudentList(const std::list<Student>& students) {
    for (const auto& student : students) {
        std::cout << student.lastName << " " << student.firstName << " - ";

        if (student.grades.empty()) {
            std::cout << "No grades available";
        }
        else {
            int sum = 0;
            for (int grade : student.grades) {
                sum += grade;
            }
            double average = static_cast<double>(sum) / student.grades.size();
            std::cout << "Average grade: " << average;
        }

        std::cout << std::endl;
    }
}

//std::list<Student> createSortedStudentList(std::string filename) {
//    std::ifstream file(filename);
//    std::list<Student> studentList;
//
//    if (!file.is_open()) {
//        std::cout << "Failed to open file." << std::endl;
//        return studentList;
//    }
//
//    int n;
//    file >> n;
//    if (isFileEmpty(filename) || n == 0)
//    {
//        std::cout << "No students in text file..." << std::endl;
//        return studentList;
//    }
//
//    // Read a student's information and grades for each iteration
//    for (int i = 0; i < n; i++) {
//        Student studentInfo;
//
//        file >> studentInfo.firstName >> studentInfo.lastName;
//        double avgGrade = 0;
//        int gradesCount = 0;
//        bool hasTwo = false;
//
//        for (int j = 0; j < 5; j++) {
//            int grade;
//            file >> grade;
//            ++gradesCount;
//            if (grade == 2)
//                hasTwo = true;
//
//            if (grade >= 2 && grade <= 5) {
//                studentInfo.grades.push_back(grade);
//                avgGrade += grade;
//            }
//            else {
//                break;
//            }
//        }
//
//        avgGrade /= gradesCount;
//        studentInfo.averageGrade = avgGrade;
//
//        studentList.push_back(studentInfo);
//    }
//
//    file.close();
//
//    studentList.sort(compareStudentsByAverageGrade);
//
//    std::cout << "Sorted student list:" << std::endl;
//    printStudentList(studentList);
//
//    return studentList;
//}

std::vector<Student> readStudentsIntoVector(const std::string& filename) {
    std::vector<Student> students;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Error opening file: " << filename << std::endl;
        return students;
    }

    int numStudents;
    file >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        Student studentInfo;

        file >> studentInfo.firstName >> studentInfo.lastName;
        double avgGrade = 0;
        int gradesCount = 0;

        for (int j = 0; j < 5; j++) {
            int grade;
            file >> grade;
            ++gradesCount;

            if (grade >= 2 && grade <= 5) {
                studentInfo.grades.push_back(grade);
                avgGrade += grade;
            }
            else {
                break;
            }
        }

        avgGrade /= gradesCount;
        studentInfo.averageGrade = avgGrade;

        students.push_back(studentInfo);
    }

    file.close();

    return students;
}

inline void printStudentsWithMostFives(const std::vector<Student>& students) {
    int maxFives = 0;
    std::vector<Student> topStudents;

    // Find the maximum number of '5' grades and store the top students
    for (const auto& student : students) {
        int numFives = 0;
        for (const auto& grade : student.grades) {
            if (grade == 5) {
                numFives++;
            }
        }
        if (numFives > maxFives) {
            maxFives = numFives;
            topStudents.clear();
            topStudents.push_back(student);
        }
        else if (numFives == maxFives) {
            topStudents.push_back(student);
        }
    }

    // Print student info for the top students
    for (const auto& student : topStudents) {
        std::cout << "Name: " << student.firstName << " " << student.lastName << std::endl;
        std::cout << "Grades:";
        for (const auto& grade : student.grades) {
            std::cout << " " << grade;
        }
        std::cout << std::endl;
    }
}
