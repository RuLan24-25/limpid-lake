
#include<stdio.h>
int main03(void)
{
	int line = 0;
		while (line < 10)
		{
			printf("д����%d\n", line);
			line++;
		}
	while (line >= 10)
	{
		if (line % 10 == 0)
		{
			printf("����\nͨ����1\nûͨ����2\n");
			int answer=0;
			scanf_s("%d", &answer);
			if (answer == 1)
			{
				printf("offer!");
				break;
			}

			else
			{
				printf("����Ŭ��!\n");
				
				line++;
				
			}
			
		}
		else
		{
			printf("д����%d\n", line);
			line++;
		}
	}
	return 0;
}
