//
//  Academic.h
//  assign 2
//
//  Created by Lane Tunstall on 2/18/16.
//  Copyright © 2016 Lane Tunstall. All rights reserved.
//

#include "campus.h"

class Academic:public Building //child of building
{
private:
    int numOfRooms;
public:
    int getNumOfRooms();
    void setNumOfRooms(int);
};