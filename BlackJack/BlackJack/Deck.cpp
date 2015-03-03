
#include "stdafx.h"
using namespace std;
Deck::Deck()
{
	Cards = new card[52];
	for (int i = 0; i < 52; i++)
	{
		Cards[i].set = false;
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

void Deck::create_cards()
{

	key = rand() % 52;
	int Scount = 1;
	int Vcount = 0;
	for (int i = 0; i < 52; i++, Scount++)
	{
		card *temp = new card;
		if (i % 4 == 0){
			Vcount++;
			temp->Suit = 'H';
		}
		else if (i%4 == 1)
			temp->Suit = 'S';
		else if (i%4 == 2)
			temp->Suit = 'D';
		else if (i%4 == 3)
			temp->Suit = 'C';
		temp->Value = Vcount + 48;

		//while we are not looking at an empty card
		//slot, look for a new slot
		while (Cards[key].set) 
			key = rand() % 52;
		Cards[key] = *temp;
		Cards[key].set = true;
	}
}

void Deck::fill_deck()
{
	for(int i = 0; i < 52; i++)
	{
		Stacked.push(Cards[i]);
	}
}