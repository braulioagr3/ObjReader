#include "CFace.h"

CFace::CFace(list<CVertex*> vertices)
{
    this->vertices = vertices;
}

list<CVertex*> CFace::getVertices()
{
    return this->vertices;
}