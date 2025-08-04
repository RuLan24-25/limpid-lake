#include <iostream>//标准输入输出流
float max(float a, float b, float c)
{

	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
	{
		if (b > c)
			return b;
		else
			return c;
	}
	return 0.00;
}
int main02(void)
{	
	printf("请输入三个数字：\n")
; 
	float a, b, c;

	scanf_s("%f %f %f", &a, &b, &c);
	
	printf("最大值为：%.2f\n", max(a,b,c));

	return 0;
}
/*
三目运算符：（a>b）?((a>c)?(a):(c)):((b>c)?(b):(c))
*/
