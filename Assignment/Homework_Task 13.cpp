#include <iostream>
using namespace std;
int product(int a, int b)
{
	return a * b;
}
int main()
{
	int num1, num2;
	cout << "Enter two Numbers: ";
	cin >> num1 >> num2;
	cout << "The product of given numbers is: " << product(num1, num2);
	return 0;
}