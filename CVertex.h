#ifndef CVERTEX_H
#define CVERTEX_H
#include <string>
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
        CVertex(int id, float X, float Y, float Z);
        float getX();
        float getY();
        float getZ();
};

#endif