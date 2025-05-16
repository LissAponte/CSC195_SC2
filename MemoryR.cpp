#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void square(int& i)
{
	i = i * i;
}

void Double(int* i)
{
	*i = *i * 2;
}
int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	 int id2 = 6;
	// declare a int reference and set it to the int variable above
	int& id = id2;
	// output the int variable
	cout << "id2: " << id2 << endl;
	

	// set the int reference to some number
	 id2 = 10;
	// output the int variable
	cout << "id2: " << id2 << endl;
	// what happened to the int variable when the reference was changed? (insert answer)

	/*
	  When the reference was changed the variable also changed because it was an alias of the int variable
	*/

	// output the address of the int variable
	cout << "address of id2: " << &id2 << endl;
	// output the address of the int reference
	cout << "address of id: " << &id << endl;		
	// are the addresses the same or different? (insert answer)

	/*
	   The addresses are the same
	*/

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	square(id2);
	// output the int variable to the console
	cout << "id2: " << id2 << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* pointer = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	pointer = &id2;			
	// output the value of the pointer
	 cout << "value of pointer: " << pointer << endl;	
	// what is this address that the pointer is pointing to? (insert answer)
	
	 /*
	    It's pointing to the memory location of the id2 variable
	 */
	
	// output the value of the object the pointer is pointing to (dereference the pointer)
	 cout << "dereference pointer: " << *pointer << endl;
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	 Double(pointer);
	// output the dereference pointer
	 cout << "Pointer with double method: "<< *pointer << endl;
	// output the int variable created in the REFERENCE section
	 cout << "id2: " << id2 << endl;
	// did the int variable's value change when using the pointer?

	/*
	   The value changed to 200
	*/

}