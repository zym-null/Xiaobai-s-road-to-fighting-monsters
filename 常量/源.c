#include <stdio.h>
    //����Ҳ��������������ֵ������֮���ܽ����޸ģ����ڴ�����ֱ��ʹ�ã�Ҳ�ɶ����ʹ��
	// 
	//0x��0X��ʾʮ�����ƣ�0Ϊ�˽��ƣ���ǰ׺Ϊʮ���ƣ���׺L/l��ʾ��������U/u��ʾ�޷���������׺˳������
	//��const�ؼ������Σ�����#defineԤ����ָ���

#define Q  1; //�궨��,��ʶ�������������ͣ�
enum Sex      //ö�ٳ�������һһ�о�
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
	//���泣��
	int i = 3.1415926;
	printf("i = %d ",i);
	const int N = 3; //�������������Ǳ������о�����������
	int b = N;
	printf("b = %d \n",b);
	int a = Q;       //�궨�峣��
	printf("a = %d \n", a);
	//ö�ٳ�����Ĭ�ϴ��㿪ʼ��
	printf("x = %d \n" ,male);  
	printf("y = %d \n",female);
	printf("z = %d \n",secret);
	//ö�ٳ���Ҳ�������䶨��ʱ�����ֵ���ӳ�ֵ������
	printf("%d \n",red );
	printf("%d \n",bule);
	printf("%d \n",white);
	printf("%d \n",green);
	printf("%d \n",pink);

	return 0;
}

