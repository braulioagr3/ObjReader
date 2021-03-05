#include "CObject.h"
int i = 0;
CObject::CObject(string id)
{ 
    this->id = id;
    this->idVertex = 0;
}

void CObject::addVertex(vector<string> data)
{
  this->idVertex++;
  vertex = new CVertex(this->idVertex,stof(data[0]),stof(data[1]),stof(data[2]));
  this->vertices.push_back(vertex);
}

vector<CVertex*> CObject::getVertices()
{
  return this->vertices;
}

void CObject::addFace(vector<string> data)
{
  CFace* face;
  CVertex* vertex;
  face = new CFace();
  string buffer;
  for(int i = 0 ; i < data.size() ; i++)
  {
    vertex = this->searchVertex(data[i]);
    face->addVertex(vertex);
  }
  this->faces.push_back(face);
}


void CObject::printData()
{
  cout << "-----------------------------------------------------------" << endl;
  cout << "Name of object: " + this->id << endl;
  cout << "Number of vertices: " + to_string(this->vertices.size()) << endl;
  cout << "Number of faces: " + to_string(this->faces.size()) << endl;
  for(int i = 0 ; i < this->vertices.size() ; i++)
  {
    this->vertices[i]->printData();
  }
  for(int j = 0 ; j < this->faces.size() ; j++)
  {
    this->faces[j]->printData();
  }
}

CVertex* CObject::searchVertex(string id)
{
  CVertex* vertex;
  for(int i=0 ; i < this->vertices.size() ; i++)
  {
    if(strcmp(id.c_str(), to_string(this->vertices[i]->getID()).c_str()) == 0)
    {
      vertex = this->vertices[i];
      break;
    }
  }
  return vertex;
}