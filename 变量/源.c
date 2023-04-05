#include <stdio.h>
int main()
    //定义一个变量，若在{}前，则为全局变量，若在{}内则为局部变量，局部变量优先
{
	extern int  X;    //声明一个变量（局部变量）
	int i ;           //声明，也是定义一个变量
	int p = 1;        //定义一个变量，并给予一个初始值



	char ch = 'a';       
	printf("%d \n", ch);
	printf("%c \n",ch);
	//   %d，表示整型    %c，表示字符    char为一字节整数类型变量
	short int age = 21;
	float wt = 65.7;
	//   int，四字节整型变量     float，单精度浮点类型变量，1位符号，8位指数，23位小数
	printf("%d \n ",age);
	printf("%f \n",wt);
	//   %f，用于表示单精度浮点数类型数据
	short int age2  = age + 1;
	float wt2 = wt - 4;
	printf("%d \n",age2);
	printf("%f \n",wt2);
	double x = 0.608;
	double y = 1.214;
	double z = x + y;
	//double，双精度浮点类型变量，1位符号，16位指数，52位小数
	printf("%lf \n" ,z);
	//   %lf，用于表示双精度浮点类型数据
	getch();
	return 0;
}
