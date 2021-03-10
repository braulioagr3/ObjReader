#ifndef CANIMATOR_H
#define CANIMATOR_H
#include "CObjReader.h"
#include <GL/glut.h>
using namespace std;
class CAnimator
{
    //Instance Variables
    private:
        int argc;
        char** argv;
        CObjReader* reader;
    //Methods
    public:
        CAnimator(int argc, char** argv, CObjReader* reader);
        void init(void);
        void setUp();
        void show();
        void display(void);
};

#endif