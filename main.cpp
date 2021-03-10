#include <iostream>
#include <string>
#include "CObjReader.h"
#include "CAnimator.h"
using namespace std;

int main(int argc, char** argv)
{
  string name;
  CObjReader* objectReader;
  CAnimator* animator;
  cout << "Please enter the name of the obj file" << endl;
  cin >> name;
  objectReader = new CObjReader(name);
  objectReader->readFile();
  objectReader->printData();
  animator = new CAnimator(argc, argv, objectReader);
  animator->show();
  return 0;
}