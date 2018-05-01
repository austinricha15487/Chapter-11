//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <Austin Richards> on <5/1/2018>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sub    = 0;    //keeps track of subscripts
	int points = 0;  
	char finalGrade;
	//declare arrays and fill with data
	int totalPoints[] = { 0, 300, 350, 400, 450 };
	char grade[] = { 'F', 'D', 'C', 'B', 'A' };
	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;
	if (points >= totalPoints[0] && points < totalPoints[1])
	{
		finalGrade = grade[0];
		cout << "This student only got a grade of " << finalGrade << endl;
	}
	else if (points >= totalPoints[1] && points < totalPoints[2])
	{
		finalGrade = grade[1];
		cout << "This student got a grade of " << finalGrade << endl;
	}
	else if (points >= totalPoints[2] && points < totalPoints[3])
	{
		finalGrade = grade[2];
		cout << "This student got a grade of " << finalGrade << endl;
	}
	else if (points >= totalPoints[3] && points < totalPoints[4])
	{
		finalGrade = grade[3];
		cout << "This students got a grade of " << finalGrade << endl;
	}
	else if (points >= totalPoints[4])
	{
		finalGrade = grade[4];
		cout << "This student got a grade of " << finalGrade << endl;
	}
	else
	{
		cout << "That isn't an option! Try Again! " << endl;
	}
	system("pause");
	return 0;
}	//end of main function