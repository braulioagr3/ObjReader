#ifndef COBJECT_H
#define COBJECT
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <stdlib.h>
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
        CObject(string id,int idVertex);
        void printData();
        void addFace(vector<string> data);
        void addVertex(vector<string> data);
        CVertex* searchVertex(string id);
        vector<CVertex*> getVertices();
        vector<CFace*> getFaces();
};

#endif