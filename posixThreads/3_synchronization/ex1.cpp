#include <iostream>
#include <ctime>
#include <pthread.h>

typedef struct alarm_tag
{
  alarm_tag* next;
  int seconds;
  time_t time;
  char message[64];
} alarm_t;

pthread_mutex_t alarm_mutex = PTHREAD_MUTEX_INITIALIZER;
alarm_t* alarm_list;


void* alarm_thread(void* arg)
{
  vggdddf




