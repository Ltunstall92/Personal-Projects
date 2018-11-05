#include <iostream>
#include <string>
#include "Campus.h"
#include "Campus.cpp"
using namespace std;

int main()
{
    int user=0; // user input int holder
    cout << "please select a output(enter only the number:/n1) Search by List./n2) Search by name./n3) Exit. ";
    cin >> user;
    while(user != 3) //while loop to continue untill they enter 3
    {
        if (user == 1)
        {
            loadFile();
            searchList();
        }
        else if (user == 2)
        {
            loadFile();
            searchName();
        }
        else if (user == 3)
        {
            break;
        }
        else //error check repeat and allow a new input
        {
            cout << "Please enter a valid option: /n";
            cout << "please select a output(enter only the number:/n1) Search by List./n2) Search by name./n3) Exit. ";
            cin >> user;
        }
    }
    
}