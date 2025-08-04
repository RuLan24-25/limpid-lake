#include<stdio.h>
void main(void)
{
	printf("Are you angry?\nYes,click 1\nNo,click 2\n");
	for (;;)
	{
		int answer;
		scanf_s("%d", &answer);
		if(answer==1)
			printf("Are you angry?\nYes,click 1\nNo,click 2\n");
		else
		{
			printf("I have knew that you are not angry at all!\nMay you a happy time!\n");
			break;
		}
	}
	return;
}