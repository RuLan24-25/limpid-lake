#include<stdio.h>
#include<math.h>
//ˮ�ɻ�����100-999����λ���������͵������������
int main05(void)
{
	int i = 100;
	while ( i <= 999)
	{
		int a, b, c;
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;

		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))//pow(a,b)Ϊa��b�η�
		{
			printf("%d\n", i);
			
		}
		
			i++;
	}
	return 0;
}
/*
	if (i == a * a * a + b * b * b + c * c * c)
		{
			printf("%d\n", i);
			i++;
		}
	else
			i++;

*/