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

// 4.ʮ����23��ת����ʮ������
//int hex(int yu[])
//{
//	
//	return 0;
//}
//void bin(int num)
//{
//	int chu = num;
//	int yu[100] = {0};
//	int i = 0;
//	while (chu)
//	{
//		yu[i] = chu % 2;
//		chu = chu / 2;
//		i++;
//		if (yu[i] == 0 && chu == 0)
//		{
//			break;
//		}
//	}
//	hex(yu[i]);
//}
//int main()
//{
//	int num = 23;
//	printf("����ʵ��=%x\n", num);
//	bin(num);
//	//printf("�ֶ�ʵ��=%d", );
//	return 0;
//} 

#include <stdio.h>

int hex(int yu[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum * 2 + yu[i];
    }
    return sum;
}

void bin(int num)
{
    int chu = num;
    int yu[100] = { 0 };
    int i = 0;
    while (chu)
    {
        yu[i] = chu % 2;
        chu = chu / 2;
        i++;
        if (yu[i] == 0 && chu == 0)
        {
            break;
        }
    }
    printf("�ֶ�ʵ��=%x\n", hex(yu, i));
}

int main()
{
    int num = 23;
    printf("����ʵ��=%x\n", num);
    bin(num);
}
