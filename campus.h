//
//  Header.h
//  assign 2
//
//  Created by Lane Tunstall on 2/17/16.
//  Copyright © 2016 Lane Tunstall. All rights reserved.
//

#include <string>
using namespace std;

class Campus
{
private:
    string ** academic;
    int ** recreation;
    int numberOfAcademic;
    int numberOfRecreation;
    void display();
    
public:
    static const int maxPerBuildingType;
    void loadFile();
    void searchList();
    void searchName();
};