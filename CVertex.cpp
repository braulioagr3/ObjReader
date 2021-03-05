#include "CVertex.h"
CVertex::CVertex(int id,float x, float y, float z)
{
    this->id = id;
    this->x = x;
    this->y = y;
    this->z = z;
}

float CVertex::getX()
{
    return this->x;
}
float CVertex::getY()
{
    return this->y;
}
float CVertex::getZ()
{
    return this->z;
}
int CVertex::getID()
{
    return this->id;
}

void CVertex::printData()
{
  cout << "vertex id: " + to_string(this->id) +
          ", X component: " + to_string(this->x)+
          ", Y component: " + to_string(this->y)+
          ", Z component: " + to_string(this->z)
          << endl;
}