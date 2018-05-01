// Date: 4/26/2018
// Program: Array Tutorial
// Author: Austin Richards

#include <iostream>
using namespace std;
int main()
{
	int foo[] = { 16, 2, 77, 40, 12071 };
	int n, result = 0;

	for (n = 0; n < 5; n++)
	{
		result = result + foo[n];
	
	}
	cout << result << endl;
	system("Pause");
	return 0;
}