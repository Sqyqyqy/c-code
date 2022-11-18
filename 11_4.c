#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//二分查找
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int find = 0;
//	scanf("%d", &find);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		//mid = (left + right) / 2;      //存在溢出问题
//		mid = left + (right - left) / 2; //解决溢出问题
//		if (arr[mid] == find)
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//		else if (arr[mid] > find)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < find)
//		{
//			left = mid + 1;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//溢出观察
#include<limits.h>
//int main()
//{
//	//int a = INT_MAX - 1;//2147483646
//	//int b = INT_MAX - 3;//2147483644
//	//int c = (a + b) / 2;
//	//printf("%d\n", c);//err -3 
//	//int c1 = a + (b - a) / 2;
//	//printf("%d\n", c1);//ok 2147483645
//
//	//解决溢出的另一种方法
//	long long a = INT_MAX - 1;
//	long long b = INT_MAX - 3;
//	int c = (a + b) / 2;
//	printf("%d\n", c);//ok 2147483645
//
//	return 0;
//}


//分数求和 
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * 1.0 / i;
//		flag = flag * -1;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//最大公约数
//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是:%d\n", b);
//	return 0;
//}


//递归实现n的k次方
//int Pow(int n, int k)
//{
//	if(k > 1)
//		return n * Pow(n, k - 1);
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	int ret = Pow(n,k);
//	printf("%d\n", ret);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，计算一个数的每位之和（递归实现）
//int DigitSum(int n)
//{
//	//1729
//	if (n / 10 != 0)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//非递归实现求第n个斐波那契数
//int Fibo(int n)
//{
//	// 1 1 2 3 5
//	if (n <= 2)
//		return 1;
//	else
//	{
//		int i = 0;
//		int a1 = 1;
//		int a2 = 1;
//		int ret = 0;
//		for (i = 3; i <= n; i++)
//		{
//			ret = a1 + a2;
//			a2 = a1;
//			a1 = ret;
//		}
//		return ret;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fibo(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//转置后的矩阵
//（将矩阵的行列互换得到的新矩阵称为转置矩阵）
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[10][10];
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < m; i++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//或者先把原来的矩阵输进去 打印的时候按列打印


//按位异或的几条性质
//a^0 = a
//a^a = 0
//a^b^c = a^c^b
