#include <iostream>
using namespace std;
void printCircumference(float r)
{
	cout << "The circumference of circle is: " << 2 * r * 3.1416;
}
void printArea(float r)
{
	cout << "\nThe area of circle is: " << r * 3.1416 * 3.1416;
}
int main()
{
	float radius;
	cout << "Enter the radius of circle: ";
	cin >> radius;
	printCircumference(radius);
	printArea(radius);
	return 0;
}