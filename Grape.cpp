#include "Grape.h"

void Grape::Read(std::ostream& ostream, std::istream& istream)
{
	Fruit::Read(ostream, istream);
	ostream << "Enter grape color: ";
	istream >> m_grape_color;
	ostream << "How many grapes?: ";
	istream >> m_grape_amount;
}

void Grape::Write(std::ostream& ostream)
{
	Fruit::Write(ostream);
	ostream << "Grape color: " << m_grape_color << endl;
	ostream << "Grape Amount: " << m_grape_amount << endl;
}
