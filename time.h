#include <string>

/*include guard 혹은 header guard라고 불리며 pragma once와 같은 역할(중복방지)를 함*/
#ifndef TIME_H
#define TIME_H

//HEADER FILE에는 using namespace std; 사용하지 않아야 함.

class Time
{
public:
	void setTime(int, int, int); //set hour, minute, second
	std::string toUniverslaString() const;  //24-hour time format string
	std::string toStandardString() const;   //12-hour time format string

	//인터페이스에서는 함수에 대한 설명을 주석으로 달아주는 것을 권장.
	//const가 있는 것으로 보아 get func임을 알 수 있음.

private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};

#endif