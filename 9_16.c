#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//7_25题目5 求和
//#include<stdio.h>
//long long sum(long long n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + sum(n - 1);
//}
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long ret = sum(n);
//	printf("%lld\n", ret);
//	return 0;
//}


//7_25题目6 输入数字N，然后输入N个数，计算这N个数的和。
//递归实现
//int sum(int arr[])
//{
//	if (*arr != 0)
//	{
//		return *arr + sum(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int arr[50] = {0};//这里不初始化的话 经测试会随机放入值 不是放入0 char不初始化也不是放入0
//	int N = 0;
//	scanf("%d", &N);
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", arr+i);
//	}
//	printf("%d\n", sum(arr));
//	return 0;
//}
//arr[1]是数组第二个元素的地址吗？？（不是吧，&arr[1]是）

//数组的初始化(测试)
//-------------------------------------------
//int main()
//{
//	char arr1[5];
//	scanf("%c", arr1);
//
//	int arr3[5];
//	scanf("%d", arr3);
//
//	int arr4[5] = { 1 };
//	char arr2[5] = {'a'};
//	return 0;
//}
//-------------------------------------------

//非递归实现
//int main()
//{
//	int arr[50];//这里不初始化的话 经测试会随机放入值 不是放入0 char不初始化也不是放入0
//	int N = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", arr + i);
//		sum = sum + *(arr + i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//7_25题目7 递归和非递归分别实现求第n个斐波那契数
//递归实现
//int fibo(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibo(n - 1) + fibo(n - 2);
//	}
//}
//
//int main()
//{
//	//1 1 2 3 5 8 13
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fibo(n);
//	printf("%d\n", ret);
//	return 0;
//}

//非递归实现
//int main()
//{
//	//1 1 2 3 5 8 13
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	int i = 2;
//	int a = 1;
//	int b = 1;
//	while(i<n)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		i++;
//	}
//	printf("%d", ret);
//	if (n < 3)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//测试
//int main()
//{
//	int a[][3] = { {0,1,2},{3,4,5} };
//	//int a[][3] = { {0,2},{},{3,4,5} };//未解决
//	return 0;
//}


//7_26题目9 交换数组
//void change(char A[], char B[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//}
//
//int main()
//{
//	char A[] = "abc";
//	char B[] = "123";
//	int sz = sizeof(A) / sizeof(A[0]) - 1;
//	change(A, B,sz);
//	printf("A = %s B = %s\n", A, B);
//	return 0;
//}


//7_26题目10 数组操作
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
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
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//打印数组的每个元素
//
//	reverse(arr, sz);//数组元素的逆置
//	print(arr, sz);//打印数组的每个元素
//	
//	init(arr,sz);//初始化数组为全0
//	print(arr,sz);//打印数组的每个元素
//
//	return 0;
//}
