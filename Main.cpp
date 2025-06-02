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
       case 1: 
       {
           cout << "Enter type (0 for BERRY, 1 for GRAPE): ";
           int t;
           cin >> t;
           if (cin.fail() || (t < 0 || t > 1)) {
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cout << "Invalid type. Enter 0 for BERRY or 1 for GRAPE.\n";
               break;
           }
           fruitydatabase.Create(static_cast<Fruit::eType>(t)); 
           break;
       }
       case 2:  
           fruitydatabase.DisplayAll(); 
           break; 
       case 3: 
       {
           string name;
           cout << "Enter name: ";
           cin >> name;
           fruitydatabase.Display(name); 
           break;
       }
       case 4:
       {
           cout << "Enter type (0 for BERRY, 1 for GRAPE): ";
           int t;
           cin >> t;
           if (cin.fail() || (t < 0 || t > 1)) {
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cout << "Invalid type. Enter 0 for BERRY or 1 for GRAPE.\n";
               break;
           }
           fruitydatabase.Display(static_cast<Fruit::eType>(t));
           break;
       }
       case 5:
           quit = true;
           break;

       default:
           cout << "Invalid choice.\n";
           break;
       }
   }
}
