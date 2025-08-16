#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "\nEnter second number: ";
	cin >> num2;
	int numerator, denominator, remainder;
	if (num1 < num2)
	{
		numerator = num2;
		denominator = num1;
	}
	else
	{
		numerator = num1;
		denominator = num2;
	}
	while (numerator % denominator )
	{
		remainder = numerator % denominator;
		numerator = denominator;
		denominator = remainder;
	}

	cout << "\nThe Greatest Common Divisor is: " << denominator;
	cout << "\n\n";
	return 0;
}