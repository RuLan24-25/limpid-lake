#include<stdio.h>
// This program simulates a coding process where the user writes code and faces exams.
int main03(void)
{
	int line = 0;
	printf("д����\n");
	while (line < 10)
	{
		printf("д��%d�д��룬ͺͷ��\n", line + 1);
		line++;
	}
	while(line>=10)
	{
		if (line % 10 == 0)
		{
			printf("ӭ������\n""�ɹ���1\n""ʧ�ܿ�2\n");
			int result = 0;
			scanf_s("%d", &result);
			if (result == 1)
			{
				printf("Offer!\n""Congratulations!\n");
				break;
			}
			else if (result == 2)
			{
				printf("����д���룬����ͺͷ\n");
				line++;

			}
		}
		else
		{
			printf("д��%d�д��룬ͺͷ��\n", line + 1);
			line++;
		}
	}
	return 0;
}
		
	