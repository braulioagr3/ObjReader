#include "CVertex.h"
CVertex::CVertex(float X, float Y, float Z)
{
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