// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 7 2020
// this program lets user decide amount of number to be inputed and what numbers
// will be inputed and calculates the sum of the numbers entered
#include <iostream>
#include <string>

int main() {
    // this program lets user decide amount of number to be inputed and what
    // numbers will be inputed and calculates the sum of the numbers entered
    std::string amount_of_numbers_string;
    std::string number_added_string;
    int amount_of_numbers;
    int number_added;
    int total;
    total = 0;

    // input, process and output
    while (true) {
        std::cout << "How many numbers are you going to add:";
        std::cin >> amount_of_numbers_string;
        std::cout << "" << std::endl;
        try {
            amount_of_numbers = std::stoi(amount_of_numbers_string);
            if (amount_of_numbers > 0) {
                while (amount_of_numbers > 0) {
                    try {
                        std::cout << "Enter an integer to add: ";
                        std::cin >> number_added_string;
                        number_added = std::stoi(number_added_string);
                        if (number_added > 0) {
                            total = total + number_added;
                            amount_of_numbers = amount_of_numbers - 1;
                        } else {
                            std::cout << "That was a negative integer and"
                                         " wont be added";
                            std::cout << std::endl;
                            amount_of_numbers = amount_of_numbers - 1;
                            continue;
                        }
                    } catch(std::invalid_argument) {
                        std::cout << "That was not an integer" << std::endl;
                    }
                }
                break;
            } else {
                    std::cout << "That was a negative integer. Please enter a"
                              << " positive integer";
                    std::cout << "" << std::endl;
            }
        } catch(std::invalid_argument) {
                        std::cout << "That was not an integer."
                                  << " Try again";
                        std::cout << "" << std::endl;
        }
    }
    std::cout << "The total is " << total << std::endl;
}
