/*구현을 위한 cpp파일 (이름이 꼭 Name일 필요는 없다.)*/
#include "Name.h" //헤더파일을 불러와야하는 것을 잊지말자
#include <string>
#include <sstream> //ostringstream
#include <stdexcept> //invalid_argument



using namespace std;



/*생성자 함수*/
Name::Name(string firstName, string lastName)
{
	setFirstName(firstName);
	setLastName(lastName);
}



/*이름을 setting하는 함수*/
void Name::setFirstName(string firstName)
{
	/*exception handling*/
	if (firstName.length() < 2)
	{
		throw invalid_argument("length of the firstName must be longer than 1");
	} 

	this->firstName = firstName; 
	//this를 사용하는 이유
	//this가 가르키는 firstName은 class의 data member이고, 우측의 firstName은 argument이다.
	//this의 기능인  '객체의 멤버 접근'으로 매개변수 이름과 멤버 변수와 겹칠 때 유용하게 사용할 수 있다.

}



/*성을 setting하는 함수*/
void Name::setLastName(string lastName)
{
	
	if (lastName.length() < 2)
	{
		throw invalid_argument("length of the lastName must be longer than 1");
	}

	this->lastName = lastName;
	
}


/*성을 반환하는 함수*/
string Name::getFirstName() const
{
	return firstName;
}

/*이름을 반환하는 함수*/
string Name::getLastName() const
{
	return lastName;
}

/*전체 이름을 반환하는 함수*/
string Name::getFullName()const
{
	ostringstream fullname;
	fullname << firstName << " " << lastName;
	return fullname.str();
}

