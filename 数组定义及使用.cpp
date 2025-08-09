//数组定义：数据类型 数组名[元素个数]={值1，值2，值3}
#include<stdio.h>
int main04(void)
{
	int arr[5] = { 6,2,8,4,5}; // 定义一个包含5个整数的数组
								//arr[0] = 6; 数组的第一个元素
								// arr[1] = 2;  数组的第二个元素
	arr[0] = arr[2];// 将数组的第一个元素赋值为第三个元素的值,即数组第一个元素变为8
	arr[1] = arr[3] * 2;// 将数组的第二个元素赋值为第四个元素的两倍,即数组第二个元素变为8
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
		printf("%p\n", arr);//数组名是一个char指针，是一个地址常量，指向数组的首地址
		printf("%p\n", &arr[0]);//与数组名相同，指向数组的首地址
		printf("数组所占内存大小%d\n", sizeof(arr));//数组所占内存大小为20字节（5个int类型，每个4字节）		数据类型*元素个数
		printf("数组元素大小%d\n", sizeof(arr[0]));//数组元素大小为4字节（int类型）
		printf("数组元素个数%d\n", sizeof(arr) / sizeof(arr[0]));//数组元素个数为5
	return 0;
}