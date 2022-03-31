// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: March, 2022
// This is a guess the number game

#include <iostream>
#include <iomanip>
#include <random>

int main() {
    // Declaring variables

    int someRandomNumber;
    int userInput;

    std::random_device rseed;

    std::mt19937 rgen(rseed());  // mersenne_twister

    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]

    someRandomNumber = idist(rgen);


    // Greeting message

    std::cout << "This is a number guessing game.\n";


    // input

    std::cout << "Enter a number between 0 and 9 : ";
    std::cin >> userInput;


    // Checking number and printing output

    if (userInput == someRandomNumber) {
    std::cout << "You guessed correctly!\n";
} else {
    std::cout << "You guessed wrong :(\n";
}}
