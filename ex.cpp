#include <iostream>
#include <stdexcept>
#include "time.h"
using namespace std;

void displayTime(const string& message, const Time& time)
{
	cout << message << "\nUniversal time: " << time.toUniverslaString() << "\nStadard time: " << time.toStandardString() << "\n\n";
}

int main()
{
	Time t;
	displayTime("#Initial time#", t);


	t.setTime(13, 27, 6);
	displayTime("#After setting#", t);

	try
	{
		t.setTime(99, 99, 99);
	}
	catch(invalid_argument& errormessage)
	{
		cout << "Exception:" << errormessage.what() << "\n\n";
	}

	displayTime("#After attempting to set an invalid time#", t);

}