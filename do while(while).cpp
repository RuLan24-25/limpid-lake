#include<iostream>
int main04(void)
{
	int i = 0;
	do
	{
		printf("%d", i);
		i++;
	} 
	while (i);
	return 0;
}
// The output of this code is:0��2147483647,-2147483648��0
//��0ʱѭ��ֹͣ����Ϊ��ֵ0�����false����0������true
/*
whileѭ����do whileѭ�����������ڣ�do whileѭ�����ٻ�ִ��һ�Σ���whileѭ�����ܲ���ִ��
do whileѭ����ִ�д���飬Ȼ������������whileѭ���ȼ���������������Ϊ���ִ�д����


for example:
while(i)
{
printf("%d",i);
i++;
}

 ��δ��벻��ִ�У���Ϊ���i��ʼֵΪ0�����������㣬ѭ���岻��ִ��
*/
