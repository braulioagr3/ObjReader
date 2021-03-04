#ifndef CObJREADER_H
#define CObJREADER_H
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include "CObject.h"
#include "CAuxiliarMethods.h"
using namespace std;
class CObjReader
{
    //Instance Variables
    private:
        string name;
        string id;
        CObject* object;
        list<CObject*> objects;
    //Methods
    public:
        CObjReader(string name);
        void readFile();
        void parseLine(string line);
};

#endif