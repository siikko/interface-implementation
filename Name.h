/*�������̽�*/

#ifndef NAME_H //include guard, hearder guard ������ �ߺ� ����
#define NAME_H

#include <string>
//header file���� Xusing namespace ���X

class Name {
public:
	explicit Name(std::string = "no", std::string = "name"); //default�ϱ� explicit
	void setFirstName(std::string);
	void setLastName(std::string);
	std::string getFirstName() const; //get func�ϱ� const
	std::string getLastName() const;  //get func�ϱ� const
	std::string getFullName() const;  //get func�ϱ� const

private:
	std::string firstName;
	std::string lastName;

};
#endif
