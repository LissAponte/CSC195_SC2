#include <iostream>
#include "FruityDatabase.h"
using namespace std;

int main() {
    
    FruityDatabase fruitydatabase;


	bool quit = false;
	while (!quit) {
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: fruitydatabase.Create(Fruit::eType::BERRY); break;
        case 2:  fruitydatabase.DisplayAll(); break; 
        case 3: 
        {
            cout << "Enter name: ";
            string name;
            cin >> name;
            fruitydatabase.Display(name); break;
        }
        case 4:
        {
            cout << "Enter type (0 for TYPE1, 1 for TYPE2): ";
            int t;
            cin >> t;
            fruitydatabase.Display(static_cast<Fruit::eType>(t)); break;
        }
        case 5:
            quit = true;
            break;
        }
    }
	

}