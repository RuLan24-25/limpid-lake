#include<stdio.h>
/*int main09(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)//�Ѿ�������j��ֵ
		{
		
			for (int e = 0; e < 5; e++)//�Ѿ�������e��ֵ
				printf("%d%d%d\n ", i, j, e);
		}
	}
	return 0;
}
*/

//���ִ��һ�Σ��ڲ�ִ��һ��
#include<windows.h>
int main09(void)
{
	int hour = 0;
	int minute = 0;
	int second = 0;
	for (; hour <= 24; hour++)
	{
		minute = 0;// ���÷���!!!
		for (; minute <= 60; minute++)
		{
			second = 0;// ��������!!!
			for (; second <= 60; second++)
			{
				system("cls"); // ����
				printf("%02d:%02d:%02d\n", hour, minute, second);//02������λ����������λǰ�油��
				Sleep(1000); // ��ͣ1����
			}
		}
	}
	return 0;
}
