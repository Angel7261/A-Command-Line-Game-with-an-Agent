#include "InputHandler.h"

#include <iostream>
#include <limits>

int InputHandler::getIntegerInput() {
    int value;

    while (!(std::cin >> value)) {
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return value;
}