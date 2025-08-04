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
// The output of this code is:0到2147483647,-2147483648到0
//到0时循环停止，因为数值0代表假false，非0代表真true
/*
while循环和do while循环的区别在于，do while循环至少会执行一次，而while循环可能不会执行
do while循环先执行代码块，然后检查条件；而while循环先检查条件，如果条件为真才执行代码块


for example:
while(i)
{
printf("%d",i);
i++;
}

 这段代码不会执行，因为如果i初始值为0，条件不满足，循环体不会执行
*/
