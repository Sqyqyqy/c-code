#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//10_12题目9 杨氏矩阵,查找某个数字是否存在,要求：时间复杂度小于O(N)
//1 2 3
//4 5 6
//7 8 9
//a:
//法二 可以创建一个结构体返回下标
//struct Point
//{
//	int x;
//	int y;
//};
//
//void find_num_in_yang(int arr[3][3], int k, int* px, int* py)
//{
//	int i = 0;
//	int j = *py - 1;
//	int flag = 0;
//	while (i <= *px-1 && j >= 0)
//	{
//		if (arr[i][j] < k)
//			i++;
//		else if (arr[i][j] != k)
//			j--;
//		else
//		{
//			flag = 1;
//			//printf("找到了，下标是:%d %d\n",i,j);//在函数内部打印不太好，最好返回一个值
//			*px = i;
//			*py = j;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		//printf("找不到\n");
//		*px = -1;
//		*py = -1;
//	}
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	//find_num_in_yang(arr, k, 3, 3);
//
//	//法一
//	//返回型参数:传参时可以带进去一些信息，当回来的时候又可以带回来一些信息
//	int x = 3;
//	int y = 3;
//	find_num_in_yang(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d %d\n",x,y);
//	return 0;
//}


//10_12题目10 字符串左旋:实现一个函数，可以左旋字符串中的k个字符
#include<string.h>
//a:法一
void revolve(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	k %= len;
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		memmove(arr, arr + 1, len - 1);
		/*int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}*/
		arr[len - 1] = tmp;
	}
}
//法二：左边逆序，右边逆序，整体逆序
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	revolve(arr, k);
//	printf("%s\n",arr);
//
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//是返回1，不是返回0
#include<string.h>
//a:法一 
int is_move(char arr1[], char arr2[])
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int j = 0;
		char tmp = arr1[0];
		for (j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
//a:法二 原字符串后追加原字符串，这个字符串就包含了原字符串旋转之后的所有可能性
//int main()
//{
//	char arr1[] = "ABCDE";
//	char arr2[] = "CDEAB";
//	int ret = is_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//vs上EOF测试
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)//测试：按3个ctrl+z才能跳出循环
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//二维数组%s打印测试
//int main()
//{
//	char arr[3][3] = { {'a','b','c'},{'d','e','f'},{'g','h','\0'} };
//	printf("%s\n", arr);
//	return 0;
//}


//10_13题目6 空心正方形图案
//int main() {
//	int a;
//	while (scanf("%d", &a) != EOF)//(scanf("%d",&a)==1)
//	{
//		char arr[20][39] = { 0 };
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < a; i++)
//		{
//			for (j = 0; j < a + a - 1; j++)
//			{
//				if (i == 0 || i == a - 1)
//				{
//					if (j % 2 == 0)
//						arr[i][j] = '*';
//					else
//						arr[i][j] = ' ';
//				}
//				else
//				{
//					if (j == 0 || j == 2 * a - 2)
//						arr[i][j] = '*';
//					else
//						arr[i][j] = ' ';
//				}
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//10_13题目7 有序序列插入一个数
#include <stdio.h>
#include<string.h>
//w
//int main() {
//	int n, i, a;
//	scanf("%d", &n);
//	int arr[n + 1];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &a);
//	if (a < arr[0])
//	{
//		memmove(arr + 1, arr, n * 4);
//		arr[0] = a;
//	}
//	else if (a > arr[n - 1])
//	{
//		arr[n] = a;
//	}
//	else
//	{
//		for (i = 0; i < n - 1; i++)
//		{
//			if (a >= arr[i] && a <= arr[i + 1])
//			{
//				memmove(arr + i + 2, arr + i + 1, (n - i - 1) * 4);
//				arr[i + 1] = a;
//				break;
//			}
//		}
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//10_13 qsort函数使用测试
//qsort排序整型数组
#include<stdlib.h>
int compar_int(const void* p1, const void* p2)
{
	return *((int*)p1) - *((int*)p2);
}

//int main()
//{
//	int arr[] = { 3,2,4,1,5,6,8 };
//	qsort(arr, 7, 4, compar_int);
//	int i = 0;
//	for (i=0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//qsort排序字符型数组
#include<string.h>
int compar_char(const void* p1, const void* p2)
{
	return strcmp((const char*)p1, (const char*)p2);
}

//int main()
//{
//	char arr[] = "afdbec";
//	qsort(arr, 6, 1, compar_char);
//	printf("%s\n", arr);
//  return 0;
//}

//qsort排序结构体数组
struct Point
{
	int x;
	int y;
	char name[20];
};

int compar_struct_by_x(const void* p1, const void* p2)
{
	return (((struct Point*)p1)->x) - (((struct Point*)p2)->x);
}

int compar_struct_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Point*)p1)->name, ((struct Point*)p2)->name);
}

//int main()
//{
//	struct Point arr[] = { {.x= 2,.name="wang"},{3,3,"ming"},{1,3,"zhang"} };
//	qsort(arr, 3, 28, compar_struct_by_x);//我：调试观察内存的变化，内存块发生交换，规定这块内存是struct类型的（监视显示），读的时候以struct类型读这块内存
//	qsort(arr, 3, 28, compar_struct_by_name);
//	
//	//相关测试
//	//struct Point* p = arr;
//	//printf("%d\n", p->x);//打印2
//	//printf("%d\n", arr->x);//打印2
//	//printf("%c\n", arr->name[1]);//打印a
//	//printf("%d\n", sizeof(arr->name));//打印20
//	return 0;
//}


//10_13 模仿qsort的功能实现一个通用的冒泡排序
void bubble_sort(void* base,size_t num,size_t size,int(*cmp)(const void*,const void*)) 
{
	unsigned int i = 0;
	char* p = (char*)base;
	int count = 0;
	for (i = 0; i < num - 1; i++)
	{
		unsigned int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp(p+j*size,p+(j+1)*size)>0)
			{
				unsigned int k = 0;
				for (k = 0; k < size; k++)
				{
					char tmp = *(p + j * size + k);
					*(p + j * size + k) = *(p + (j + 1)*size + k);
					*(p + (j + 1)*size + k) = tmp;
				}
				/*int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;*/
				count++;
			}
		}
		if (count == 0)
			break;
		else
			count = 0;
	}
}

//int main()
//{
//	//冒泡排序
//	int i = 0;
//	int count = 0;
//	int arr[] = { 1,4,3,5,2,7,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, 4, compar_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
