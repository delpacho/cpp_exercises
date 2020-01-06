#include <iostream>
#include "shared_pointer.hpp"

int main() {
  int * p = new int();
  *p =100;

  SharedPointer<int> sp1(p);
  SharedPointer<int> sp2 = sp1;

  {
    SharedPointer<int> sp3 = sp2;
  }

  //Deletion of the original ptr should be called once
  return 0;

}
