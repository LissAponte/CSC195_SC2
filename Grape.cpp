#include "Grape.h"

void Grape::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter grape type: ";
	istream >> m_grape_type;
}

void Grape::Write(std::ostream& ostream)
{
	ostream << m_grape_type << endl;
}
