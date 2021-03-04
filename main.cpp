#include <iostream>
#include <string>
#include "CObject.h"
using namespace std;
int main(void)
{
  string nombre;
  cout << "Please enter the name of the obj file" << endl;
  cin >> nombre;
  CObject* object;
  object = new CObject(nombre);
  object->printData();
  return 0;
}