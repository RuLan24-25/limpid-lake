#include<stdio.h>
int main01(void)
{
		int a = 0;
flag1: {
			for (; a <= 100; a++)
			{
				printf("a=%d\n", a);
				if (a % 5 == 0)
				{
				goto flag2;
				}
				
			}
		}
flag2:
	{
	printf("5的倍数：%d\n", a);
	if (a == 100)return 0;
	a++;
			
	goto flag1;
	}

	return 0;
}