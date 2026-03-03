#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck
{
private:
	std::vector<Card> deck{};
public:
	void init();
	void display_deck();
	Card deal_card();
};
#endif
