#include "FruityDatabase.h"
#include "Berry.h"
#include "Grape.h"
#include "Fruit.h"
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
		fruit->Write(std::cout);

		
	}
}

void FruityDatabase::Display(const std::string& name)  
{  
   for (Fruit* fruit : fruits)  
   {  
       if (fruit->GetName() == name)  
       {  
           if (fruit->GetType() == Fruit::BERRY)  
           {  
               cout << "Berry: " << fruit->GetName() << endl;  
			   cout << "Berry amount: " << static_cast<Berry*>(fruit)->m_berry_amount << endl;	
           }  
            if (fruit->GetType() == Fruit::GRAPE)  
           {  
               cout << "Grape: " << fruit->GetName() << endl;  
			   cout << "Amount of grapes: " << static_cast<Grape*>(fruit)->m_grape_amount << endl;
           } 
			else {
				cout << "Fruit type not found." << endl;
			}
           return;  
       }  
   }  
   cout << "Fruit with name '" << name << "' not found." << endl;  
}

void FruityDatabase::Display(Fruit::eType type)
{
	cout << "Display fruit type: " << type << endl;
	for (Fruit* fruit : fruits)
	{
		if (fruit->GetType() == type )
		{
			fruit->Write(std::cout);
		}
	}
}



FruityDatabase::~FruityDatabase() {

	for (Fruit* fruit : fruits)
	{
		delete fruit;
	}
}
