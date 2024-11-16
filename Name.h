/*인터페이스*/

#ifndef NAME_H //include guard, hearder guard 목적은 중복 방지
#define NAME_H

#include <string>
//header file에는 Xusing namespace 사용X

class Name {
public:
	explicit Name(std::string = "no", std::string = "name"); //default니깐 explicit
	void setFirstName(std::string);
	void setLastName(std::string);
	std::string getFirstName() const; //get func니깐 const
	std::string getLastName() const;  //get func니깐 const
	std::string getFullName() const;  //get func니깐 const

private:
	std::string firstName;
	std::string lastName;

};
#endif
