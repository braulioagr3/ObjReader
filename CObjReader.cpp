#include "CObjReader.h"

CObjReader::CObjReader(string name)
{
    this->name = name;
}

void CObjReader::readFile()
{
  string s;
  ifstream f("Models/"+this->name);
  if(f.is_open())
  {
    getline(f,s);
    this->parseLine(s);
    while(!f.eof())
    {
      getline(f,s);      
      this->parseLine(s);
    }
  }
  else
  {
    cerr << "Error de apertura del archivo." << endl;
  }
}

void CObjReader::parseLine(string line)
{
  if(!line.empty())
  {
    vector<string> data;
    char first;
    first = line.front();
    switch (first)
    {
      case 'o':
        id = line.substr(2,line.length()-2);
        this->object = new CObject(id);
        this->objects.push_back(this->object);
      break;
      case 'v':
        line = line.substr(2,line.length()-2);
        data = CAuxiliarMethods::splitLine(line);
        this->object->addVertex(data);
      break;
      case 'f':
        line = line.substr(2,line.length()-2);
        data = CAuxiliarMethods::splitLine(line);
        this->object->addFace(data);
      break;
    }
  }
}

void CObjReader::printData()
{
  for(int i = 0 ; i < this->objects.size() ; i++)
  {
    this->objects[i]->printData();
  }
}