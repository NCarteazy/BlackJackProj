#include "stdafx.h"
using namespace std;

card::card()
	{
		Value = 'N';
		ValueName = "N";
		isSet = false;
	}

void card::setIsSet(bool isSetValue)
{	isSet = isSetValue;}

bool card::getIsSet(void)
{	return isSet;}

void card::setValue(int isValue)
{
	Value = (isValue%13) + '0';
}
char card::getValue(void)
{
	return Value;
}

void card::setValueName(string isValueName)
{
	ValueName = isValueName;
}
string card::getValueName(void)
{
	return ValueName;
}

ostream& operator << (ostream& ous, card c)
{
	switch (c.Value)
	{
	case '1':
		c.ValueName = "A";
		break;
	case '2':
		c.ValueName = "2";
		break;
	case '3':
		c.ValueName = "3";
		break;
	case '4':
		c.ValueName = "4";
		break;
	case '5':
		c.ValueName = "5";
		break;
	case '6':
		c.ValueName = "6";
		break;
	case '7':
		c.ValueName = "7";
		break;
	case '8':
		c.ValueName = "8";
		break;
	case '9':
		c.ValueName = "9";
		break;
	case ':':
		c.ValueName = "10";
		break;
	case ';':
		c.ValueName = "J";
		break;
	case '<':
		c.ValueName = "Q";
		break;
	case '0':
		c.ValueName = "K";
		break;
	default:
		c.ValueName = "Problem";
	}
	
	ous << c.ValueName << setw(3) << c.Value;
	return ous;
}

bool operator != (const card L, const card R)
{
	if (L.Value == R.Value)
		return true;
	return false;
}

card& card::operator= (const card& RHS)
{
	this->Value = RHS.Value;
	this->ValueName = RHS.ValueName;
	this->isSet = RHS.isSet;
}