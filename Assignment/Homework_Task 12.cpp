#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	if (num1 == num2)
	{
		cout << false;
	}
	else if ((100 - num1) > (100 - num2))
	{
		cout << num2;
	}
	else
	{
		cout << num1;
	}
	return 0;
}