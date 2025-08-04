#include<stdio.h>
int main01(void) // main function:avoiding the answer "Are you angry?" to be " YES".
{
	int choice = 0;
	int line = 0;
	printf("Are you angry?\n");
	printf("YES click 1\n");
	printf("NO click 2\n");

	scanf_s("%d", &choice);
	
		while (choice == 1) 
		{
			printf("Are you angry?\n");
			printf("YES click 1\n");
			printf("NO click 2\n");
			scanf_s("%d", &choice);
		} 
		if(choice==2)
		{
			printf("Yeah!");
			printf("I have knew that you are not angry!\n");
			
			
		}
		return 0;



}
