#include "Game.h"

#include <iostream>
#include <random>

#include "InputHandler.h"
#include "Player.h"

namespace {
int generateTargetNumber() {
    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    std::uniform_int_distribution<int> distribution(1, 100);
    return distribution(generator);
}
}

Game::Game()
    : targetNumber(generateTargetNumber()),
      attempts(0) {
}

void Game::play() {
    InputHandler inputHandler;
    Player player;

    std::cout << "Guess the number (1-100)!" << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        player.setGuess(inputHandler.getIntegerInput());

        if (checkGuess(player.getGuess())) {
            break;
        }
    }
}

bool Game::checkGuess(int guess) {
    ++attempts;

    if (guess < targetNumber) {
        std::cout << "Too low. Try again." << std::endl;
        return false;
    }

    if (guess > targetNumber) {
        std::cout << "Too high. Try again." << std::endl;
        return false;
    }

    std::cout << "Correct! You guessed the number in " << attempts
              << " attempt" << (attempts == 1 ? "" : "s") << "." << std::endl;
    return true;
}