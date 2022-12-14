#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>


typedef struct Data
{
  int i;
  char c;
  int *p;
}Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
