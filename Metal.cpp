#include "Metal.h"



void Metal::Read(ifstream& istream)
{
	Music::Read(istream);
	istream >> favoriteBand; 
	

}												

void Metal::Write(string text, ofstream& ostream)
{
	Music::Write(text, ostream);
	ostream << "Favorite Band" << favoriteBand << endl;
}

void Metal::play(string title, string artist)
{
	cout << "Playing Metal song: " << title << " by " << artist << endl;							
}

void Metal::pause(string title)
{
	Music::pause(title);
}						

