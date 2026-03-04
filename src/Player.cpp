#include "../include/Player.h"
#include <iostream>
Card Player::play_card(std::string rank, std::string suit)
{
	Rank cardRank = string_to_rank(rank);
	Suit cardSuit = string_to_suit(suit);

	if(cardRank == Rank::COUNT || cardSuit == Suit::COUNT) return Card{Rank::COUNT, Suit::COUNT};

	bool isInHand {false};
	size_t cardIndex {0};

	for(Card card : hand)
	{
		if(card.rank == cardRank && card.suit == cardSuit)
		{
			isInHand = true;
			break;
		}
		++cardIndex;
	}
	if(!isInHand) return Card{Rank::COUNT, Suit::COUNT};
	Card card{cardRank, cardSuit};

	hand.erase(hand.begin() + cardIndex);
	return card;
}

void Player::take_card(Card card)
{
	hand.push_back(card);
}
void Player::display()
{
	std::cout << name << ": " << score << '\n';
	for(Card card: hand)
	{
		std::cout << rankToString(card.rank) << suitToString(card.suit) << '\n';
	}
}
Player::Player(std::string player_name, int player_score)
{
	name = player_name;
	score = player_score;
}

