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

//// 4.十进制23，转换成十六进制
//#define max 1000
//char check_num(int num)
//{
//	if (num >=0 && num <=9)
//	{
//		return '0' + num;
//	}
//	if (num >=10 && num <= 15)
//	{
//		return 'A' + num - 10;//先计算“num-10”
//		//假设num=11，'A' + 1时，字符’A’被转换为它的ASCII码65，然后加上1，得到66。
//		//然后，这个数字被转换回字符，得到字符’B’
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

//5.if(a==10)和if(10==a)两条语句是否都正确
//正确，用前者。

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
//		return 'A' + num - 10;//先计算“num-10”
//		//假设num=11，'A' + 1时，实际上是在做一个数学运算。首先，字符’A’被转换为它的ASCII码65，然后加上1，得到66。
//		//然后，这个数字被转换回字符，得到字符’B’
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
