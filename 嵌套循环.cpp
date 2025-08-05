#include<stdio.h>
/*int main09(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)//已经重置了j的值
		{
		
			for (int e = 0; e < 5; e++)//已经重置了e的值
				printf("%d%d%d\n ", i, j, e);
		}
	}
	return 0;
}
*/

//外层执行一次，内层执行一周
#include<windows.h>
int main09(void)
{
	int hour = 0;
	int minute = 0;
	int second = 0;
	for (; hour <= 24; hour++)
	{
		minute = 0;// 重置分钟!!!
		for (; minute <= 60; minute++)
		{
			second = 0;// 重置秒钟!!!
			for (; second <= 60; second++)
			{
				system("cls"); // 清屏
				printf("%02d:%02d:%02d\n", hour, minute, second);//02代表两位数，不足两位前面补零
				Sleep(1000); // 暂停1秒钟
			}
		}
	}
	return 0;
}
