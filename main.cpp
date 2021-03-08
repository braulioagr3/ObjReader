#include <iostream>
#include <string>
#include "CObjReader.h"
using namespace std;

int main(void)
{
  string name;
  cout << "Please enter the name of the obj file" << endl;
  cin >> name;
  CObjReader* objectReader;
  objectReader = new CObjReader(name);
  objectReader->readFile();
  objectReader->printData();
  return 0;
}