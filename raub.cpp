#include <iostream>
#include <vector>
#include "Deck.h"
#include "Card.h"

int DECK_SIZE {32};
int TRICK_SIZE {4};
int POINTS_PER_GAME {21};

int main()
{
	// game initialization
	Deck deck;
	deck.init();

	Card card { deck.deal_card() };
	std::cout << rankToString(card.rank) << suitToString(card.suit) << '\n';

	return 0;
}
