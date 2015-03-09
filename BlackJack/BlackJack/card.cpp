#include "stdafx.h"
using namespace std;

card::card()
	{
		Suit = 'N';
		Value = 'N';
		SuitName = "N";
		ValueName = "N";
		set = false;
	}


ostream& operator << (ostream& ous, card c)
{
	switch (Suit)
	{
	case 'D':
		SuitName = "Diamonds";
		break;
	case 'S':
		SuitName = "Suits";
		break;
	case 'H':
		SuitName = "Hearts";
		break;
	case 'C':
		SuitName = "Clubs";
		break;
	default:
		SuitName = "Error";
		break;
	}

	switch (Value)
	{
	case '1':
	}
	
	ous << c.Suit << setw(3) << c.Value << setw(3) << c.set;
	return ous;
}

bool operator != (const card L, const card R)
{
	if (L.Suit == R.Suit && L.Value == R.Value)
		return true;
	return false;
}