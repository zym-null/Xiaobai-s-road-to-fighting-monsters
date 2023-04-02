#include <stdio.h>
int main()
/*
sizeof()用于获取对象和类型的字节大小*/
{
	printf("int : %lu \n",sizeof (int));
	printf("char : %d \n",sizeof(char));
	printf("short : %d \n", sizeof(short));
	printf("long : %d \n",sizeof(long));
	printf("unsigned int : %d \n",sizeof(unsigned int));
	printf("float : %d \n", sizeof(float));
	printf("double : %d \n",sizeof(double));
	getch();
	//getch（）用于使程序运行窗口停留
	return 0;
}