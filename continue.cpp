#include<stdio.h>
int main02(void)
{
	for (int i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			printf("i is 5, continue to next iteration\n");
			continue; // ��������ѭ����������һ��ѭ����i��Ȼ���1
		}
		printf("i=%d\n", i);
	}//ѭ����������ִ�к���ָ��
	printf("Loop completed.\n");
	return 0;
}