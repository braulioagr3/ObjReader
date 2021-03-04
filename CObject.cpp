#include "CObject.h"
CObject::CObject(string id)
{ 
    this->id = id;
    this->idVertex = 0;
}
void CObject::printData()
{
  cout << "Not implement yet" << endl;
}

void CObject::addVertex(vector<string> data)
{
  CVertex* vertex;
  this->idVertex++;
  vertex = new CVertex(this->idVertex,stof(data[0]),stof(data[1]),stof(data[2]));
  this->vertices.push_back(vertex);
}

list<CVertex*> CObject::getVertices()
{
  return this->vertices;
}