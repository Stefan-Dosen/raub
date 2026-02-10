// implement hands 

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

	Card(char cars_suit, int card_rank)
	{
		suit = card_suit;
		rank = card_rank;
	}

	void display_card()
	{
		std::cout << rank << suit << '\n';
	}
};


class Deck
{
private:
	std::vector<Card> deck{};
public:
	void init()
	{
		for(int i=7; i<=14;++i)
		{
			for(size_t j=0; j<4; ++j)
			{
			Card card{Suits[j],i};
			deck.push_back(card);
			}
		}	
	}
	
	void display_deck()
	{
		for(size_t i=0;i<=31;++i)
		{
			deck[i].display_card();
		}
	}
};

class Player
{
private:
	std::string name{};
	int points{};
	std::vector<Card> hand{};

public:
	Player(std::string player_name, int player_points)
	{
		name = player_name;
		points = player_points;
	}
	
	int points_left()
	{
		return points;
	}
};


int main()
{
	// game initialization
	Deck deck;
	deck.init();

	std::string p1_name {};
	std::cin >> p1_name;

	std::string p2_name {};
	std::cin >> p2_name;

	Player p1{p1_name, POINTS_PER_GAME};
	Player p2{p2_name, POINTS_PER_GAME};
	
	// game loop
	while(p1.points_left() >= 0 || p2.points_left() >=0)
	{
		// round 
		for(int i=DECK_SIZE; i>=0; i-=TRICK_SIZE)
		{
			deck.remove_trick();
			deck.remove_trick();


		}

	
	}
	return 0;

}
