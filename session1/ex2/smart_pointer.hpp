#ifndef EX2_SMART_POINTER_H
#define EX2_SMART_POINTER_H
#include <iostream>

template <class T>
class SmartPointer {

  T * ptr_;

  public:
     SmartPointer(){
       ptr_ = new T();
     };
     SmartPointer(T * p): ptr_(p){};

     ~SmartPointer(){
       delete ptr_;
     };

     T& operator * (){
       return *ptr_;
     }

     friend std::ostream& operator << (std::ostream& os, SmartPointer& smartPointer){
         os << *smartPointer;
         return os;
     };
};

#endif
