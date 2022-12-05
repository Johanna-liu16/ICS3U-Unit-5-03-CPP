// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Nov 2022
// This program is converts c to f

#include <iostream>
#include <string>

int CalculateGrade(char grade) {
    // calculate grade
    int percent;

    // process
    switch (grade) {
        case '4+':
            percent = 97;
            return percent;
        case '4':
            percent = 87;
            return percent;
        case '4-':
            percent = 80;
            return percent;
        case '3+':
            percent = 78;
            return percent;
        case '3':
            percent = 75;
            return percent;
        case '3-':
            percent = 70;
            return percent;
        case '2+':
            percent = 68;
            return percent;
        case '2':
            percent = 65;
            return percent;
        case '2-':
            percent = 61;
            return percent;
        case '1+':
            percent = 58;
            return percent;
        case '1':
            percent = 54;
            return percent;
        case '1-':
            percent = 51;
            return percent;
        case 'R':
            percent = 30;
            return percent;
        case 'NE':
            percent = 0;
            return percent;
        default:
            percent = -1;
            return percent;
    }

    // output
    std::cout << "The area is " << "." << std::endl;
}
int main() {
    char grade;
    int gradeAsPercent;

    // input
    std::cout << "This program converts levels to percentages." << std::endl;
    std::cout << "Enter grade as a level: ";
    std::cin >> grade;

    // process and output
    // call functions
    gradeAsPercent = CalculateGrade(grade);
    if (gradeAsPercent == -1) {
        std::cout << "Invalid Input";
    } else {
        std::cout << "Level " << grade << " equals " << gradeAsPercent << "%.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
