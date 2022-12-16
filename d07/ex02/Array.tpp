#ifndef ARRAY_TPP
#define ARRAY_TPP

template <class T>
Array<T>::Array() : _n(0)
{
  array = NULL;
}

template<class T>
Array<T>::Array(unsigned int n): _n(n)
{
  array = new T[n];
}

template<class T> 
Array<T>::Array(const Array& a) : _n(a._n)
{
  this->array = new T[a._n];
  for (unsigned int i = 0; i < a._n; i++)
  {
    this->array[i] = a.array[i];
  }
}

template <class T>
Array<T>& Array<T>::operator = (const Array& a)
{
  if (this->array)
    delete array;
  this->array = new T[a._n];
  _n = a._n;
  for (unsigned int i = 0; i < a._n; i++)
  {
    this->array[i] = a.array[i];
  }
}

template <class T>
Array<T>::~Array()
{
  delete array;
}

template<class T> 
T& Array<T>::operator[] (unsigned int index) const
{
  if (index >= this->_n )
    throw std::exception();
  return (array[index]);
}


template<class T> 
unsigned int Array<T>::size() const
{
  return _n;
}
 #endif
