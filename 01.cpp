
#include<iostream>
// The code is a simple C program that reads the weights of three individuals and determines which one has the maximum weight.
int main01(void)
{
	printf("三只小坤称体重\n请输入三只小坤abc的体重值：\n");
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	if(a>b)
	{
		if(a>c)
			printf("三只小坤中体重最大的是a，体重值为：%.2f\n", a);
		else if(a<c)
			printf("三只小坤中体重最大的是c，体重值为：%.2f\n", c);
		else
			printf("三只小坤中体重最大的是a和c，体重值为：%.2f\n", a);
	}
	else if(a<b)
	{
		if(b>c)
			printf("三只小坤中体重最大的是b，体重值为：%.2f\n", b);
		else if(b<c)
			printf("三只小坤中体重最大的是c，体重值为：%.2f\n", c);
		else
			printf("三只小坤中体重最大的是b和c，体重值为：%.2f\n", b);
	}
	else
	{
		if(a>c)
			printf("三只小坤中体重最大的是a和b，体重值为：%.2f\n", a);
		else if(a<c)
			printf("三只小坤中体重最大的是c，体重值为：%.2f\n", c);
		else
			printf("三只小坤体重相等，体重值为：%.2f\n", a);
	}
	return 0;
}
//若三只小坤体重两两不相等
/*int max(float a, float b, float c)
{	scanf_s("%f %f %f", &a, &b, &c);
	if(a>b)
	{	if(a>c)
			return a;
		else
		return c;
		}
	else
	{	if(b>c)
			return b;
		else
			return c;
	}
	return 0;
}
*/