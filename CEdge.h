#ifndef CEDGE_H
#define CEDGE_H
#include "CVertex.h"
class CEdge
{
    //Instance Variables
    private:
        CVertex* up;

    //Methods
    public:
        CEdge(CVertex *up);
        CVertex* getUp();
};

#endif