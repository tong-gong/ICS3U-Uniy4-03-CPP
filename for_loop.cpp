// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on December 2020
// This is a for loop program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

int main() {
  // This is the function to run for loop.

  int userInputNumber;
  int loopCounter;
  int number;
  std::string userInputAsString;

  // input
  std::cout << "Enter a positive integer" << std::endl;
  std::cin >> userInputAsString;
  std::cout << "" << std::endl;

  // process + output
  try {
    userInputNumber = std::stoi(userInputAsString);
    if (userInputNumber >= 0) {
        loopCounter = userInputNumber;
        userInputNumber = userInputNumber + 1;
        for (loopCounter = 0; loopCounter < userInputNumber; loopCounter++) {
            number = loopCounter * loopCounter;
            std::cout << loopCounter << "² = " << number << std::endl;
            std::cout << "" << std::ends;
        }
    } else if (userInputNumber < 0) {
        std::cout << "Sorry, you did not enter a positive integer!" <<
        std::endl;
    }
  } catch (std::invalid_argument) {
    std::cout << "You are not type in an integer!" << std::ends;
  }
}

