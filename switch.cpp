#include<iostream>

int main01(void)
{
	int score;
	scanf_s("%d", &score);
	switch (score / 10)
	{
		case 10:
			printf("Perfect!!!You're a genius!!!");
			break;
		case 9:
			printf("Not bad!Keep striving!");
			break;
		case 8:
			printf("Be more cautious!You're on the edge!");
			break;
		default:
			printf("Pal,practice makes progress!");
			break;
	}
	return 0;

}