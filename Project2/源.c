#include <stdio.h>
int a = 1;
int main()
    /*全局变量与局部变量，作用域和生命周期，全局作用于整个工程，局部作用于变量所在的局部范围
	全局生命周期为整个程序，而局部生命周期为进入它的局部范围开始到出局部范围结束*/ 
{
	printf("%d \n",a);
	int a = 3;
	printf("%d \n" ,a );
	//局部变量的优先性
	int b = 9, c = 5;
	int d = a + b + c;
	printf("%d \n",d);
	return 0;
    }