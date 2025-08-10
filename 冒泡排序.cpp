#include<stdio.h>
/*
int max(int arr[5])
{
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		int b = 0;
		if (arr[i] > max)
		{
			max = arr[i];
			b = i;
		}
		return b;
	}
}
*/
int main(void)
{
	int arr[5];
	printf("请输入数组元素：\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int i = 0;
	int j = 4;
	for (int j = 4; j >=0; j--)
	{
		for (int i = 0; i <= j; i++)

		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("排序后的数组元素：\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


