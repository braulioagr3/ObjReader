#ifndef CFACE_H
#define CFACE_H
#include <vector>
#include "CVertex.h"
using namespace std;
class CFace
{
    //Instance Variables
    private:
        vector<CVertex*> vertices;
    //Methods
    public:
        CFace();
        vector<CVertex*> getVertices();
        void addVertex(CVertex* vertex);
        void printData();
};

#endif