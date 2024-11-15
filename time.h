#include <string>

/*include guard Ȥ�� header guard��� �Ҹ��� pragma once�� ���� ����(�ߺ�����)�� ��*/
#ifndef TIME_H
#define TIME_H

//HEADER FILE���� using namespace std; ������� �ʾƾ� ��.

class Time
{
public:
	void setTime(int, int, int); //set hour, minute, second
	std::string toUniverslaString() const;  //24-hour time format string
	std::string toStandardString() const;   //12-hour time format string

	//�������̽������� �Լ��� ���� ������ �ּ����� �޾��ִ� ���� ����.
	//const�� �ִ� ������ ���� get func���� �� �� ����.

private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};

#endif