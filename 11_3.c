#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//题目见"学校c语言oj.pdf"

//Problem C
//如果该字符串为 abbccc，那么你需要输出 a1b2c3
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%s", arr);
//
//	int tmp = arr[0];
//	int count = 1;
//
//	int i = 1;
//	while (arr[i])
//	{
//		if (arr[i] == tmp)
//		{
//			count++;
//		}
//		else
//		{
//			printf("%c%d", tmp, count);
//			count = 1;
//		}
//		tmp = arr[i];
//		i++;
//	}
//	printf("%c%d", tmp, count);
//	return 0;
//}


//Problem D
//求1 - n中所有数的因子的个数的和
//#include<math.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	for(j=2;j<=a;j++)
//	{
//		int count = 0;
//		for (i = 1; i <= sqrt(j); i++)
//		{
//			if (j%i == 0)
//			{
//				if (i == sqrt(j))
//				{
//					count = count + 1;
//				}
//				else
//				{
//					count = count + 2;
//
//				}
//			}
//		}
//		sum = sum + count;
//	}
//	printf("%d\n", sum+1);
//	return 0;
//}


//Problem E
#include<stdlib.h>
//int com1(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int com2(const void* x, const void* y)
//{
//	return -(*(int*)x - *(int*)y);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//
//	scanf("%d %d", &n, &m);
//	int* arr = (int*)malloc(4 * n);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		int op = 0;
//		int l = 0;
//		int r = 0;
//		scanf("%d %d %d", &op, &l,&r);
//		if (op == 1)
//		{
//			qsort(arr + l - 1, r - l + 1, 4, com1);
//		}
//		else
//		{
//			qsort(arr + l - 1, r - l + 1, 4, com2);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//Problem F
//int com1(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int com2(const void* x, const void* y)
//{
//	return -(*(int*)x - *(int*)y);
//}
//#include<string.h>
//int main()
//{
//	int q = 0;
//	scanf("%d", &q);
//	int* arr = (int*)malloc(4 * (q+1));
//	
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < q + 1; i++)
//	{
//		arr[i] = 0;
//	}
//	char arr1[20] = { 0 };
//	for (i = 0; i < q; i++)
//	{
//		scanf("%s", arr1);
//		if (strcmp("push", arr1) == 0)
//		{
//			scanf("%d",&arr[count]);
//			count++;
//		}
//		else if (strcmp("sum", arr1) == 0)
//		{
//			int sum = 0;
//			int j = 0;
//			for (j = 0; j < count; j++)
//			{
//				sum = sum + arr[j];
//			}
//			printf("%d\n", sum);
//		}
//		else if (strcmp("memset", arr1) == 0)
//		{
//			memset(arr, 0, 4 * q + 12);
//		}
//		else if (strcmp("sort", arr1) == 0)
//		{
//			int choice = 0;
//			scanf("%d", &choice);
//			if (choice == 1)
//			{
//				qsort(arr, count, 4, com1);
//			}
//			else
//			{
//				qsort(arr, count, 4, com2);
//			}
//			int j = 0;
//			for (j = 0; j < count; j++)
//			{
//				printf("%d ", arr[j]);
//			}
//			printf("\n");
//		}
//		else if (strcmp("max", arr1) == 0)
//		{
//			int max = arr[0];
//			int j = 0;
//			for (j = 0; j < count; j++)
//			{
//				if (arr[j] > max)
//				{
//					max = arr[j];
//				}
//			}
//			printf("%d\n", max);
//		}
//		else if (strcmp("min", arr1) == 0)
//		{
//			int max = arr[0];
//			int j = 0;
//			for (j = 0; j < count; j++)
//			{
//				if (arr[j] < max)
//				{
//					max = arr[j];
//				}
//			}
//			printf("%d\n", max);
//		}
//
//
//	}
//	return 0;
//}

