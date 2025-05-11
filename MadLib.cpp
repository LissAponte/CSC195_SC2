#include "MadLib.h"



void MadLib::Write() {
	std::cout << "Enter a name: ";
	std::getline(std::cin, name);
	std::cout << "Enter a verb: ";
	std::getline(std::cin, verb);
	std::cout << "Enter an adjective: ";
	std::getline(std::cin, adjective);
	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //asked Copilot for help as the pluralnoun getline was not working
	std::cout << "Enter a plural noun: ";
	std::getline(std::cin, pluralNoun); 
	std::cout << "Enter an adverb: ";
	std::getline(std::cin, adverb);
	std::cout << "Enter another verb: ";
	std::getline(std::cin, verb2);

	MadLib::Read();
}
void MadLib::Read() {
	

	std::string story = name + " the hamster is a small rodent. He always " + verb + " when the owner lets him out of the cage";
	std::string s = " The " + adjective + " mammal has the stomach of " +  std::to_string(number) + " " + pluralNoun; 
	std::string s1 = " Finally he " + adverb + " sleeps after a long day of " + verb2 + " around.";

	std::cout << story << std::endl;
	std::cout << s << std::endl;
	std::cout << s1 << std::endl;

	
}

