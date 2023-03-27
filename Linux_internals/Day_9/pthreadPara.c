#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>



void *thread1(void *arg){
	//sleep(1);
	printf("newly crewated thread1 is executing \n ");
	return NULL;
}

void *thread2(void *arg){
	//sleep(1);
	printf("newly crewated thread2 is executing \n ");
	return NULL;
}

int main(void){
	pthread_t tid1,tid2;
	pthread_create(&tid1,NULL,thread1,NULL);
	pthread_create(&tid2,NULL,thread2,NULL);
	
	//pthread_join(tid,NULL);
	sleep(1);
	return 0;
}

