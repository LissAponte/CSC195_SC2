#include "Fruit.h"
#include <iostream>
using namespace std;


	void Fruit::Read(std::ostream& ostream, std::istream& istream)
	{
		ostream << "Enter fruit name: ";
		istream >> m_name;
	}

	void Fruit::Write(std::ostream& ostream)
	{
		ostream << "Name: " << m_name << endl;
	}





