#ifndef COBJECT_H
#define COBJECT
#include <list>
#include <string>
#include <iostream>
#include "CVertex.h"
#include "CFace.h"
using namespace std;
class CObject
{
    //Instance variables
    private:
        string name;
        string id;
        list<CVertex*> vertices;
        list<CFace*> faces;
    protected:

    
    //Methods
    public:
        CObject(string name);
        void printData();
    protected:
};

#endif