#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int max(a, b)
{ 
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int num1, num2, z;
	printf("��������������\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	z = max(num1,num2);

	printf("�ϴ�����ǣ�%d\n", z);

	return 0;
}