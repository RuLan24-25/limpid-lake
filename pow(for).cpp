#include<iostream>
//for(��ʼ��ѭ���ı���int i=0;ѭ�������ж�i<10;����ѭ������i++)
int pow(int a, int b)
{
	int result = 1;
	for (int i = 1; i <= b; i++)//ѭ��b��	for(int i=0;i<b;i++)
	{							
		result *= a;
	}
	return result;
	
}
/*
int i=0;
for(;;)
{
	if (i == 10)
		break;
	i++;
}
*/

int main06(void)
{
	int a, b;
	printf("�����������ָ����");
	scanf_s("%d %d", &a, &b);
	printf("%d��%d�η���%d\n", a, b, pow(a, b));
	return 0;
}