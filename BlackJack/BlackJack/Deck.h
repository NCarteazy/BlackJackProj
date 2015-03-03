#ifndef DECK_CPP_
#define DECK_CPP_

#include "stdafx.h"
using namespace std;


class Deck
{
public:
	Deck();
	friend ostream& operator << (ostream& out, Deck h);
private:
	int key;
	card * Cards;
	stack<card> Stacked;
	void create_cards();
	void fill_deck();
};

#endif