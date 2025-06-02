#include "Grape.h"

void Grape::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter grape color: ";
	istream >> m_grape_name;
	ostream << "How many grapes?: ";
}

void Grape::Write(std::ostream& ostream)
{
	ostream << m_grape_name << endl;
	ostream << "Grape Amount: " << m_grape_amount << endl;
}
