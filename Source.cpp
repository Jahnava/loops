//

#include<iostream>
using namespace std;

int main()
{
	//variables
	int counter = 0;
	int sum = 0;
	int inputNum;

	while (counter < 5)
	{
		cout << "Enter a number: ";
		cin >> inputNum;

		sum += inputNum;
		counter++;

	}

	cout << "The sum of the value is: " << sum << endl;

}