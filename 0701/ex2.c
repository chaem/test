#include <stdio.h>

int num1 = 7; //전역 변수

void test() //'test' void 함수
{
	printf("%d \r\n",num1);
}

int main() //main 함수
{
	int num1 = 3;

	{
		//int num1 = 4;
		num1 = 4;
		printf("%d \r\n",num1); //1
	}
	//scope 개별적인 변수로 같은 이름으로 다른 값 출력 가능

	printf("%d \r\n",num1); //2

	test(); // �'test'함수 호출
	return 0;
}
