#ifndef BVEC_H
#define BVEC_H

#include <iostream>
#include <memory>
template <typename T>
class bvec
{
  public:
  bvec();
  bvec(int i);
  bvec(const bvec<T>& b);
  T& operator=(const bvec<T>& b);
  T& operator[](int i);
  void push_back(const T& t);
  int size();
  int capacity();

  private:
  void reallocate();
  int m_size;
  int m_capacity;
  T* m_begin;
  T* m_firstFree;
  T* m_end;
  static std::allocator<T> m_alloc;
};

template <typename T>
bvec<T>::bvec():m_size(0),m_capacity(0),m_begin(0),m_firstFree(0),m_end(0)
{}

template <typename T>
bvec<T>::reallocate()
{
  
}  
#endif
