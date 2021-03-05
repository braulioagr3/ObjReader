#ifndef CVERTEX_H
#define CVERTEX_H
#include <string>
#include <iostream>
using namespace std;
class CVertex
{
    //Instance variables
    private:
        int id;
        float x;
        float y;
        float z;

    //Methods
    public:
        CVertex(int id, float x, float y, float z);
        int getID();
        float getX();
        float getY();
        float getZ();
        void printData();
};

#endif