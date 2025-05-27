#include "FruityDatabase.h"
#include "Berry.h"
#include "Grape.h"
#include <iostream>
using namespace std;


void FruityDatabase::Create(Fruit::eType type)
{
	Fruit* fruit = nullptr;
	switch (type) {
	case Fruit::BERRY:
		fruit = new Berry;
		break;
	
	case Fruit::GRAPE:
		fruit = new Grape;
		break;
	default:
		break;
	}
	fruit->Read(std::cout, std::cin);
	fruits.push_back(fruit);
}

void FruityDatabase::DisplayAll()
{
	for (Fruit* fruit : fruits)
	{
		if (fruit->GetType() == 0)
		{
			fruit->Write(std::cout);
		}
	}


	for (Fruit* fruit : fruits)
	{
		delete fruit;
	}
}
