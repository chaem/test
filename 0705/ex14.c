#include <stdio.h>

int main()
{
	int ary1[4] = {1,2,3,4};
	int ary2[4] = {11,12,13,14};
	int ary3[4] = {21,22,23,24};

	int *ptr_ary[3] = {ary1,ary2,ary3};
	/*
	printf("%d %d \r\n",ptr_ary[0][1],ptr_ary[0][2]);
	printf("%d %d \r\n",ptr_ary[0][1],*(ptr_ary[0]+1));

	printf("%d %d \r\n",ptr_ary[1][0],ptr_ary[1][1]);
	*/
	printf("%d %d %d \r\n",
	ptr_ary[0][1],
	*(ptr_ary[0]+1),
	*(ary1+1));

	printf("%d %d %d \r\n",
	ptr_ary[2][0],
	*(ptr_ary[2]+1),
	*(ary3+2));

	return 0;
}
