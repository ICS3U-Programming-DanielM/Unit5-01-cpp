// Copyright (c) 2022 Daniel Momoh All rights reserved.
// Created by: Daniel Momoh
// Created on: Nov. 21, 2022
// This program converts the entered temperature
// in Celsius to Fahrenheit.
#include <iomanip>
#include <iostream>

void CalculateFahrenheit() {
    // declaration of varibles
    std::string temp_C_string;
    float temp_C_float;
    float temp_F;

    // gets the temperature from user
    std::cout << "Enter the temperature (°C): ";
    std::cin >> temp_C_string;
    // checks if the user has entered the correct number
    try {
        // convert the user's guess to a float
        temp_C_float = std::stof(temp_C_string);

        // calculates the fahrenheit
        temp_F = (9.0 / 5.0) * temp_C_float + 32;

        std::cout << std::fixed << std::setprecision(2) << temp_C_float;
        std::cout << "°C is equal to " << std::fixed;
        std::cout << std::setprecision(2) << temp_F << "°F\n";

        // determines if the the answer is a number
    } catch (std::invalid_argument) {
        // tells user did the input is not a number
        std::cout << temp_C_string << " is not a number.\n";
    }
}

int main() {
    // calls the fahrenheit function
    CalculateFahrenheit();
}
