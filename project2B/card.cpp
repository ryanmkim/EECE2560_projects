// File: card.cpp
// Names: Ryan Kim, Maddox Grillo-Smith, Vishnu Kumar, Preeth Somanchi
// Assignment: Project Flip cards part a

#include "card.h"

// default constructor, thus makes ace of clubs
card::card() : value(1), suit(CLUB) {}

// constructor with value and suit
card::card(int v, Suit s) : value(v), suit(s) {}

// setters
void card::setValue(int v) { value = v; }

void card::setSuit(Suit s) { suit = s; }

// getter functions
int card::getValue() const { return value; }

Suit card::getSuit() const { return suit; }

// prints card like "Ace of spades, etc"
std::ostream& operator<<(std::ostream& os, const card& c) {
    // print name for face cards, otherwise just the number
    if (c.value == 1)
        os << "Ace";
    else if (c.value == 11)
        os << "Jack";
    else if (c.value == 12)
        os << "Queen";
    else if (c.value == 13)
        os << "King";
    else
        os << c.value;

    os << " of ";

    // print suit name
    if (c.suit == CLUB)
        os << "Clubs";
    else if (c.suit == DIAMOND)
        os << "Diamonds";
    else if (c.suit == HEART)
        os << "Hearts";
    else if (c.suit == SPADE)
        os << "Spades";

    return os;
}