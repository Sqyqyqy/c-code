//G
//n 只猴子选大王，方法如下：
//所有猴子按编号 1, 2, 3, …, n 围坐一圈，i 号猴子的下一个是 i + 1 号，n 号的下一个是 1 号；
//猴子们按顺序进行报数，开始时 1 号猴子报 1，每轮到下一个猴子报数依次 +1，报到 m 号退出圈外，再下一个猴子重新从 1 开始，如此循环报数，直到圈内只剩下一个猴子，即为大王。
//编程输出大王的原始序号，n 和 m 的值由键盘输入
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int rem_n = n;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 1;
//	}
//	
//	int now_num = 0;
//	i = 0;
//	while (n > 1)
//	{
//		if (i == rem_n)
//		{
//			i = 0;
//		}
//		if (arr[i] != 0)
//		{
//			now_num++;
//			if (now_num == m)
//			{
//				arr[i] = 0;
//				n--;
//				now_num = 0;
//			}
//			i++;
//		}
//		else
//			i++;
//
//	}
//
//	for (i = 0; i < rem_n; i++)
//	{
//		if (arr[i] == 1)
//		{
//			printf("%d", i + 1);
//		}
//	}
//
//	return 0;
//}
//----------------------------------------------------------------------


//strstr模拟实现
//KMP
//#include<string.h>
//#include<stdlib.h>
//int* Getnext(char* son,int sz_son)
//{
//	int* next = (int*)malloc(sizeof(int)*sz_son);
//	next[0] = -1;
//	next[1] = 0;
//	int lef = 0;
//	int rig = 1;
//	while (rig <= sz_son - 2)
//	{
//		if (son[lef] == son[rig])
//		{
//			next[rig + 1] = next[rig] + 1;
//			lef++;
//			rig++;
//		}
//		else
//		{
//			lef = 0;
//			next[rig + 1] = 0;
//			rig++;
//		}
//	}
//	return next;
//}
//
//char* Find(char* fa, char* son,int sz_fa,int sz_son)
//{
//	int i = 0;//fa
//	int j = 0;//son
//	int* next = Getnext(son,sz_son);
//	while (i < sz_fa && j < sz_son)
//	{
//		if (fa[i] == son[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//			if (j == -1)
//			{
//				j++;
//				i++;
//			}
//		}
//	}
//
//	if (j == sz_son)
//	{
//		return &fa[i - sz_son];
//	}
//	else
//	{
//		return NULL;
//	}
//
//	free(next);
//	next = NULL;
//}
//
//int main()
//{
//	//假设已经有next数组
//	char father[] = "abfdabef";
//	char son[] = "dabe";
//	char* ret = Find(father, son,strlen(father),strlen(son));
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//extern void test();
//extern int x;
//#include"test.h"
//int main()
//{
//	test1();//test.h
//	//test();//test.c
//	//int a = x + 1;//err test.c
//	return 0;
//}


//测评
//6
//int main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long long c = a + b;
//	printf("%lld\n", c);//4294967295
//
//	long c2 = a + b;
//	printf("%ld\n", c2);//-1
//	return 0;
//}
//    100000011 -3原
//    111111101 -3补
//1111111111101 模仿整型提升，放到更大的类型里 补
//1000000000011 -3
//int main()
//{
//	unsigned char a = 255;
//	int b = a;//255
//	
//	return 0;
//}
#include<limits.h>
//int main()
//{
//	unsigned int a = INT_MAX + 2;
//	int b = a;
//	//10000000000000000000000000000001 a
//	//10000000000000000000000000000001 放到b里 补
//	//11111111111111111111111111111111 原
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int f0 = 0;
//	int f1 = 1;
//	int f2 = 0;
//	int tmp = 0;
//	while (1)
//	{
//		f2 = f0 + f1;
//		f0 = f1;
//		f1 = f2;
//		if (f2 >= n && tmp <= n)
//		{
//			int ret = (f2 - n) > (n - tmp) ? (n - tmp) : (f2 - n);
//			printf("%d\n", ret);
//			break;
//		}
//
//		tmp = f2;
//	}
//	return 0;
//}
