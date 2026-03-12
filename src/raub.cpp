#include <iostream>
#include <vector>
#include "../include/Deck.h"
#include "../include/Card.h"
#include "../include/Player.h"

int POINTS_PER_GAME {21};

int main()
{	
	std::cout << "Enter p1 name: ";
	std::string name{};
	std::cin >> name;
	Player p1{name, POINTS_PER_GAME};
	
	std::cout << "Enter p2 name: ";
	std::cin >> name;
	Player p2{name, POINTS_PER_GAME};

	Deck deck;
	deck.init();

	Card middle{deck.deal_card()};

	for(int i=0; i<4; ++i)
	{
		p1.take_card(deck.deal_card());
		p2.take_card(deck.deal_card());
	}

	std::cout << "--------------------------\n";
	std::cout << "Card in the middle: " << rank_to_string(middle.rank)  << suit_to_string(middle.suit) << '\n';

	// TODO: implement chosing middle card loop
	
	std::cout << "--------------------------\n";
	p1.display();
	
	std::string rank_to_play{};
	std::string suit_to_play{};

	std::cin >> rank_to_play >> suit_to_play;	
	Card played_card_p1{p1.play_card(rank_to_play, suit_to_play)};
	
	std::cout << "--------------------------\n";
	p2.display();
	
	std::cin >> rank_to_play >> suit_to_play;	
	Card played_card_p2{p1.play_card(rank_to_play, suit_to_play)};

	// TODO: implement score reduction logic, also add score reduction API to Player

	return 0;
}
