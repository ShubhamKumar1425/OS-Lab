#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *thread_function(void *arg)
{
    int thread_num = *((int *)arg);

    printf("Thread %d: Running...\n", thread_num);
    sleep(2);
    printf("Thread %d: Finished.\n", thread_num);

    return NULL;
}

int main()
{
    pthread_t thread1, thread2;
    int t1 = 1, t2 = 2;

    if (pthread_create(&thread1, NULL, thread_function, &t1) != 0)
    {
        perror("Failed to create thread 1");
        return 1;
    }

    if (pthread_create(&thread2, NULL, thread_function, &t2) != 0)
    {
        perror("Failed to create thread 2");
        pthread_join(thread1, NULL);
        return 1;
    }

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Main thread: All threads completed.\n");

    return 0;
}
