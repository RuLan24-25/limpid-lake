#include <iostream>//��׼���������
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
	printf("�������������֣�\n")
; 
	float a, b, c;

	scanf_s("%f %f %f", &a, &b, &c);
	
	printf("���ֵΪ��%.2f\n", max(a,b,c));

	return 0;
}
/*
��Ŀ���������a>b��?((a>c)?(a):(c)):((b>c)?(b):(c))
*/