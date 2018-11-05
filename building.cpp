//
//  test.cpp
//  assign 2
//
//  Created by Lane Tunstall on 2/17/16.
//  Copyright © 2016 Lane Tunstall. All rights reserved.
//

#include "building.h"
#include <iostream>
using namespace std;

string desc; //temporary replace with actual description when you know whatat to do
int Building::getID() //returns name
{
    return ID;
}

string Building::getName()
{
    return name;
}

string Building::getDescription() //returns descrition
{
    return desc;
}

void Building::setID(int x) // set the id to the value sent here
{
    Building::ID = x;
}

void Building::setDescription(string desc1) // set description to value sent in parameter
{
    desc = desc1;
}

void Building::buildConst(int ID, string name, string bdesc) // runs all
{
    setID(ID);
    setName(name);
    setDescription(bdesc);
}
