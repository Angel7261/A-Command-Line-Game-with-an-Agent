#ifndef GAME_H
#define GAME_H

// Controls the overall game loop.
class Game {
private:
    int targetNumber;
    int attempts;

public:
    // Constructor.
    Game();

    // Starts the game.
    void play();

    // Checks a player's guess.
    bool checkGuess(int guess);
};

#endif