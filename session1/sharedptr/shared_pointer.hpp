#ifndef SHAREDPTR_SHARED_POINTER_H
#define SHAREDPTR_SHARED_POINTER_H

#include <iostream>

template <class T>
class SharedPointer {

  T * ptr_;
  short count_ = 0;

public:
  SharedPointer(T * sp = nullptr): ptr_(sp){
    if (ptr_)
      count_ ++;
  };

  // Copy constructor
  SharedPointer(SharedPointer<T>& sp)
  {
    ptr_ = sp.ptr_;
    count_ = sp.count_;
    count_++;
  }

  ~SharedPointer()
  {
    count_--;
    if (!count_){
      delete ptr_;
      std::cout << "Deleting ptr" << std::endl;
    }
  }
};

#endif //SHAREDPTR_SHARED_POINTER_H
