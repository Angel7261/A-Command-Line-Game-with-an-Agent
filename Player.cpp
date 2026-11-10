#include "Player.h"

Player::Player()
    : lastGuess(0) {
}

void Player::setGuess(int guess) {
    lastGuess = guess;
}

int Player::getGuess() const {
    return lastGuess;
}