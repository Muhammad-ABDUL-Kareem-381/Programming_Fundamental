#include <iostream>
using namespace std;
int main()
{
	int noOfTerms, counter = 1, sum = 0, a = 1;
	cout << "Enter the number of terms: ";
	cin >> noOfTerms;
	cout << "\nThe series is: ";
	cout << counter;
	while (counter < noOfTerms)
	{
		if (counter != noOfTerms)
		{
			cout << " + ";
		}
		cout << (a * 10) + 1;
		int b = (a * 10) + 1;
		counter++;
		sum = sum + (a * 10) + 1;
		a = b;
	}
	cout << "\n\nThe sum of series of is: " << sum + 1;
	cout << "\n\n";
	return 0;
}