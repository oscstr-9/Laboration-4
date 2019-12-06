#pragma once
#include "Card.h"

class CardDeck
{
	Card *deck;
	int amountOfCards = 0;

public:
	CardDeck();
	~CardDeck();
};

