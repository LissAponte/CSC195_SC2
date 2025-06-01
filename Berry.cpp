#include "Berry.h"
#include <iostream>
using namespace std;

void Berry::Read(std::ostream& ostream, std::istream& istream)
{
	Fruit::Read(ostream, istream);
	ostream << "How many Berries?: ";
	istream >> m_berry_amount;
}

void Berry::Write(std::ostream& ostream)
{
	ostream << "Berry Amount: " << m_berry_amount << endl;
	Fruit::Write(ostream);
}

