#include "campus.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int size;
char* hold;
string compair = "-";
string ** academic = new string*[size];
string ** recreation = new string*[size];
string str[50];
void loadFile()
{
        ifstream infile("campus.txt"); //load
        stringstream buffer; // buffer
        buffer << infile.rdbuf();
        string test = buffer.str(); // set string test to buffer of file

    
        size_t pos1 = 0; //pos 1 is the first postion of the file
        size_t pos2; //this will be anywhere there is a "-"
        size_t fin; //this will be end of line

    
        for (int i=0; i<100; i++) // loops
        {
            pos2 = test.find("-", pos1); // search for - then records value
            fin = test.find(".", pos1); // serach for . then records place
            str[i] = test.substr(pos1, (pos2-pos1)); // math and stuff for fun and more values
            if ((str[i]=="a")) // checks for academic or r
            {
                while(str[i]!=str[fin])
                {
                    academic[i]=&str[i];
                }
            }
            else if ((str[i]=="r"))
            {
                while(str[i]!=str[fin])
                {
                    recreation[i]=&str[i];
                }
            }
        }
    
}
void searchList()
{
    
    int i =0;
    string userSearch;
    cin >> userSearch;
    while(str[i] != userSearch)
    {
        i++;
    }
    cout << str;
    i =0;
    
}
void searchName()
{
    
    int i =0;
    string userSearch;
    cin >> userSearch;
    while(str[i] != userSearch)
    {
        i++;
    }
    cout << str;
    i =0;
    
}