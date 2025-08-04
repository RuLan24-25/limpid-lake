 //产生随机数
 //1.包含头文件 time.h  stdlib.h
 //2.添加随机数种子
 //3.获取随机数
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void main07(void)
{
// 初始化随机数种子
	srand((unsigned)time(NULL));//每次运行程序时，都会生成不同的随机数
// 生成一个0到9之间的随机数
	int value = rand() % 100;// rand()函数生成一个随机整数，% 100将其限制在0到99之间
// 输出随机数
	printf("Now,please input a random number:");
	while(1)//死循环（永真循环）		for(;;)
	{
		int num;
		scanf_s("%d", &num);
		if (num > value)
			printf("litter please!");
		else if (num < value)
			printf("bigger please!");
		else
		{
			printf("precise!congratulations!");
			break;
		}
	}
	return;
}