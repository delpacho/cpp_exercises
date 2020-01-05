#ifndef EX1_SMART_POINTER_H
#define EX1_SMART_POINTER_H

#include <iostream>

class SmartPointer {

  int * ptr_ = nullptr;

  public:
    SmartPointer();
    SmartPointer(int *);

    ~SmartPointer();

    int& operator * ();

    friend std::ostream& operator << (std::ostream&, SmartPointer&);
};

#endif