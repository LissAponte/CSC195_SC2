#pragma once 
#include <iostream>	
#include <string>

class MadLib {


public:
	void Read();
	void Write();


private:
	std::string name;
	std::string verb;
	std::string adjective;
	int number;
	std::string pluralNoun;
	std::string adverb;
	std::string verb2;
};

