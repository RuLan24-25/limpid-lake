#include<stdio.h>
#define SIZE 10//����һ���곣��SIZE����ʾ����Ĵ�С
int main05(void)
{
	int  arr[SIZE];//����һ������
	for (int i = 0; i < SIZE; i++)
	{
		printf("Please input the %d number:\n", i + 1);
		scanf_s("%d", &arr[i]);//��������Ԫ��
	}
	
	for (int i=0; i < SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;


	
} 