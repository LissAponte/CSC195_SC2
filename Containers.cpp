#include <iostream>
using namespace std;
#include <array>
#include <vector>
#include <list>
#include <map>


			//methods and functio under main!					

int main() {  

	
	handleArray(); 								
	handleVector();
	handleList();
	handleMap();
	
	//main calls the functions


}

// functions

void handleArray() {

	cout << "Array: " << endl;

	array <string, 7> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" }; //created and initialized string array

	cout << "All elements: " << endl;

	for (string day : days) {
		cout << day << " ";  //loops and prints elements
	}
	cout << endl;
}

void handleVector() {
	cout << "Vector: " << endl;

	vector <int> numbers = { 10, 20, 30, 40, 50 }; //created and initialized int vector


	cout << "All elements: " << endl;

	loopNumbers(numbers); //used created method to loop thru elements

	numbers.push_back(60);   //added 2 elements to the back of the vector
	numbers.push_back(70);


	cout << "All elements + added elements: " << endl;
	loopNumbers(numbers); //loops once more to verify the added elements	

	numbers.pop_back(); //removed last element


	cout << "All elements - last added element: " << endl;
	loopNumbers(numbers); //loops again to verify the last element was removed		

}

void handleList() {
	cout << "List: " << endl;

	list <string> fruits = { "watermelon", "grapes", "pineapple" }; //created and initialized string list

	cout << "All elements: " << endl;
	loopFruits(fruits); //used created method to loop thru elements


	fruits.push_front("kiwi"); //added element to the front of the list
	fruits.push_back("strawberry"); //added element to the back of the list

	cout << "All elements + added elements: " << endl;
	loopFruits(fruits); //loops once more to verify the added elements


	fruits.remove("grapes"); //removed grapes from list

	cout << "All elements - grapes: " << endl;
	loopFruits(fruits); //loops again to verify grapes was removed	
}

void handleMap() {
	cout << "Map: " << endl;
	map <string, int> groceryStocks = { {"apples", 10}, {"bananas", 20}, {"oranges", 30} }; //created and initialized string-int map	

	cout << "All elements: " << endl;
	loopsStocks(groceryStocks); //used created method to loop thru elements					

	groceryStocks["oranges"] = 35; //changed value of oranges to 35											

	cout << "All elements - changed oranges: " << endl;	 // loops to verify the change
	loopsStocks(groceryStocks);

} 

//made methods to use the loop function to verify the changes as it went


void loopNumbers(vector<int> numbers) {
	for (int i = 0; i < numbers.size(); i++) {       //iterates thru the vector
		cout << numbers[i] << " ";
	}
	cout << endl;
}

void loopFruits(list<string> fruits) {
	for (string fruit : fruits) {   // iterates thru the list								
		cout << fruit << " ";
	}
	cout << endl;
}
void loopsStocks(map<string, int> groceryStocks) {
	for (auto gS : groceryStocks) { //iterates thru the map
		cout << gS.first << ": " << gS.second << endl; //prints key and value
	}
	cout << endl;
}