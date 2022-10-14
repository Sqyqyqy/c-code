#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//7_26题目11 冒泡排序
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int a = 0;
//		int b = 1;
//		for (a = 0; a < sz - b; a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				int tmp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] = tmp;
//			}
//		}
//		b++;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };//9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	BubbleSort(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//优化 如果某次冒泡结束后，序列已经有序了，后面剩余元素的冒泡可以省略
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int a = 0;
//		int b = 1;
//		int count_change = 0;
//		for (a = 0; a < sz - b; a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				int tmp = arr[a];
//				arr[a] = arr[a + 1];
//				arr[a + 1] = tmp;
//				count_change++;
//			}
//		}
//		b++;
//		if (count_change == 0)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };//9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	return 0;
//}


//7_26题目12 矩阵计算
//int main()
//{
//	int N, M,i,j;
//	int arr[10][10];
//	scanf("%d %d", &N, &M);
//	int sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//7_26题目13 矩阵转置(重做)
//int main()
//{
//	int n, m, i, j;
//	scanf("%d %d", &n, &m);
//	int arr[10][10] = {0};
//	for (i = 0; i < n; i++)//2 3
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)//3 2
//	{
//		for (j = 0; j < n; j++)
//		{
//			//int tmp = arr[i][j];
//			//arr[i][j] = arr[j][i];
//			//arr[j][i] = tmp;//这样好像还做不出来 因为当出现交换两次的情况时 就又换回去了
//			printf("%d ", arr[j][i]);//打印交换后的arr[1][2]时，就是打印原矩阵的arr[2][1] 新矩阵的任何位置都可以在原矩阵找到
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//1 2  
//4 5  
//7 8 


//汉诺塔
//void move(char a, char b, char c, int n)
//{
//	if (n == 1)
//	{
//		printf("%c  %c\n", a, c);
//	}
//	else
//	{
//		move(a, c, b, n - 1);
//		move(a, b, c, 1);
//		move(b, a, c, n - 1);
//	}
//}
////n=2的时候 拿3来举例 都能化成两个
////或者说两个可以 3个同样的思路也可以
//
//int main()
//{
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	int n;
//	n = 2;
//	move(a, b, c, n);
//	return 0;
//}


//移位操作符
//int main()
//{
//	int a = 3;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}


//题目 不能创建临时变量（第三个变量），实现两个数的交换

//00000000000000000000000000000011 3
//00000000000000000000000000000101 5
//00000000000000000000000000000110 6

//1. a ^ a= 0
//2. 0 ^ a = a
//3. 异或是支持交换率的
//   3 ^ 5 ^ 3
//   3 ^ 3 ^ 5 

int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}
