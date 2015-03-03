#ifndef CARD_CPP_
#define CARD_CPP_

#include "stdafx.h"
using namespace std;


class card
{
public:
	friend ostream& operator << (ostream& out, card h);
	char Suit; //Suit of card
	char Value; //Value of card
	bool set;
	card();
	
};

#endif