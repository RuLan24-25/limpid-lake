 //���������
 //1.����ͷ�ļ� time.h  stdlib.h
 //2.������������
 //3.��ȡ�����
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void main07(void)
{
// ��ʼ�����������
	srand((unsigned)time(NULL));//ÿ�����г���ʱ���������ɲ�ͬ�������
// ����һ��0��9֮��������
	int value = rand() % 100;// rand()��������һ�����������% 100����������0��99֮��
// ��������
	printf("Now,please input a random number:");
	while(1)//��ѭ��������ѭ����		for(;;)
	{
		int num;
		scanf_s("%d", &num);
		if (num > value)
			printf("litter please!");
		else if (num < value)
			printf("bigger please!");
		else
		{
			printf("precise!congratulations!");
			break;
		}
	}
	return;
}