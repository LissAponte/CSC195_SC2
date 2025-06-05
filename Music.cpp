#include "Music.h"
#include <fstream>
#include <iostream>
using namespace std;


void Music::Read(ifstream& istream)
{
	istream >> title;
	istream >> artist;

}

void Music::Write(string text, ofstream& ostream)
{
	ostream << title << endl;
	ostream << artist << endl;
	
}

void Music::play(string title, string artist)
{
	cout << "Playing: " << title << " by " << artist  << endl;													
}

void Music::pause(string title)
{
	cout << "Paused: " << title << endl;
}

