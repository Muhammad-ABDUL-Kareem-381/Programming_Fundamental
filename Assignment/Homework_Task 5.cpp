#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter first integer: ";
	cin >> num1;
	cout << "Enter second integer: ";
	cin >> num2;
	if ((num1 + num2) == 30 || num1 == 30 || num2 == 30)
	{
		cout << true;
	}
	else
	{
		cout << false;
	}
	return 0;
}