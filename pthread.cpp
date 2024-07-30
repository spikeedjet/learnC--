#include <iostream>

#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void* PrintHello(void* threadid)
{
    int tid = *(int*)threadid;
    cout << "hello" << tid << endl;
    return 0;
}

int main ()
{
    pthread_t tids[NUM_THREADS];
    int indexes[NUM_THREADS];
    int rc;
    int i;

    for (i = 0; i < NUM_THREADS; i++)
    {
    cout << "main(): new thread" << i << endl;
    indexes[i] = i;
    rc = pthread_create(&tids[i],NULL,PrintHello,(void *)&(indexes[i]));
                                                                                                                                                                                                           
    if (rc)                                                                                                                                                                                                
    {                                                                                                                                                                                                      
        cout << "pthread_create error : error code = "<< rc << endl;                                                                                                                                       
        exit(-1);                                                                                                                                                                                          
    }                                                                                                                                                                                                      
     }                                                                                                                                                                                                     
                                                                                                                                                                                                           
    pthread_exit(NULL);                                                                                                                                                                                    
}                                                                                                                                                                                                          