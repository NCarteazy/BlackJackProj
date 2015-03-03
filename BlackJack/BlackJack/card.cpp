#include "stdafx.h"
using namespace std;

card::card()
	{
		Suit = 'N';
		Value = 'N';
		set = false;
	}


ostream& operator << (ostream& ous, card c)
{
	ous << c.Suit << setw(3) << c.Value << setw(3) << c.set;
	return ous;
}
