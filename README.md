# Raub card game

- Deck APIs:

```cpp
	void init(); // populates the deck with cards
	void display();
	Card deal_card();
```   
- Player APIs:

```cpp
	Player(std::string player_name, int player_score);
	Card play_card(std::string rank, std::string suit);
	void take_card(Card card); // adds card to hand
	void display();
```    
- Card APIs:

```cpp
    std::string rank_to_string(Rank rank);
    std::string suit_to_string(Suit suit);
    Rank string_to_rank(std::string rank);
    Suit string_to_suit(std::string suit);
```    
 
