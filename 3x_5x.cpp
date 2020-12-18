// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Dec 2020
// This program for Weekly Assessment 05

#include <iostream>
#include <cmath>


int main() {
    // this fuction for Weekly Assessment 05

    int number_3 = 0;
    int number_5 = 0;
    int number;

    // process & output
    for (number = 0; number < 1000; number++) {
        if (number % 3 == 0) {
            number_3 = number_3 + number;
        } else if (number % 5 == 0) {
            number_5 = number_5 + number;
        }
    } std::cout << "The answer is: " << number_5 + number_3 << std::endl;
}
