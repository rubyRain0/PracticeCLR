#pragma once
#include "AuxFuncs.h"

Student::Student()
    : firstName(""), lastName(""), averageGrade(0) {};

Student::Student(const std::string& first, const std::string& last, float avg)
    : firstName(first), lastName(last), averageGrade(avg) {};

bool isMyFileEmpty(const std::string& filename) {
    std::ifstream file(filename);
    return file.peek() == std::ifstream::traits_type::eof();
}
bool compareStudentsByAverageGrade(const Student& student1, const Student& student2) {
    return student1.averageGrade < student2.averageGrade;
}