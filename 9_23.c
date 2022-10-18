#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//7_30题目9 走n阶台阶，每次可以选择走一阶或者走两阶，有多少种走法
//void run(int n,int* count)
//{
//	if (n - 2 >= 0)
//	{
//		run(n - 2,count);
//	}
//	if (n - 1 >= 0)
//	{
//		run(n - 1,count);
//	}
//	if (n == 0)
//		(*count)++;
//}
//
////A
//int walk(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return walk(n - 1) + walk(n - 2);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	run(n,&count);
//	printf("%d\n", count);
//	return 0;
//}
//青蛙跳台问题变型未解决？？？


//测试 未解决？？？
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i);//a = 6
////	int b = (i++) + (i++);//b = 2
//	//int c = (i++) + (i++) + (i++);//c = 3
//	//int d = (++i) + (++i) + (++i);//这是问题代码
//	return 0;
//}//++在前是先自加再运算，在后是先(按1)运算再自加 通过汇编也可以看出
// //  (加成3放到i里再运算)   (运算出2放到b里再自加) 


//半径为5的圆的周长和面积
//#include<stdio.h>
//int a(int i)
//{
//	if (i % 10 >= 5)
//	{
//		i = i / 10 + 1;
//	}
//	else
//	{
//		i = i / 10;
//	}
//	return i;
//}
//
//int main()
//{
//	float c = 3.1415 * 2 * 5;
//	float s = 3.1415 * 5 * 5;
//	
//	int i = c * 1000;
//	int c_1 = a(i);
//	float c_2 = c_1 * 1.0 / 100;
//	float c_3 = c_1 / 100 * 1.0;//易错
//	
//	int j = s * 1000;
//	int s_1 = a(j);
//	float s_2 = s_1 * 1.0 / 100;
//	
//	printf("%.2f %.2f\n", c_2, s_2);
//	return 0;
//}


//解二元一次方程
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float d = b * b - 4 * a *c;
//	float g = -b - sqrt(d);
//	float h = g / (2 * a);
//	float x1 = (-b - sqrt(b * b - 4 * a *c)) / (2 * a);//2*a要括起来
//	double x2 = (-b + sqrt(d)) / (2 * a);
//	if (x1 > x2)
//	{
//		printf("%.2f %.2f", x2, x1);
//	}
//	else
//		printf("%.2f %.2f", x1, x2);
//		return 0;
//}


//华氏温度转换
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	float b = 5 *(a - 32)/9.0;
//	printf("%.2f", b);
//	return 0;
//}


//使用不带随机种子的随机函数求出任意两个一百以内（包含一百）的正整数，这两个正整数之和，输出形式为a+b=c(例如28+19=47)。
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = rand() % 100 + 1;
//	int b = rand() % 100 + 1;
//	printf("%d+%d=%d\n", a, b, a + b);
//	return 0;
//}