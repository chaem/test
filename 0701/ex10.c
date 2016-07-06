#include <stdio.h>
#include <stdlib.h>
//timer
#include <time.h>
#include <sys/time.h>

int main()
{
	int nCount = 0;
	int nCount2 = 0;
	
	struct timespec work_timer; //user data type*
	double last_tick = 0;
	double acc_tick = 0;
	double acc_tick2 = 0;


	while(1)
	{
		clock_gettime(CLOCK_MONOTONIC,&work_timer); //work_timer = loaded hardwear
		double cur_tick = work_timer.tv_sec + (double)(work_timer.tv_nsec * 1e-9); //1e-9

		double delta_tick = cur_tick - last_tick; //different time
		last_tick = cur_tick;
		acc_tick += delta_tick;
		acc_tick2 += delta_tick;

		if(acc_tick > 1.0)
		{
			nCount++;
			acc_tick = 0;
		}
		if(acc_tick2 > 0.3)
		{
			nCount2++;
			acc_tick2 = 0;

		}

		printf("%d %d \r",nCount,nCount2);

	}

}