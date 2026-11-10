#ifndef PLAYER_H
#define PLAYER_H

// Stores information about the player.
class Player {
private:
    int lastGuess;

public:
    // Constructor.
    Player();

    // Sets the player's guess.
    void setGuess(int guess);

    // Returns the current guess.
    int getGuess() const;
};

#endif