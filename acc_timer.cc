#include "acc_timer.h"

acc_timer_t gettime(void){
	timespec ts;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts);
	return ts.tv_sec * 1000000000 + ts.tv_nsec;
}
/*
int main(){
	printf("%lu\n", gettime());
	return 0;
}
*/
