#ifndef CVERTEX_H
#define CVERTEX_H
#include <string>
using namespace std;
class CVertex
{
    //Instance variables
    private:
        float x;
        float y;
        float z;

    //Methods
    public:
        CVertex(float X, float Y, float Z);
        float getX();
        float getY();
        float getZ();
};

#endif