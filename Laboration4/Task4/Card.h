#pragma once
#include <string>
class Card
{
	std::string suit;
	int suitNum;
	std::string rank;
	int rankNum;
	int amountOfCards;


public:
	Card();
	Card(int suitNumIn, int rankNumIn);
	virtual ~Card();
	void Print();
};

