#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//把两个有序递增的数组存到另一个数组中，且在数组中仍然有序
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int* a1 = (int*)malloc(4 * n);
//	int* a2 = (int*)malloc(4 * m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &a2[i]);
//	}
//	int* a3 = (int*)malloc(4 * (m+n));
//	int i = 0;
//	int j = 0;
//	int c = 0;
//	while (i < n && j < m)
//	{
//		if (a1[i] <= a2[j])
//			a3[c++] = a1[i++];
//		else
//			a3[c++] = a2[j++];
//	}
//	if (i < n)
//	{
//		while (i < n)
//			a3[c++] = a1[i++];
//	}
//	else
//	{
//		while (j < m)
//			a3[c++] = a2[j++];
//	}
//	for (int k = 0; k < m+n; k++)
//	{
//		printf("%d ", a3[k]);
//	}
//	return 0;
//}


//一个数如果恰好等于它的因子中除它本身之外的数之和，这个数就称为“完数”
//例如6=1+2+3，编程输出1000以内的所有完数
//#include<math.h>
//int a(int i)
//{
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			sum = sum + j + (i / j);
//	}
//	//-j^2
//	if ((--j) == sqrt(i))
//		sum -= j;
//	sum = sum - i;
//	if (sum == i)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	for (int i = 4; i <= 1000; i++)
//	{
//		if (a(i) == 1)
//			printf("%d ", i);
//
//	}
//
//	//测试
//	//printf("%f\n", sqrt(3));
//	return 0;
//}


//试利用结构体类型编写一个程序：t组数据，每组数据输入10个数，将它们从大到小排序后输出
//并给出每个输出值所对应的原来输入次序
//#include<stdio.h>
//#include<stdlib.h>
//struct s
//{
//	int a;
//	int b;
//};
//int compare(const void* x,const void* y)
//{
//	return -(((struct s*)x)->a - ((struct s*)y)->a);
//}
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	struct s arr[10];
//	while (t--)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i].a);
//			arr[i].b = i + 1;
//		}
//		qsort(arr, 10, sizeof(struct s), &compare);
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d %d ", arr[i].a, arr[i].b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//有一个 n × m 的矩阵，我们定义左上角为 (1,1)，右下角为 (n,m)
//其中的每一个元素都为 0 或 1
//现在我们知道初始的矩阵，有 q 次操作
//每次操作都能使(x1, y1) 到(x2, y2) 的矩阵内所有路灯状态反转
//请你输出 q 次操作之后的状态
#include<stdlib.h>
int main()
{
	int q = 0;
	int n, m;
	while (scanf("%d %d %d", &n, &m, &q) == 3)
	{
		//int arr[200][200];
		//malloc未 已
		int(*arr)[200] = (int(*)[200])malloc(sizeof(int) * 200 * 200);
		if (arr == NULL)
		{
			perror("malloc fail");
			exit(-1);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		while (q--)
		{
			int x1, y1, x2, y2;
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			x1--;
			y1--;
			x2--;
			y2--;
			if (x2 > x1)
			{
				int tmp = x1;
				x1 = x2;
				x2 = tmp;
			}
			if (y2 > y1)
			{
				int tmp = y1;
				y1 = y2;
				y2 = tmp;
			}
			for (int i = x2; i <= x1; i++)
			{
				for (int j = y2; j <= y1; j++)
				{
					//if (arr[i][j] == 1)
					//	arr[i][j] = 0;
					//else
					//	arr[i][j] = 1;

					arr[i][j] ^= 1;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				printf("%d", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
