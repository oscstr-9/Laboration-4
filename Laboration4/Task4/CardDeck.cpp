#include "CardDeck.h"
#include <Iostream>

using namespace	std;


CardDeck::CardDeck(){
	int cards = 55;
	deck = new Card[cards];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			Card card;
			deck[amountOfCards] = Card(i,j);
			amountOfCards++;
		}
	}
	for (int i = 0; i < 3; i++) {
		deck[amountOfCards] = Card(4, 0);
		amountOfCards++;
	}
	for (int i = 0; i < 55; i++) {
		deck[i].Print();
	}
}


CardDeck::~CardDeck(){
	delete[] deck;
}
