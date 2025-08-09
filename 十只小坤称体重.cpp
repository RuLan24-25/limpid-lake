#include<stdio.h>
int max(int arr[10])
{
	int max = arr[0];// 假设第一个元素为最大值
	
	int b = 0;
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			
			b = i ;
		}
	}// 遍历数组，找到最大值及其索引
	return b;// 返回最大值的索引
}
int main(void)
{
	int arr[10];
	int i = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("请输入第%d只小坤的体重：\n", i + 1);
		scanf_s("%d", &arr[i]);
	}
	
	int a = max(arr);// 调用max函数，获取最大值的索引
	printf("最重的是第%d只小坤,为%d",a+1,arr[a]);

}

//arr,arr[],int arr[10]在函数参数中是等价的，都是表示传入一个整数数组
//但是在函数内部，arr是一个指针，指向数组的首元素
//所以在函数内部不能使用sizeof(arr)来获取数组的大小，因为arr是一个指针，sizeof(arr)返回的是指针的大小（通常是4或8字节），而不是数组的大小
//如果想在函数内部获取数组的大小，必须将数组的大小作为另一个参数传入函数
//例如：int max(int arr[], int size)
//然后在调用函数时传入数组的大小：max(arr, 10)
//在main函数中，sizeof(arr)/sizeof(arr[0])可以正确计算数组的大小，因为arr在main函数中是一个数组，不是指针
//总结：在函数参数中，数组类型会被退化为指针类型，所以无法通过sizeof获取数组大小
//在main函数中，arr是一个数组，sizeof(arr)返回的是数组的总大小（以字节为单位）
//在函数内部，arr是一个指针，sizeof(arr)返回的是指针的大小
