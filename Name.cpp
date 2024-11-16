/*������ ���� cpp���� (�̸��� �� Name�� �ʿ�� ����.)*/
#include "Name.h" //��������� �ҷ��;��ϴ� ���� ��������
#include <string>
#include <sstream> //ostringstream
#include <stdexcept> //invalid_argument



using namespace std;



/*������ �Լ�*/
Name::Name(string firstName, string lastName)
{
	setFirstName(firstName);
	setLastName(lastName);
}



/*�̸��� setting�ϴ� �Լ�*/
void Name::setFirstName(string firstName)
{
	/*exception handling*/
	if (firstName.length() < 2)
	{
		throw invalid_argument("length of the firstName must be longer than 1");
	} 

	this->firstName = firstName; 
	//this�� ����ϴ� ����
	//this�� ����Ű�� firstName�� class�� data member�̰�, ������ firstName�� argument�̴�.
	//this�� �����  '��ü�� ��� ����'���� �Ű����� �̸��� ��� ������ ��ĥ �� �����ϰ� ����� �� �ִ�.

}



/*���� setting�ϴ� �Լ�*/
void Name::setLastName(string lastName)
{
	
	if (lastName.length() < 2)
	{
		throw invalid_argument("length of the lastName must be longer than 1");
	}

	this->lastName = lastName;
	
}


/*���� ��ȯ�ϴ� �Լ�*/
string Name::getFirstName() const
{
	return firstName;
}

/*�̸��� ��ȯ�ϴ� �Լ�*/
string Name::getLastName() const
{
	return lastName;
}

/*��ü �̸��� ��ȯ�ϴ� �Լ�*/
string Name::getFullName()const
{
	ostringstream fullname;
	fullname << firstName << " " << lastName;
	return fullname.str();
}

