#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

pthread_t tid;

void *thread1(void *arg){
	//sleep(1);
	printf("newly crewated thread is executing \n ");
	return NULL;
}

int main(void){
	int ret = pthread_create(&tid,NULL,thread1,NULL);
	if(ret)
		printf("thread is not created \n");
	else
		printf("Thread is created\n");
	//pthread_join(tid,NULL);
	sleep(1);
	return 0;
}

