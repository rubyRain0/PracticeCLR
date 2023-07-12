#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <sstream>
#include <queue>
#include <algorithm>

struct Student {
    std::string firstName;
    std::string lastName;
    std::list<int> grades;
    double averageGrade;

    Student();

    Student(const std::string& first, const std::string& last, float avg);
};

bool isMyFileEmpty(const std::string& filename);
bool compareStudentsByAverageGrade(const Student& student1, const Student& student2);