#ifndef COBJECT_H
#define COBJECT
#include <string>
#include <vector>
#include <cstring>
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
        vector<CVertex*> vertices;
        vector<CFace*> faces;
        CVertex* vertex;
    
    //Methods
    public:
        CObject(string id);
        void printData();
        vector<CVertex*> getVertices();
        void addVertex(vector<string> data);
        void addFace(vector<string> data);
        CVertex* searchVertex(string id);
};

#endif