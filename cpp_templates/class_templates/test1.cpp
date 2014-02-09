#include <iostream>

using namespace std;

template <typename T>
class mVec
{
  public:
  mVec(int capacity = 100);
  ~mVec();
  void push(T const& a);
  void pop();
  int size();
  int capacity();
  T& operator[](int i);
  
  private:
  T* m_pArr;
  int m_size;
  int m_capacity;
};


template <typename T>
mVec<T>::mVec(int capacity)
{
  m_pArr = new T[capacity];
  m_size = 0;
  m_capacity = capacity;
}

template <typename T>
mVec<T>::~mVec()
{
  cout <<"in destructor of mVec" << endl;
  delete []m_pArr;
  m_size = 0;
  m_capacity = 0;
}

template <typename T>
void mVec<T>::push(T const& a)
{
  m_pArr[m_size] = a;
  m_size++;
}

template <typename T>
void mVec<T>::pop()
{
  m_size--;
}

template <typename T>
int mVec<T>::size()
{
  return m_size;
}

template <typename T>
int mVec<T>::capacity()
{
  return m_capacity;
}

template <typename T>
T& mVec<T>::operator[](int i)
{
  return m_pArr[i];
}



int main()
{
  mVec<int> b;
  cout <<"capacity of b = " << b.capacity() << endl;
  cout <<"size of b = "     << b.size() << endl;

  cout <<"pushing into the mVec" << endl;
  b.push(10);
  b.push(12);
  b.push(14);

  cout <<"size of b = " << b.size() << endl;

  for(int i=0; i < b.size(); ++i)
  {
     cout <<"b[ "<< i <<" ] = " << b[i] << endl;
  }

  return 0;
}
