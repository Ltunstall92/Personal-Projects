//
//  Recreation.h
//  assign 2
//
//  Created by Lane Tunstall on 2/21/16.
//  Copyright © 2016 Lane Tunstall. All rights reserved.
//
#include <string>
#include "building.h"

class Recreation: public Building //child of building
{
private:
    int numOfStores;
public:
    void rec();
    void rec(int ID,string name, string description,int numOfStores);
    int getNumOfStores();
    void setNumOfStores(int);
    virtual void showFullDescription();
};