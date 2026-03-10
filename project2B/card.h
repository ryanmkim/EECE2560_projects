// File: card.h
// Names: Ryan Kim, Maddox Grillo-Smith, Vishnu Kumar, Preeth Somanchi
// Assignment: Project Flip cards part a

#ifndef CARD_H
#define CARD_H

#include <iostream>

// suits for the cards
enum Suit { CLUB, DIAMOND, HEART, SPADE };

class card {
private:
    int value; // 1 = ace, 2-10 = number, 11 = jack, 12 = queen, 13 = king
    Suit suit;

public:
    // default constructor, thus makes ace of clubs
    card();

    // constructor with value and suit
    card(int v, Suit s);

    // setters
    void setValue(int v);
    void setSuit(Suit s);

    // getter functions
    int getValue() const;
    Suit getSuit() const;

    // prints card like "Ace of spades, etc"
    friend std::ostream& operator<<(std::ostream& os, const card& c);
};

#endif