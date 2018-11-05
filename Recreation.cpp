#include "Recreation.h"
#include <string>
#include <iostream>
#include "building.h"
using namespace std;

Recreation::rec()
{}

Recreation::rec(int ID,string name,string description,int numOfStores):buildConst(ID,name,description) //sets values
{
    Recreation::numOfStores = numOfStores;
}
int Recreation::getNumOfStores() // returns number of stores
{
    return numOfStores;
}
void Recreation::setNumOfStores(int x) //sets number of stores
{
    numOfStores = x;
}
void showFullDescription()
{
    building::showFullDescription(); // runs another already made fuction 
}