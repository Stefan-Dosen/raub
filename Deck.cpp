#include <iostream>
#include <vector>
#include "Deck.h"


void Deck::init()
{
	for(int s=0; s < static_cast<int>(Suit::COUNT); ++s)
	{
		for(int r=7; r < static_cast<int>(Rank::COUNT); ++r)
		{
		Card card{static_cast<Rank>(r), static_cast<Suit>(s)};
		deck.push_back(card);
		}
	}	
}
void Deck::display_deck()
{
	for(size_t i=0; i < deck.size(); ++i)
	{
		std::cout<< rankToString(deck[i].rank) << suitToString(deck[i].suit) << '\n';
	}
}
Card Deck::deal_card()
{
	size_t randCardIndex = 8;
	Card card  = deck[randCardIndex];
	deck.erase(deck.begin() + randCardIndex);
	return card;

}
