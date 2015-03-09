// BlackJack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	Deck a;
	Deck b;
	cout << a << b << endl;
	if (a.Deck_Check())
		cout << "Ayy" << endl;
	else
		cout << "Nayy" << endl;
	cin.ignore();
	return 0;
}

