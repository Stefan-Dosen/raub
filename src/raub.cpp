#include <iostream>
#include <vector>
#include "../include/Deck.h"
#include "../include/Card.h"
#include "../include/Player.h"

int DECK_SIZE {32};
int POINTS_PER_GAME {21};

int main()
{
	
	
	std::string name{};
	std::cout << "Enter player1 name: ";
	std::cin >> name;
	Player p1{name, POINTS_PER_GAME};
	
	std::cout << "-------------------------\n";	
	p1.display();
	std::cout << "-------------------------\n";	
	
	Deck deck;
	deck.init();	
	
	Card c1 = deck.deal_card();
	std::cout << rankToString(c1.rank) << suitToString(c1.suit) << '\n';
	std::cout << "-------------------------\n";	
	
	p1.take_card(c1);
	p1.display();
	std::cout << "-------------------------\n";	

	p1.play_card(rankToString(c1.rank), suitToString(c1.suit));
	p1.display();

	return 0;
}
