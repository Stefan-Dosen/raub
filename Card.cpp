#include <iostream>
#include <vector>

enum Rank{seven=7, eight=8, nine=9, ten=10, J=11, Q=12, K=13, A=14};
std::vector<char> Suits {'A','H','S','C'};

int DECK_SIZE {32};
int TRICK_SIZE {4};
int POINTS_PER_GAME {21};



class Card
{
private:

	char suit{};
	int rank{};	
public:
	Card(char cars_suit, int card_rank);
	void display_card();
	char get_suit();
	int get_rank();
};



Card::Card(char cars_suit, int card_rank)
{
	suit = card_suit;
	rank = card_rank;
}
void Card::display_card()
{
	std::cout << rank << suit << '\n';
}
char Card::get_suit()
{
	return suit;
}
int Card::get_rank()
{
	return rank;
}
