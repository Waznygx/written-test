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

//// 1.用预处理指令#define声明一个常数，用以表明1年中有多少秒
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

//// 2.写一个“标准”宏MIN，这个宏输入两个参数并返回较小的一个
//#define MIN(x,y) ((x)<(y)?(x):(y))
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", MIN(a, b));
//	return 0;
//}

//// 3.用变量a给出下面定义
////一个整型数
//int a;
////一个指向整型数的指针
//int* a;
//// 一个指向指针的指针，该指针是指向一个整型数
//int** a;
////一个有10个指针的数组
//int* a[10];
////一个有10个指针的数组,该指针是指向一个整型数
//int* a[10];
////一个指向函数的指针，该函数有一个整型参数并返回一个整型数
//int (*a)(int*,int*);
////一个有10个指针的数组，该指针指向一个函数，
////该函数有一个整型参数并返回一个整型数
//int (*a[10])(int*, int*);

// 4.十进制23，转换成十六进制
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
//	printf("机器实现=%x\n", num);
//	bin(num);
//	//printf("手动实现=%d", );
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
    printf("手动实现=%x\n", hex(yu, i));
}

int main()
{
    int num = 23;
    printf("机器实现=%x\n", num);
    bin(num);
}
