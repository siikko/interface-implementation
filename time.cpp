#include <iomanip> //setw, setfill����ϱ� ����.
#include <stdexcept> //invalid_argument ����ó�� �ϱ� ����.
#include <sstream> //ostringstream ����ϱ� ����.
#include <string>
#include "time.h" 
using namespace std;

void Time::setTime(int h, int m, int s)
{
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		hour = h;
		minute = m;
		second = s;
	}
	else
	{
		throw invalid_argument("�ð�, ��, �� ���� ������ ����� ���ڰ� �����մϴ�.");
	}
}

string Time::toUniverslaString() const
{
	ostringstream output;
	output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
	return output.str();
}

string Time::toStandardString() const
{
	ostringstream output;
	output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
	return output.str();
}