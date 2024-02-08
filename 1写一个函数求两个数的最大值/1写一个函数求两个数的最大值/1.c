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
	printf("请输入两个数：\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	z = max(num1,num2);

	printf("较大的数是：%d\n", z);

	return 0;
}