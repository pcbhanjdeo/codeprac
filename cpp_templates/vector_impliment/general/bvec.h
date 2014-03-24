#ifndef BVEC_H
#define BVEC_H

#include <iostream>
#include <cstdlib>
#include <stdexcept>

template <typename T>
class bvec
{
  public:
  bvec();
  bvec(const bvec<T>& b);
  bvec(size_t i);
  bvec<T>& operator=(const bvec<T>& b);
  T& operator[](int i);
  size_t capacity();
  size_t size();
  void push_back(const T& t);

  private:
  void allocMemory();
  size_t m_end;
  size_t m_firstFree;
  T* m_arr;
  
};

template <typename T>
bvec<T>::bvec():m_end(0),m_firstFree(0),m_arr(NULL)
{
  std::cout << "bvec default ctor" << std::endl;
}

template <typename T>
bvec<T>::bvec(const bvec<T>& b):m_end(0),m_firstFree(0),m_arr(NULL)
{
  std::cout <<"bvec copy constructor" << std::endl;
  *this = b;
}

template <typename T>
bvec<T>::bvec(size_t i):m_end(i),m_firstFree(0),m_arr(NULL)
{
  std::cout <<"bvec ctor with empty memory" << std::endl;
  m_arr = static_cast<T*>(operator new [] (m_end*sizeof(T)));
}

template <typename T>
bvec<T>& bvec<T>::operator=(const bvec<T>& b)
{
  if(this != &b)
  {
    T* temp = static_cast<T*>(new [] (b.m_end*sizeof(T)));
    for(int i=0; i < b.m_end; ++i)
    {
      T* curr = temp+i;
      new (curr) T(b[i]);
    }
    m_size = b.m_size;
    m_capacity = b.m_capacity;
    std::cout <<"calling delete in op=" << std::endl;
    delete [] m_arr;
    m_arr = temp;
  }
  return *this;  
}

template <typename T>
T& bvec<T>::operator[](int i)
{
  if(i < 0 || i >= m_size)
  {
    throw std::out_of_range("out of range");
  }
  return m_arr[i];
}

template <typename T>
size_t bvec<T>::capacity()
{
  return m_capacity;
}

template <typename T>
size_t bvec<T>::size()
{
  return m_size;
}

template <typename T>
void bvec<T>::push_back(const T& t)
{
  if(m_size == m_capacity)
  {
    allocMemory();
  }
  m_arr[m_size] = t;
  ++m_size;
}

template <typename T>
void bvec<T>::allocMemory()
{
  m_capacity = 2*std::max(1,static_cast<int>(m_size));
  T* temp = new T[m_capacity];
  for(size_t i=0; i < m_size; ++i)
  {
    temp[i] = m_arr[i];
  }
  delete [] m_arr;
  m_arr = temp;   
}



#endif
