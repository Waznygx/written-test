#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define M 1000;
//int main()
//{
//	int a = 20;
//	if (a > 0)
//	{
//		a = M;
//	}
//	else
//		a = -M;
//	/*printf("%d\n", __LINE__);*/
//	return 0;
//}

//#define print(x) (printf("the num of "x" is %d\n",x))
//#define print(x) (printf("the num of "#x" is %d\n",x))
//#define print(x,FORMAT) (printf("the num of "#x" is " FORMAT "\n",x))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c[] = "ch";
//	double d = 3.14;
//	print(a,"%d");
//	print(b,"%d");
//	print(c,"%s");
//	print(d,"%lf");
//	return 0;
//}

//// 1.��Ԥ����ָ��#define����һ�����������Ա���1�����ж�����
//#define second ((min)*60)
//int main()
//{
//	int day = 0;
//	int hour = 0;
//	int min = 0;
//	day = 365;
//	hour = day * 24;
//	min = hour * 60;
//	printf("%d\n", second);
//	return 0;
//}

//// 2.дһ������׼����MIN������������������������ؽ�С��һ��
//#define MIN(x,y) ((x)<(y)?(x):(y))
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", MIN(a, b));
//	return 0;
//}

//// 3.�ñ���a�������涨��
////һ��������
//int a;
////һ��ָ����������ָ��
//int* a;
//// һ��ָ��ָ���ָ�룬��ָ����ָ��һ��������
//int** a;
////һ����10��ָ�������
//int* a[10];
////һ����10��ָ�������,��ָ����ָ��һ��������
//int* a[10];
////һ��ָ������ָ�룬�ú�����һ�����Ͳ���������һ��������
//int (*a)(int*,int*);
////һ����10��ָ������飬��ָ��ָ��һ��������
////�ú�����һ�����Ͳ���������һ��������
//int (*a[10])(int*, int*);

//// 4.ʮ����23��ת����ʮ������
//#define max 1000
//char check_num(int num)
//{
//	if (num >=0 && num <=9)
//	{
//		return '0' + num;
//	}
//	if (num >=10 && num <= 15)
//	{
//		return 'A' + num - 10;//�ȼ��㡰num-10��
//		//����num=11��'A' + 1ʱ���ַ���A����ת��Ϊ����ASCII��65��Ȼ�����1���õ�66��
//		//Ȼ��������ֱ�ת�����ַ����õ��ַ���B��
//	}
//}
//void turn(int num)
//{
//	int chu = num;
//	int yu[max] = { 0 };
//	int i = 0;
//	int j = 0;
//	while (chu)
//	{
//		yu[i] = chu % 16;
//		chu = chu / 16;
//		i++;
//	}
//	for (j = i - 1; j >= 0; j--)
//	{
//		printf("%c",check_num(yu[j]));
//	}
//}
//int main()
//{
//	int num = 23;
//	turn(num);
//	return 0;
//}

//5.if(a==10)��if(10==a)��������Ƿ���ȷ
//��ȷ����ǰ�ߡ�

//6.
int a[10]={1,2,3,4,5,6,7,8,9,10};
int* p = &a[1];
//p[6] = ;
//8
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &a[1];
	printf("%d", p[6]);
	return 0;
}














//char get_hex_char(int num) 
//{
//	if (num >= 0 && num <= 9) 
//	{
//		return '0' + num;
//	}
//	else 
//	{
//		return 'A' + num - 10;//�ȼ��㡰num-10��
//		//����num=11��'A' + 1ʱ��ʵ����������һ����ѧ���㡣���ȣ��ַ���A����ת��Ϊ����ASCII��65��Ȼ�����1���õ�66��
//		//Ȼ��������ֱ�ת�����ַ����õ��ַ���B��
//	}
//}
//void turn(int num)
//{
//	int chu = num;
//	int yu[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	while (chu)
//	{
//		yu[i] = chu % 16;
//		chu = chu / 16;
//		i++;
//	}
//	for (j = i - 1; j >= 0; j--) 
//	{
//		printf("%c", get_hex_char(yu[j]));
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%x\n", num);
//	turn(num);
//	return 0;
//}
