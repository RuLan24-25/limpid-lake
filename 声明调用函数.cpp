#include<iostream>
void butler(void); // 先声明后调用，若butler函数在main函数之前定义，则不需要前置声明。
int main03() 
{
	printf("A\n");
	butler();
	printf("C\n");
	return 0;
}
void butler(void) 
{
	printf("B\n");
}


	
