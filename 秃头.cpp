#include<stdio.h>
// This program simulates a coding process where the user writes code and faces exams.
int main03(void)
{
	int line = 0;
	printf("写代码\n");
	while (line < 10)
	{
		printf("写了%d行代码，秃头中\n", line + 1);
		line++;
	}
	while(line>=10)
	{
		if (line % 10 == 0)
		{
			printf("迎来考试\n""成功扣1\n""失败扣2\n");
			int result = 0;
			scanf_s("%d", &result);
			if (result == 1)
			{
				printf("Offer!\n""Congratulations!\n");
				break;
			}
			else if (result == 2)
			{
				printf("继续写代码，继续秃头\n");
				line++;

			}
		}
		else
		{
			printf("写了%d行代码，秃头中\n", line + 1);
			line++;
		}
	}
	return 0;
}
		
	
