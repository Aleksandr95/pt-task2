#include <iostream>
#include <oop.h>

  using namespace std;

  void Function(const Base &obj)
  {
      cout << "* Call method func() for object obj" << endl;
      obj.func();
  }
