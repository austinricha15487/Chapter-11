// Date: 4/26/2018
// Program: Array Tutorial
// Author: Austin Richards

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void displayArray(double dollars[], int numElements)
{
	double total = 0;
	cout << fixed << setprecision(2) << endl << endl;
	for (int sub = 0; sub < numElements; sub++)

	{
		cout << "Sales for Region " << sub + 1 << ": $";
		cout << dollars[sub] << endl;
		total = total + dollars[sub];
	}
	cout << "Your total is " << total << endl;
}
int main()
{
	double sales[4] = { 0.0 };
	double total = 0;
	int answer = 1;
	while (answer == 1 )
	{

		for (int sub = 0; sub < 4; sub++)
		{
			cout << "Enter sales for region ";
			cout << sub + 1 << ": ";
			cin >> sales[sub];
		}
		
		displayArray(sales, 4);
		cout << "Would you like to calculate anything else" << endl;
		cin >> answer;
	}
	

	

	cout << " You're total is  " << total << endl;
	system("Pause");
	return 0;
}

