#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//int compar(const void* x, const void* y)
//{
//	return *((char*)x) - *((char*)y);
//}
int compar(const void* x, const void* y)
{
	int a, b;
	if ((a = *((int*)x)) < 0)
	{
		a = -1 * a;
	}
	if ((b = *((int*)y)) < 0)
	{
		b = -1 * b;
	}

	if (a == b)
	{
		if (*((int*)x) < 0 && *((int*)y) > 0)
		{
			return -1;
		}
		else if (*((int*)y) < 0 && *((int*)x) > 0)
		{
			return 1;
		}
	}
	return a - b;
}


//C
//给出一个数组，请你计算数组中仅出现 2 次的数有多少个
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(4 * n);
//	int d = n;
//	for(int i = 0;i<n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] <= 1000)
//		{
//			int c = 1;
//			int rem = arr[i];
//			for (int j = i + 1; j < n; j++)
//			{
//				if (arr[j] <= 1000)
//				{
//					if (arr[j] == rem)
//					{
//						c++;
//						arr[j] = 10000;
//					}
//				}
//			}
//			if (c == 2)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//D
//给一个服务器的 ip 地址，格式为 a.b.c.d。
//定义 w = (a × b + c) / d（整数相除，省略小数部分）。
//请你判断 w 是不是素数，如果是输出“Yes”，如果不是输出“No”
//数据保证 d 不为 0
//void is(int w)
//{
//	if (w == 1 || w == 0)
//	{
//		printf("No\n");
//		return;
//	}
//	if (w == 2)
//	{
//		printf("Yes\n");
//		return;
//	}
//	if (w % 2 == 0)
//	{
//		printf("No\n");
//		return;
//	}
//	int i = 0;
//	double f = sqrt(w);
//	for (i = 3; i <= f; i += 2)
//	{
//		if (w%i == 0)
//		{
//			printf("No\n");
//			return;
//		}
//	}
//	printf("Yes\n");
//	return;
//}
//int main()
//{
//	int a, b, c, d;
//	//while (scanf("%d.%d.%d.%d", &a, &b, &c, &d) == 4)
//	while (scanf("%d.%d.%d.%d", &a, &b, &c, &d) != -1)
//	{
//		int w = (a * b + c) / d;
//		is(w);
//	}
//
//	return 0;
//}


//E
//给一个 N 个数的数组表示二进制下的一个数，有 M 次操作，每次操作为以下其中之一。
//操作一：给出 L, R，输出这个区间内的数十进制表示。
//操作二：判断第 X 位是 1 还是 0。
//操作三：将第 X 位取反
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int* arr = (int*)malloc(4 * n);
//	for(int i = 0;i<n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while (m--)
//	{
//		int op;
//		scanf("%d", &op);
//		if (op == 1)
//		{
//			int l, r;
//			scanf("%d %d", &l, &r);
//			int ret = 0;
//			int cif = 0;
//			for (int i = r-1; i >= l-1;i--)
//			{
//				ret = ret + arr[i] * pow(2, cif);
//				cif++;
//			}
//			printf("%d\n", ret);
//		}
//
//		if (op == 2)
//		{
//			int x;
//			scanf("%d", &x);
//			printf("%d\n", arr[x-1]);
//		}
//
//		if (op == 3)
//		{
//			int x;
//			scanf("%d", &x);
//			if (arr[x-1] == 0)
//				arr[x-1] = 1;
//			else
//				arr[x-1] = 0;
//		}
//	}
//	return 0;
//}
