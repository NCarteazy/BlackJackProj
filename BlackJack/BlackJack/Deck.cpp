
#include "stdafx.h"
using namespace std;
Deck::Deck()
{
	key = rand() % 52;
	CardCount = 0;
	Cards = new card[52];
	for (int i = 0; i < 52; i++)
	{
		Cards[i].setIsSet(false);
	}

	create_cards();

	fill_deck();

}

ostream& operator << (ostream& ous, Deck h)
{
	for (int i = 0; i < 52; i++)
	{
		ous << setw(3) << "#" << i << "  " << setw(3) << h.Cards[i] << endl;
	}
	return ous;
}

bool Deck::Deck_Check()
{
	card checker = Queued.front();
	int i = 0;

	do 
	{
		Queued.push(Queued.front());
		Queued.pop();
		i++;
		if (i > 52)
			return false;
	} while (checker != Queued.front());

	return true;
}

void Deck::create_cards()
{
	int Scount = 1;
	int Vcount = 0;
	for (int i = 0; i < 52; i++, Scount++)
	{
		card *temp = new card;
		temp->setValue(Vcount);

		//while we are not looking at an empty card
		//slot, look for a new slot
		while (Cards[key].getIsSet()) 
			key = rand() % 52;

		Cards[key] = *temp;
		Cards[key].setIsSet(true);
		delete temp;
	}
}

void Deck::fill_deck()
{
	for(int i = 0; i < 52; i++)
	{
		CardCount++;
		Queued.push(Cards[i]);
		cout << CardCount << endl;
	}
}