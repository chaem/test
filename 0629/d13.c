#include <stdio.h>

int main()
{
	char ch = 'A';
	char name[80] = "Ȳ�ݹ���";
	int in = 10;
	double db = 16.8;

	printf("������ ��� ��� : %d\n", -10);
	printf("������ ���� ��� : %d\n", in);
	printf("������ ���� ��� : %d\n", in/3);

	printf("�Ǽ��� ����� �Ҽ��� ���·� ��� : %lf\n", 2.5);
	printf("�Ǽ��� ������ ���� ���·� ��� : %le\n", db);
	printf("�Ǽ��� ������ �Ҽ��� ���·� ��� : %lf\n", db/4);

	printf("���ڻ�� ��� : %c\n", 'F');
	printf("���ں��� ��� : %c\n", ch);

	printf("���� �迭 ��� : %s\n", name);
	printf("���ڿ� ��� ��� : %s\n", "���ƶ� ��ä��");

	return 0;
}