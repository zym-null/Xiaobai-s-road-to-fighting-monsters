#include <stdio.h>
    //常量也叫做字面量，其值被定义之后不能进行修改，可在代码中直接使用，也可定义后使用
	// 
	//0x或0X表示十六进制，0为八进制，无前缀为十进制，后缀L/l表示长整数，U/u表示无符整数，后缀顺序随意
	//用const关键词修饰，或用#define预处理指令定义

#define Q  1; //宏定义,标识符常量，无类型，
enum Sex      //枚举常量，可一一列举
{
	male,
	female,
	secret
};
enum color
{
	red =6,
	bule,
	white,
	green,
	pink
};
int main()
{
	3.1415926;
	3.1e5;
	//字面常量
	int i = 3.1415926;
	printf("i = %d ",i);
	const int N = 3; //常变量，本质是变量，有具体数据类型
	int b = N;
	printf("b = %d \n",b);
	int a = Q;       //宏定义常量
	printf("a = %d \n", a);
	//枚举常量，默认从零开始排
	printf("x = %d \n" ,male);  
	printf("y = %d \n",female);
	printf("z = %d \n",secret);
	//枚举常量也可以在其定义时赋予初值，从初值处递增
	printf("%d \n",red );
	printf("%d \n",bule);
	printf("%d \n",white);
	printf("%d \n",green);
	printf("%d \n",pink);

	return 0;
}

