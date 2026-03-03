#ifndef CARD_H
#define CARD_H

#include <map>

enum class Suit
{
	HEARTS, DIAMONDS, CLUBS, SPADES, COUNT
};

enum class Rank
{
	SEVEN=7, EIGHT=8, NINE=9, TEN=10, JACK=11, QUEEN=12, KING=13, ACE=14, COUNT=15
};


inline std::string rankToString(Rank rank)
{
    switch(rank)
    {
        case Rank::SEVEN:  return "7";
        case Rank::EIGHT:  return "8";
        case Rank::NINE:   return "9";
        case Rank::TEN:    return "10";
        case Rank::JACK:   return "J";
        case Rank::QUEEN:  return "Q";
        case Rank::KING:   return "K";
        case Rank::ACE:    return "A";
        default:           return "?";
    }
}

inline std::string suitToString(Suit suit)
{
    switch(suit)
    {
        case Suit::HEARTS:   return "Hearts";
        case Suit::DIAMONDS: return "Diamonds";
        case Suit::CLUBS:    return "Clubs";
        case Suit::SPADES:   return "Spades";
        default:             return "?";
    }
}

inline Rank string_to_rank(std::string rank)
{
	static const std::unordered_map<std::string, Rank> ranks{
					{"7", Rank::SEVEN},
					{"8", Rank::EIGHT},
					{"9", Rank::NINE},
					{"10", Rank::TEN},
					{"J", Rank::JACK},
					{"Q", Rank::QUEEN},
					{"K", Rank::KING},
					{"A", Rank::ACE},	
					};
	if(!ranks.contains(rank)) return Rank::COUNT;
	return ranks[rank];
}

inline Suit string_to_suit(std::string suit)
{
	static const std::unordered_map<std::string, Suit> suits{
					{"H", 		Suit::HEARTS},
					{"D", 		Suit::DIAMONDS},
					{"C",		Suit::CLUBS},
					{"S", 		Suit::SPADES},
					{"Hearts", 	Suit::HEARTS},
					{"Diamonds", 	Suit::DIAMONDS},
					{"Clubs", 	Suit::CLUBS},
					{"Spades", 	Suit::SPADES},	
					};
	if(!suits.contains(suit)) return Suit::COUNT;
	return suits[suit];
}

struct Card
{
	Rank rank{};
	Suit suit{};
};

#endif
