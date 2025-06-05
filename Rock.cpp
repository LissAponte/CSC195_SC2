#include "Rock.h"

void Rock::Read(ifstream& istream)
{
	Music::Read(istream);
	istream >> favoriteSong;  
}

void Rock::Write(string text, ofstream& ostream)
{
	Music::Write(text, ostream);															
	ostream << "Favorite Song: " << favoriteSong << endl;
}

void Rock::play(string title, string artist)
{
	cout << "Playing Rock song: " << title << " by " << artist << endl;
}

void Rock::pause(string title)
{
	Music::pause(title);							
}

