#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int input{};
	int c{};
	cout << "Enter a number: ";
	cin >> input;

	for (int i{1}; i <= input; i++)
	{
		for (int f{}; f <= i; f++)
		{
			for (int j{ input }; j >= i; j--)
			{
				cout << ' ';
			}
			cout << '*';
		}
		cout << endl;
	}
	

	return 0;
}