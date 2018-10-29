

#include <iostream>
using namespace std;

int main()
{
    double grade, workAmount, workGrade, possiblePoints, exGrade, totalpoints = 0, totalpossible = 0;
    double gradeSum = 0;
    cout << "Please enter how many assignments you have: ";
    cin >> workAmount;
    
    for (int count = 1; count <= workAmount; count++)
    {
        cout << "Score Recieved for exercise " << count << ": ";
        cin >> workGrade;
        cout << "Total points possible for exercise " << count << ": ";
        cin >> possiblePoints;
        exGrade = (workGrade * 100) / possiblePoints; //conversion of first grade into percent out of 100%
        gradeSum += exGrade; //add gade % to total points before dividing by number or exercises
        totalpoints += workGrade; //Adding all points together to get total points recieved
        totalpossible += possiblePoints; // Adding all the possibe points together to get total possible points
    }
    grade = gradeSum / workAmount; // diving total grade by the amount of exercises to get percent out of 100%
    
    if (grade <=100 && grade >= 90)
    {
        cout << "Your total is " << totalpoints << " out of " << totalpossible << " or a " << grade << "." << endl;
        cout << "You've recieved an A";
    }
    else if (grade < 90 && grade >= 80)
    {
        cout << "Your total is " << totalpoints << " out of " << totalpossible << " or a " << grade << ".";
        cout << "You've recieved a B";
    }
    else if (grade < 80 && grade >= 70)
    {
        cout << "Your total is " << totalpoints << " out of " << totalpossible << " or a " << grade << ".";
        cout << "You've recieved a C";
    }
    else if (grade < 70 && grade >= 60)
    {
        cout << "Your total is " << totalpoints << " out of " << totalpossible <<  " or a " << grade << ".";
        cout << "You've recieved a D";
    }
    else if (grade < 60 && grade >=0)
    {
        cout << "Your total is " << totalpoints << " out of " << totalpossible <<  " or a " << grade << ".";
        cout << "You've recieved an F";
    }
    else
    {
        cout << "Invalid Input";
    }
}

