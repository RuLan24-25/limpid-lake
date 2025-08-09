#include<stdio.h>
int main02(void)
{
	for (int i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			printf("i is 5, continue to next iteration\n");
			continue; // 结束本次循环，进入下一次循环，i仍然会加1
		}
		printf("i=%d\n", i);
	}//循环结束后再执行后续指令
	printf("Loop completed.\n");
	return 0;
}