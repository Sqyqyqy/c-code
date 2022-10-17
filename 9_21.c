#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//7_30题目7 序列中删除指定数字
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (del != arr[i])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//“未被删除的数字前后位置没有发生改变，所以排序这种方式是不太合适的”？？？

//真的要删除这个元素我们该怎么去做
//我
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//		{
//			if (i == n - 1)
//			{
//				count++;
//			}
//			else
//			{
//				int j = i;
//				for (j; j < n - 1; j++)//1 2 3 4 5 5
//				{
//					arr[j] = arr[j + 1];
//				}
//				count++;
//			}
//		}
//	}
//	for(i = 0;i < n - count;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//a:双下标的方式一个去遍历一个去存储


////7_30题目8 n和m的最大公约数与最小公倍数之和 (long long类型的使用)
//int main()
//{
//	long long m, n;
//	scanf("%lld %lld", &m, &n);
//	long long mul = m * n;
//	if (n > m)
//	{
//		int tmp = n;
//		n = m;
//		m = tmp;
//	}//m / n = 
//	while (m % n)
//	{
//		int y = m % n;
//		m = n;
//		n = y;
//	}
//	////a：改进
//	//int y = 0;
//	//while (y = m % n)
//	//{
//	//	m = n;
//	//	n = y;
//	//}
//	int com_div = n;//最大公约数
//	long long com_mul = mul / com_div;//最小公倍数:公式法,两个数的乘积等于这两个数的最大公约数与最小公倍数的积
//	printf("%lld\n", com_div + com_mul);
//	return 0;
//}

//测试
//int main()
//{
//	long long m, n;
//	scanf("%lld %lld", &m, &n);//"%d %d"会有问题 为什么？？
//	long long c = m * n;
//	return 0;
//}