#include<stdio.h>
int main(void)
{
	/*int i = 1;
	for (; i <= 9; i++)
	{
		int j=i;
		for (; j <= 9; j++)
		{
			printf("%d*%d=%d", i, j, i * j);
			if(j!=9)
				printf("\t");//制表符
			else
				printf("\n");//换行
		}		
	}
	return 0;*/
	for (int i = 1; i <=9; i++)
	{
		
		for (int j=1; j <=9; j++)
		{
			printf("%d*%d=%d", j, i, j * i);
			if (i == j)
			{ 
				printf("\n");
				i++; 
				j = 0;// 当i等于j时，换行并且i加1
				if (i > 9)break;
			}
			else printf("\t");

		}
	}
	return 0;
}
