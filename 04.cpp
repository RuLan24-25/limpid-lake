#include<iostream>
int main04() 
{
	int a, b, c; 
	printf("�������������֣�\n");
	scanf_s("%d %d %d", &a, &b, &c);
	
	int max_value = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);// ��Ŀ�����ʵ�����ֵ�ж�
	
	printf("���ֵΪ��%d\n", max_value);
	
	return 0;
}
