#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int counter = 0;
	bool flag = true;
	cout << "Enter a string: ";
	cin >> str;
	while (counter <= str.length() - 1 && flag == true)
	{
		if (str[counter] == 'a' && str[counter + 1] == 'a')
		{
			flag = true;
		}
		counter++;
	}
	cout << flag;
	return 0;
}