#ifndef DECK_CPP_
#define DECK_CPP_

#include "stdafx.h"
using namespace std;


class Deck
{
public:
	Deck();
	friend ostream& operator << (ostream& out, Deck h);
	bool Deck_Check();
private:
	int key;
	int CardCount;
	card * Cards;
	queue<card> Queued;
	void create_cards();
	void fill_deck();
};

#endif