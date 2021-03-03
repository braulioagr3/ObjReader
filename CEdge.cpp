#include "CEdge.h"

CEdge::CEdge(CVertex* up)
{
    this->up = up;
}

CVertex* CEdge::getUp()
{
    return this->up;
}