#include <iostream>
#include <vector>
#include "../include/Deck.h"
#include "../include/Card.h"

int DECK_SIZE {32};
int TRICK_SIZE {4};
int POINTS_PER_GAME {21};

int main()
{
	// game initialization
	Deck deck;
	deck.init();
	
	for(int i=0; i<8; ++i)
	{
		Card card { deck.deal_card() };
		std::cout << rankToString(card.rank) << suitToString(card.suit) << '\n';
	}
	return 0;
}
