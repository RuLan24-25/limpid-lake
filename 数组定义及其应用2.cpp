#include<stdio.h>
#define SIZE 10//定义一个宏常量SIZE，表示数组的大小
int main05(void)
{
	int  arr[SIZE];//定义一个数组
	for (int i = 0; i < SIZE; i++)
	{
		printf("Please input the %d number:\n", i + 1);
		scanf_s("%d", &arr[i]);//输入数组元素
	}
	
	for (int i=0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;


	
} 