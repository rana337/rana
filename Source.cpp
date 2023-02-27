#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "welcome to calculate area program  /n ";
	cout << "please enter area reduis  /n ";
	float  height{ 0 }, base{ 0 }, result{ 0 };
	const float constvalue = 2;

	cin >> height;
	cin >> base;
	result = constvalue * height + base;
	cout << "area is " << result;
}

