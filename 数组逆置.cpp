#include<stdio.h>
int main07(void)
{
	/*
	int arr[5] = {1,2,3,4,5};
	printf("ԭ����Ԫ�أ�\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	*/
	int arr[5];
	printf("��ԭ����Ԫ�أ�\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	printf("\n");
	printf("��������Ԫ�أ�\n");
	int i = 0, j = 4; 
	for (; i < j; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}

	/*
	for (int i = 4; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	*/
	return 0;
}
