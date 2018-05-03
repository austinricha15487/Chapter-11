//Advanced32.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <Austin Richards> on <5/1/2018>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sub = 0;    //keeps track of subscripts
	int mostPossiblePoints = 0;
	int pointsEarned;
	char finalGrade;
	//declare arrays and fill with data
	int totalPoints[] = { 0, 300, 350, 400, 450 };
	char grade[] = { 'F', 'D', 'C', 'B', 'A' };
	//get total points
	cout << "Enter most points possible (negative number to stop program): ";
	cin >> mostPossiblePoints;
	cout << "Please enter how many points this student scored on the test!" << endl;
	cin >> pointsEarned;
	if (pointsEarned >= (mostPossiblePoints * .9))
	{
		cout << "This student recieved a grade of: " << grade[4] << endl;
	}
	else if (pointsEarned >= (mostPossiblePoints * .8) && pointsEarned < (mostPossiblePoints * .9))
	{
		cout << "This student recieved a grade of: " << grade[3] << endl;
	}
	else if (pointsEarned >= (mostPossiblePoints * .7) && pointsEarned < (mostPossiblePoints * .8))
	{
		cout << "This student got a grade of: " << grade[2] << endl;
	}
	else if (pointsEarned >= (mostPossiblePoints * .6) && pointsEarned < (mostPossiblePoints *.7))
	{
		cout << "This student recieved a grade of: " << grade[1] << endl;
	}
	else if (pointsEarned < (mostPossiblePoints * .6) && pointsEarned > 0)
	{
		cout << "This student sucks and recieved an " << grade[0];
	}
	else if (pointsEarned < 0)
	{
		return 0;
	}
	system("pause");
	return 0;
}	//end of main function