#ifndef CFACE_H
#define CFACE_H
#include <list>
#include "CVertex.h"
using namespace std;
class CFace
{
    //Instance Variables
    private:
        list<CVertex*> vertices;
    //Methods
    public:
        CFace(list<CVertex*> vertices);
        list<CVertex*> getVertices();
};

#endif