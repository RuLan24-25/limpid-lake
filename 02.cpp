#include<stdlib.h>
#include<stdio.h>
// This program provides a menu for the user to choose a system tool to open.
int main02(void)
{
	printf("Please choose the beused tool:\n");
	printf("1��������\n""2������ָʾ��\\n""3���������\n""4,����\n""5,���±�\n""6,ϵͳ����\n""7,ע���༭��\n""8,���������\n""9,����͹���\n""10,���̹���\n""11,��������\n");

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