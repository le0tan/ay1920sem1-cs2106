/*************************************
 * Lab 3 Exercise 1
 * Name: Tan Yuanhong
 * Student No: A0177903X
 * Lab Group: 07
 *************************************/


#include <pthread.h>
#include <semaphore.h>

typedef struct {
  pthread_mutex_t mutex;
  pthread_mutex_t isEmpty;
  int reader_count;
  int writer_count;
} rw_lock;

