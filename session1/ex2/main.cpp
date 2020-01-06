#include <iostream>
#include "smart_pointer.hpp"


int main() {

  SmartPointer p = SmartPointer<double>();
  *p = 100.0;

  std::cout << p << std::endl;

  return 0;

}
