#ifndef CVERTEX_H
#define CVERTEX_H
#include <list>
#include "CEdge.h"
using namespace std;
class CVertex
{
    //Instance variables
    private:
        string id;
        float x;
        float y;
        float z;
        list<CEdge*> edges;

    //Methods
    public:
        CVertex(float X, float Y, float Z);
        float getX();
        float getY();
        float getZ();
        list<CEdge*> getEdges();
    protected:
};

#endif