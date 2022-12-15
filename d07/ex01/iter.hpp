#ifndef ITER_HPP
#define ITRT_HPP


template <typename T> void iter(T* arr, int len, void(* func)(T el))
{
  for (int i = 0; i < len; i++)
  {
    func(*arr);
    arr++;
  }
}


#endif
