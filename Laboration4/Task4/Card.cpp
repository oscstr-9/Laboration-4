#include "Card.h"
#include <string>
#include <IOstream>

using namespace std;

Card::Card() {

}
Card::Card(int suitNumIn, int rankNumIn){
	suitNum = suitNumIn;
	rankNum = rankNumIn;

	if (suitNum == 0) {
		suit = "Clubs";
	}
	else if (suitNum == 1) {
		suit = "Spades";
	}
	else if (suitNum == 2) {
		suit = "Hearts";
	}
	else if (suitNum == 3) {
		suit = "Diamond";
	}
	if (rankNum == 9) {
		rank = "Jack";
	}
	else if (rankNum == 10) {
		rank = "Queen";
	}
	else if (rankNum == 11) {
		rank = "King";
	}
	else if (rankNum == 12) {
		rank = "Ace";
	}
	else {
		rank = to_string(rankNum+2);
	}
	if (suitNum == 4) {
		suit = "Joker";
		rank = "Joker";
	}
}


Card::~Card(){

}


void Card::Print() {
	cout << suit << ", " << rank << endl;
}
