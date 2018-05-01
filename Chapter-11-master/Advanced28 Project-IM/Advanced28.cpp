//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <Austin Richards> on <5/1/2018>

#include <iostream>
using namespace std;

int main()
{
	//declare array
	int testScores[] = { 67, 78, 75, 44, 80, 89, 91, 92, 93, 65, 21, 77, 14, 88, 88, 87, 56, 44, 78, 98 };

	//declare variables
	int searchScore = 0;
	int total       = 0;

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (testScores[x] == searchScore)       
				total += 1;    
			 
		//end for

		//display total
		cout << "Number of students earning a score of " 
			<< searchScore << ": " 
			<< total << endl << endl; 
	
		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while
	
	system("pause");
	return 0;
}	//end of main function