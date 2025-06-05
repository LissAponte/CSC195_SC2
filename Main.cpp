#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include "Music.h"
#include "Rock.h"
#include "Metal.h"
using namespace std;

int main() {
   
    ofstream outputFile("Songs.txt", ios::app);
    bool quit = false;
    while (!quit) {
        cout << "1 - Rock\n 2 - Metal\n ";
        int choice;
        cin >> choice;
		if (cin.fail() || (choice < 1 || choice > 2)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid choice. Please enter 1 for Rock or 2 for Metal." << endl;
			continue; // Skip to the next iteration of the loop
		}

        switch (choice) {

        case 1:
        {
			string favoriteSong;
            Rock* rockSong = new Rock;
            rockSong->Write(favoriteSong, outputFile);
            outputFile.close();
            ifstream inputFile("Songs.txt");
            rockSong->Read(inputFile);
            delete rockSong;
            
        }
            break;

        case 2:
        { 
			string favoriteBand;                
            Metal* metalSong = new Metal;
            metalSong->Write(favoriteBand, outputFile);
            outputFile.close();
            ifstream inputFile("Songs.txt");
            metalSong->Read(inputFile);
            delete metalSong;
        }
            
            break;

        default:
            
            cout << "Invalid choice. Please enter 1 for Rock or 2 for Metal." << endl;
            break;
        }
    }



}

