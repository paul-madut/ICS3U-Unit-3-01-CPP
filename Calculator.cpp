// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paul Madut
// Created on: September 2019
// This program calculates sum

#include <iostream>

int main() {
    // variable declaration
    int int_1;
    int int_2;
    int sum;
    // input
    std::cout << "Enter first interger: ";
    std::cin >> int_1;
    std::cout << "Enter 2nd integer: ";
    std::cin >> int_2;
    // process
    sum = int_1 + int_2;
    // output
    std::cout << "The sum is " << (sum) << std::endl;
}
