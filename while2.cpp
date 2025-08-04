
#include<stdio.h>
int main03(void)
{
	int line = 0;
		while (line < 10)
		{
			printf("写代码%d\n", line);
			line++;
		}
	while (line >= 10)
	{
		if (line % 10 == 0)
		{
			printf("考试\n通过扣1\n没通过扣2\n");
			int answer=0;
			scanf_s("%d", &answer);
			if (answer == 1)
			{
				printf("offer!");
				break;
			}

			else
			{
				printf("继续努力!\n");
				
				line++;
				
			}
			
		}
		else
		{
			printf("写代码%d\n", line);
			line++;
		}
	}
	return 0;
}
