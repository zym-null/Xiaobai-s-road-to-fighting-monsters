#include <stdio.h>
int main()
/*
sizeof()���ڻ�ȡ��������͵��ֽڴ�С*/
{
	printf("int : %lu \n",sizeof (int));
	printf("char : %d \n",sizeof(char));
	printf("short : %d \n", sizeof(short));
	printf("long : %d \n",sizeof(long));
	printf("unsigned int : %d \n",sizeof(unsigned int));
	printf("float : %d \n", sizeof(float));
	printf("double : %d \n",sizeof(double));
	getch();
	//getch��������ʹ�������д���ͣ��
	return 0;
}