//
//  Header.h
//  assign 2
//
//  Created by Lane Tunstall on 2/17/16.
//  Copyright © 2016 Lane Tunstall. All rights reserved.
//

#include "campus.h"

class Building:public Campus //child of campus
{
private:
    int ID;
    string name;
public:
    void buidConst(); //unused
    void buildConst(int bID, string bname, string bBdesc);
    int getID();
    void setID(int);
    string getName();
    void setName(string);
    string getDescription();
    void setDescription(string);
    virtual void showFullDescription();
};