#include "smart_pointer.hpp"

SmartPointer::SmartPointer(){
  ptr_ = new int();
}

SmartPointer::SmartPointer(int * p):ptr_(p){};

SmartPointer::~SmartPointer(){
  delete ptr_;
};

int& SmartPointer::operator * (){
  return *ptr_;
};

std::ostream& operator << (std::ostream& os,  SmartPointer& smartPointer){
  os << *smartPointer;
  return os;
};