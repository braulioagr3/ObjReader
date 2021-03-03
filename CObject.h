#ifndef COBJECT_H
#define COBJECT
#include <list>
#include <string>
#include "CVertex.h"
#include "CFace.h"
using namespace std;
class CObject
{
    //Instance variables
    private:
        string name;
        list<CVertex*> vertices;
        list<CFace*> faces;
    protected:

    
    //Methods
    public:
        CObject(string name);
    protected:
};

#endif