#ifndef COBJECT_H
#define COBJECT
#include <list>
#include <string>
#include <vector>
#include <iostream>
#include "CVertex.h"
#include "CFace.h"
using namespace std;
class CObject
{
    //Instance variables
    private:
        int idVertex;
        string id;
        list<CVertex*> vertices;
        list<CFace*> faces;
    
    //Methods
    public:
        CObject(string id);
        void printData();
        list<CVertex*> getVertices();
        void addVertex(vector<string> data);
};

#endif