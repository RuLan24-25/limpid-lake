#include<iostream>
int main04() 
{
	int a, b, c; 
	printf("请输入三个数字：\n");
	scanf_s("%d %d %d", &a, &b, &c);
	
	int max_value = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);// 三目运算符实现最大值判断
	
	printf("最大值为：%d\n", max_value);
	
	return 0;
}
