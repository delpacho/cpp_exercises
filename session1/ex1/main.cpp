#include <iostream>
#include "src/smart_pointer.hpp"

int main() {

  SmartPointer p = SmartPointer();
  *p = 100;

  std::cout << p << std::endl;

}
