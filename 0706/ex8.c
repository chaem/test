#include <stdio.h>

int main()
{
	int ary[5] = {10,20,30,40,50};

	void *vp = ary;

	//vp = &ary;

	printf("%d \r\n",*(ary+2));

	return 0;
}
