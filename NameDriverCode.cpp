#include "Name.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	Name defaultArg;
	Name obj1{ "Si Eun" };
	Name obj2{ "Si Eun" ,"Lee" };

	cout << "Default: " << defaultArg.getFullName() << endl;
	cout << "obj1: " << obj1.getFullName() << endl;
	cout << "obj2: " << obj2.getFullName() << endl;

	obj1.setLastName("Kim");
	cout << "obj1 after setLastName: " << obj1.getFullName() << endl;

	try {
		obj1.setFirstName("P");
	}
	catch(invalid_argument& e){
		cerr << "\nException: " << e.what() << endl;
	}

	try {
		obj2.setFirstName("");
	}
	catch (invalid_argument& e) {
		cerr << "\nException: " << e.what() << endl;
	}
}