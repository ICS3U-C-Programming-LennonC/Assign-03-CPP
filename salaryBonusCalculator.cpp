// Copyright (c) 2026 Lennon Cehajic All rights reserved.
// Created by: Lennon Cehajic
// Date: November 6th, 2026
// This program calculates the user's new salary bonus
// with their years of service and current salary.

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    // Declare the variables as strings.
    std::string user_salary_string;
    std::string user_years_string;

    // Get the info from the user as a string.
    std::cout << "Welcome to Lennon’s salary bonus calculator. ";
    std::cout << "Please enter your current salary";
    std::cout << "(Please round to the nearest dollar): ";
    std::cin >> user_salary_string;

    std::cout << "Please enter how many years you have worked at the company: ";
    std::cin >> user_years_string;

    // Try converting inputs to integer, calculate the user's salary bonus,
    // then display the user's new salary, rounded to two decimal places.
    try {
        int user_salary_int = std::stoi(user_salary_string);
        if (user_salary_int < 0) {
            std::cout << user_salary_int << " is not a positive number.";
            std::cout << "Please enter a valid number." << std::endl;
        } else {
            try {
                int user_years_int = std::stoi(user_years_string);
                std::cout << std::fixed << std::setprecision(2);
                if (user_years_int > 5 && user_years_int < 110) {
                    double new_salary = user_salary_int * 1.05;
                    std::cout << "Congrats! You have earned a 5% bonus.";
                    std::cout << "Your new salary is: $\n" << new_salary;
                } else if (user_years_int <= 5) {
                    std::cout << "Sorry, you have not earned a bonus.";
                    std::cout << "Your salary is still:$\n " << user_salary_int;
                } else if (user_years_int < 0) {
                    std::cout << user_years_int << " is not a positive number.";
                    std::cout << "Please enter a valid number.\n";
                } else if (user_years_int > 110) {
                    std::cout << user_years_int << " is not a valid number.";
                    std::cout << "Please enter a valid number\n";
                } else {
                    std::cout << user_years_int << " is not a valid number.";
                    std::cout << "Please enter a valid number\n";
                }
            } catch (...) {
                std::cout << user_years_string << " is not a valid integer\n";
            }
        }
    } catch (...) {
        std::cout << user_salary_string << " is not a valid integer\n";
    }
}
