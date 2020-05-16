#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<semaphore.h>
#include<errno.h>
#include<signal.h>
#include<pthread.h>

int tot_cycle = 0;
int sigbool = 1;
int iseat;
int iposition;
int sigproc = 0;

void handler(int num) {
	sigproc = 1;
	sigbool = 0;
	
	fprintf(stderr, "Philosopher #%d has completed %d cycles\n", iposition, tot_cycle);

}

