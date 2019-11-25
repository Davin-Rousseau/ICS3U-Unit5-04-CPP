// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Davin Rousseau
// Created on: November 2019
// This program uses user defined functions
// to calculate volume of a cylinder and return to main function
// with named parameters

#include <iostream>
#include <cmath>

double volumeCylinder(int h, int r) {
    // calculate volume of cylinder

    // process
    double volume;

    volume = (pow(r, 2) * (M_PI * h));

    // output
    return volume;
}


main() {
    // This program checks if integer is positive
    // then calls function

    // input
    std::string input1;
    std::string input2;
    int radiusCylinder;
    int heightCylinder;
    int r;
    int h;
    double volume;
    std::cout << "Enter radius of the cylinder(cm): ";
    std::cin >> input1;
    std::cout << "Enter height of the cylinder(cm): ";
    std::cin >> input2;
    std::cout << std::endl;

    // process
    try {
        radiusCylinder = std::stoi(input1);
        heightCylinder = std::stoi(input2);
        if (radiusCylinder > 0 && heightCylinder > 0) {
            // call function
            volume = volumeCylinder(r = radiusCylinder,
                                    h = heightCylinder);
            std::cout << "The volume of the cylinder is: " << volume
                      << "cm^3" << std::endl;
        } else {
            std::cout << "Invalid Input" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
