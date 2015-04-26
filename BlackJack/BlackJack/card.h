#ifndef CARD_CPP_
#define CARD_CPP_

#include "stdafx.h"
using namespace std;


class card
{
private:
	char Value; //Value of card
	string ValueName; //for display
	bool isSet; //has card been created?
public:
	card();
	
	void setIsSet(bool isSetValue);
	bool getIsSet(void);

	void setValue(char isValue);
	char getValue(void);

	void setValueName(string isValueName);
	string getValueName(void);
	
	friend ostream& operator << (ostream& out, card h);
	friend bool operator!= (const card L, const card R);
	card& operator= (const card& RHS);
	
	
};

#endif