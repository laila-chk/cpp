#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
  unsigned int _n;
  T *array;
  public:
    Array();
    Array(unsigned int n);
    Array(const Array& a);
    Array& operator= (const Array& a);
    ~Array();
    T& operator[](unsigned int index) const;
    unsigned int size() const;
};

#include "Array.tpp"
#endif
