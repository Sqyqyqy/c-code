#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	char arr[10];//有可能放不下长的串
//	scanf("%s", arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr[] = "abc";
//	int a = sizeof(arr);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}


//二维数组的访问
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//		//printf("%d %d %d %d\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
//	}
//	return 0;
//}


//w
//void sort(int arr[])
//{
//	int n = 0;
//	int i = 0;
//	for (n = 0; n < 9; n++)
//	{
//		for (i = n+1; i < 10; i++)
//		{
//			if (arr[n] > arr[i])
//			{
//				int tmp;
//				tmp = arr[n];
//				arr[n] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

                  
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
////冒泡排序的思想:两两相邻的元素进行比较
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//0 1 2 3 4 5 6 7 8 9
//	//要对数组升序排序
//	//冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//打印
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//打印数组的两种方式
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", p + i, &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

void a(char arr[3][3])
{
	printf("%p\n", arr);
}

int main()
{
	char arr[3][3] = { 0 };
	a(arr);
	printf("%p\n", &arr[0][0]);
	printf("%p\n", arr);
	return 0;
}
