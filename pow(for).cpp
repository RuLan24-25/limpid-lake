#include<iostream>
//for(初始化循环的变量int i=0;循环条件判断i<10;更新循环变量i++)
int pow(int a, int b)
{
	int result = 1;
	for (int i = 1; i <= b; i++)//循环b次	for(int i=0;i<b;i++)
	{							
		result *= a;
	}
	return result;
	
}
/*
int i=0;
for(;;)
{
	if (i == 10)
		break;
	i++;
}
*/

int main06(void)
{
	int a, b;
	printf("请输入底数和指数：");
	scanf_s("%d %d", &a, &b);
	printf("%d的%d次方是%d\n", a, b, pow(a, b));
	return 0;
}