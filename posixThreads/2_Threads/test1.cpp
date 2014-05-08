#include <pthread.h>
#include <iostream>

using namespace std;

int main()
{
  cout <<"trying to find out what pthread_self() function is" << endl;
  
  pthread_t pt1 = pthread_self();

  cout <<"trying to print the pthread_t variable pt1, pt1 = " << pt1 << "after typecast = " << static_cast <unsigned long> (pt1) << endl;

  cout <<"using pthread_self() to create another pthread_t variable" << endl;
  
  pthread_t pt2 = pthread_self();

  cout <<"trying to print the pthread_t variable pt2, pt2 = " << pt2 << "after typecast = " << static_cast <unsigned long> (pt2) << endl;

  cout <<"testing the pthread_equal() function" << endl;

  int areEqual = pthread_equal(pt1,pt2);

  cout <<"are both threads equal = " << areEqual << endl;

  cout <<"what happens when I kill this flag" << endl;

  int a = pthread_detach(pt1);

  int a = 5;

  //pthread_exit(&a);

  sleep(10);

  cout <<" killed this thread, am I able to print this or not ? a = " << a << endl;

  return 0;
}

