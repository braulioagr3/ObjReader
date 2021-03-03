#include <iostream>
#include "CObject.h"
#include <string>
using namespace std;
int main(void)
{
  string nombre;
  cout << "Por favor ingrese el nombre del archivo obj" << std::endl;
  cin >> nombre;
  CObject* object;
  object = new CObject(nombre);
  return 0;
}