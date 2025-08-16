#include<iostream>
using namespace std;
void displayGrades(int i)
{
	cout << "Your Grade is ";
	if (i >= 91)
	{
		cout << "AA";
	}
	else if (i >= 81)
	{
		cout << "AB";
	}
	else if (i >= 71)
	{
		cout << "BB";
	}
	else if (i >= 61)
	{
		cout << "BC";
	}
	else if (i >= 51)
	{
		cout << "CD";
	}
	else if (i >= 41)
	{
		cout << "DD";
	}
	else if (i <= 40)
	{
		cout << "Fail";
	}

}
int main()
{
	int marks;
	cout << "Enter your marks: ";
	cin >> marks;
	displayGrades(marks);
	return 0;
}