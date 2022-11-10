#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<stdlib.h>
#include<limits.h>
#include<assert.h>
//内存函数的常见错误
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		int* ptr = (int*)realloc(p, INT_MAX);
//		if (ptr != NULL)
//		{
//			p = ptr;
//			ptr = NULL;
//		}
//		else
//			perror("realloc");
//	}
//	//assert(p);
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//测试 以地址形式打印字符串 打印出的是首字符的地址
//int main()
//{
//	int i = 0;
//	printf("%p\n", "abcdef");
//	return 0;
//}


//测试 局部变量放在栈上，出作用域释放，他的地址变成野指针
//为什么空间被释放依旧可以打印出原先存放的值
//如果出函数直接打印字符串，可以打印原来的，但如果出函数先调用一次printf函数，就无法打印出原先值
//推测：可能与函数栈帧的创建和覆盖有关
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//int main()
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf("%c\n", *str);//打印：h             （重要）
//	printf("%s\n", str);//打印：烫烫烫烫烫烫@鞒
//	printf(str);//打印：烫烫烫烫烫烫烫烫@鞒
//	return 0;
//}

//int* test()
//{
//	int a = 30;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//测试 无符号整型1减去有符号整型2
//int main()
//{
//	unsigned int a = 1;
//	int b = 2;
//	a = a - b;
//	//00000010 b
//	//00000001 a
//	//a-b就是a+(-b)  记得只有加法器
//	//10000000000000000000000000000010 -2原码
//	//11111111111111111111111111111110 -2补码
//	//00000000000000000000000000000001 a
//	//11111111111111111111111111111111 a+(-b)   4294967295
//	//(上述仅我推测)
//	printf("%u\n", a);//4294967295
//	return 0;
//}


//9_14题目1 每位的数变成0或1，奇数变成1，偶数变成0。例输入：222222，输出：0
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[9] = { 0 };
//	int i = 8;
//	while (n)
//	{
//		if (n % 10 % 2 == 1) {
//			arr[i] = 1;
//		}
//		else {
//			arr[i] = 0;
//		}
//		n = n / 10;
//		i--;
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] != 0)
//		{
//			for (; i < 9; i++)
//			{
//				printf("%d", arr[i]);
//			}
//			n = -1;
//		}
//	}
//	if (n != -1)
//		printf("0");
//	return 0;
//}
//a
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//123
//	int sum = 0;
//	int i = 0;
//	while (n)
//	{
//		sum += (n % 10 % 2)*pow(10, i);
//		n /= 10;
//		i++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//9_16题目5 去重并排序：第一行包含一个正整数n，表示给出的序列有n个数。接下来有n行，每行一个正整数k，为序列中每一个元素的值。(1 ≤ n ≤ 105，1 ≤ k ≤ n)
//#include<stdlib.h>
//
//int cmp_int(const void* x, const void* y)
//{
//	return (*(int*)x) - (*(int*)y);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, 4, cmp_int);
//	printf("%d ", arr[0]);
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] != arr[i + 1])
//		{
//			printf("%d ", arr[i + 1]);
//		}
//	}
//	return 0;
//}

//a:
//int main()
//{
//	int arr[100001] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&m);
//		arr[m] = 1;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//C99标准
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n + 1];//C99
//	memset(arr, 0, (n + 1) * sizeof(int));
//	int i = 0;
//	int m = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = 1;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
