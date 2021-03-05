#include "CFace.h"

CFace::CFace()
{
}

vector<CVertex*> CFace::getVertices()
{
    return this->vertices;
}

void CFace::addVertex(CVertex* vertex)
{
    this->vertices.push_back(vertex);
}

void CFace::printData()
{
    string face;
    face = "Face: (";
    for(int i = 0 ; i < this->vertices.size() ; i++)
    {
        face += "," + to_string(this->vertices[i]->getID());
    }
    cout << face +")"<< endl;

}