#include <stdio.h>
int main()
    //����һ������������{}ǰ����Ϊȫ�ֱ���������{}����Ϊ�ֲ�����
{
	extern int  X;    //����һ���������ֲ�������
	int i ;           //������Ҳ�Ƕ���һ������
	int p = 1;        //����һ��������������һ����ʼֵ



	char ch = 'a';       
	printf("%d \n", ch);
	printf("%c \n",ch);
	//   %d����ʾ����    %c����ʾ�ַ�    charΪһ�ֽ��������ͱ���
	short int age = 21;
	float wt = 65.7;
	//   int�����ֽ����ͱ���     float�������ȸ������ͱ�����1λ���ţ�8λָ����23λС��
	printf("%d \n ",age);
	printf("%f \n",wt);
	//   %f�����ڱ�ʾ�����ȸ�������������
	short int age2  = age + 1;
	float wt2 = wt - 4;
	printf("%d \n",age2);
	printf("%f \n",wt2);
	double x = 0.608;
	double y = 1.214;
	double z = x + y;
	//double��˫���ȸ������ͱ�����1λ���ţ�16λָ����52λС��
	printf("%lf \n" ,z);
	//   %lf�����ڱ�ʾ˫���ȸ�����������
	getch();
	return 0;
}