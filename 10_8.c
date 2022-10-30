#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = n;
//	int empty = n;
//	while (empty >= 2)
//	{
//		count += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//求出 5位数中的所有 Lily Number 例如1461 = 1*461 + 14*61 + 146*1
#include <stdio.h>

//int main() {
//	int i = 0;
//	for (i = 10000; i <= 99999; i++) {
//		int sum = 0;
//		//14615
//		int a = 10000;
//		while (a >= 10) {
//			sum += (i / a) * (i % a);
//			a /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			/*int n = (int)pow(10, j);
//			sum += (i/n) * (i%n);*/
//			
//			//sum += i / (int)pow(10, j)*i % (int)pow(10, j);//err
//			sum += (i / (int)pow(10, j)) * (i % (int)pow(10, j));//括号
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面
//void sort(int* arr,int* des,int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = left + sz - 1;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			des[left] = arr[i];
//			left++;
//		}
//		else
//		{
//			des[right] = arr[i];
//			right--;
//		}
//	}
//}
//
//void print(const int* des,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", des[i]);
//	}
//}
//
//int main()
//{
//	int arr[50];
//	int des[50];
//	int i = 0;
//	int sz = 0;
//	while (scanf("%d", &arr[i]) == 1)
//	{
//		i++;
//		sz++;
//	}
//	sort(arr,des,sz);
//	print(des,sz);
//
//	//测试
//	//int arr[] = { 1,2,3 };
//	//printf("%d\n",scanf("%d", &arr[1]));//输入a不会放入数组中，且scanf返回0
//	return 0;
//}

//a:在原数组操作
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left<sz-1)&&(arr[left] % 2 == 1))
//		{      //(left < right) && (arr[left] % 2 == 1)
//			left++;
//		}
//		while ((right>0)&&(arr[right] % 2 == 0))
//		{      //(left < right) && (arr[right] % 2 == 0)
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		/*	left++;
//			right--;*/
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,3,5,7,9,1,3,5,7,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//模拟实现库函数strcpy
//char* my_strcpy(char* des, const char* source)
//{
//	int ret = des;
//	int i = 0;
//	while (source[i] != 0)
//	{
//		des[i] = source[i];
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr_source[] = "abcdef";
//	char arr_des[7] = { 0 };
//	printf("%s\n", my_strcpy(arr_des, arr_source));
//	return 0;
//}


//模拟实现库函数strlen
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	while ((*arr++) != 0)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

