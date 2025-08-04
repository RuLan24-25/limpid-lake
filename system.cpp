#include<stdlib.h>
#include<stdio.h>
// This program provides a menu for the user to choose a system tool to open.
int main02(void)
{
	printf("Please choose the beused tool:\n");
	printf("1，计算器\n""2，命令指示符\\n""3，控制面板\n""4,画板\n""5,记事本\n""6,系统配置\n""7,注册表编辑器\n""8,服务管理器\n""9,程序和功能\n""10,磁盘管理\n""11,网络连接\n");

	int choice = 0;
	scanf_s("%d", &choice);

	if(choice==1)
	{
		system("calc");
	}
	else if(choice==2)
	{
		system("cmd");
	}
	else if(choice==3)
	{
		system("control");
	}
	else if(choice==4)
	{
		system("mspaint");
	}
	else if(choice==5)
	{
		system("notepad");
	}
	else if(choice==6)
	{
		system("msconfig");
	}
	else if(choice==7)
	{
		system("regedit");
	}
	else if(choice==8)
	{
		system("services.msc");
	}
	else if(choice==9)
	{
		system("appwiz.cpl");
	}
	else if(choice==10)
	{
		system("diskmgmt.msc");
	}
	else if(choice==11)
	{
		system("ncpa.cpl");
	}
	else
	{
		printf("Invalid choice!\n");
	}
	


	
	return 0;
}
