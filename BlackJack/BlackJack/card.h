#ifndef CARD_CPP_
#define CARD_CPP_

#include "stdafx.h"
using namespace std;


class card
{
public:
	friend ostream& operator << (ostream& out, card h);
	friend bool operator!= (const card L, const card R);
	char Suit; //Suit of card
	char Value; //Value of card
	string SuitName;
	string ValueName;
	bool set;
	card();
	
};

#endif