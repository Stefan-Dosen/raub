#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Card.h"

class Player
{
private:
	std::vector<Card> hand{};
public:
	Card play_card(std::string rank, std::string suit);
	void take_card(Card card);
};
#endif
