#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//预定义符号
//#include<stdlib.h>
//int main()
//{
//	printf("%s\n", __FILE__);//d:\codec\gitee\10_30\10_30\10_30.c
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);//未定义标识符
//
//	system("pause");
//	return 0;
//}


//测试 字符串传参 并打印 
//void Print(char* a, int a1, char* p)
//{
//	printf("the value of " "%s" " is " "%s",a,p);
//}
//
//#define PRINT(val,format) printf("the value of "#val" is "format"\n",val)
//
//int main()
//{
//	int a = 10;
//	//printf("the value of a is %d\n", a);
//	//Print("a", a, "%d");//用函数实现时，打印格式好像指定不了
//	//宏实现
//	PRINT(a,"%d");
//	float b = 2.3f;
//	PRINT(b, "%f");
//
//	//printf("abc""def");
//	return 0;
//}


//#define PRINT printf("file:%s line:%d\n\
//date:%s time:%s\n" ,\
//__FILE__,__LINE__ ,    \
//__DATE__,__TIME__ );


//宏不方便调试 的测试
//#define TEST int i = 3; while(i>0){printf("a"); i--;}
//int main()
//{
//	TEST
//	return 0;
//}

//#define定义宏应用 对函数进行简单封装
//宏能做但函数做不到
#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	//int* p1 = (int*)malloc(10 * sizeof(int));
//	int* p2 = MALLOC(10, int);
//	//(int*)malloc(10*sizeof(int))//替换
//	return 0;
//}


//学校oj
//判断字符串是否为回文字符串，如"abcdefedcba"
//#include<string.h>
//void reverse(char* left, int sz)
//{
//	int times = sz / 2;
//	char* right = left + sz - 1;
//	int i = 0;
//	for (i = 0; i < times; i++)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	//abcdabc
//	char arr[1001] = { 0 };
//	scanf("%s", arr);
//	char arr1[1001] = { 0 };
//	strcpy(arr1, arr);
//
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	if (strcmp(arr, arr1) == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


//将字符串中ASCII码值为奇数的字符删除，将剩余字符形成的新字符串放在数组a中并输出
//w写法1
//int main()
//{
//	int tmp = 0;
//	char a[1001] = {0};
//	int i = 0;
//	while ((tmp = getchar()) != '\n')//这样写运行超时？？？（也可能学校oj有问题）
//	{								 //网友试验：数据量大的时候scanf高效，getchar慢一点，少量但是频繁输入的就是getchar高效……比如进行10000次getchar和10000次scanf("%1s")，就是getchar效率高
//		if (tmp % 2 == 0)
//		{
//			a[i] = tmp;
//			i++;
//		}
//	}
//	printf("%s\n", a);
//	return 0;
//}
//网上搜 写法2
//void fun(char *s, char t[])
//{
//	int i = 0, j = 0;
//	while (s[i])
//	{
//		if (s[i] % 2 == 0)
//			t[j++] = s[i];
//		i++;
//	}
//	t[j] = 0;
//}
//int main()
//{
//	char s[1001], t[1001];
//	scanf("%s", s);//先scanf一次性读进去
//	fun(s, t);
//	printf("%s", t);
//
//	return 0;
//}


//将字符串连续重复字符去掉
//int main()
//{
//	int tmp = 0;
//	int rem_tmp = -1;
//	char a[1001] = {0};
//	int i = 0;
//	while ((tmp = getchar()) != '\n')//学校oj超时？？？
//	{
//		if (tmp != rem_tmp)
//		{
//			a[i] = tmp;
//			i++;
//			rem_tmp = tmp;
//		}
//	}
//	printf("%s\n", a);
//	return 0;
//}


//宏参数的副作用 测试
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int max = MAX(++a, ++b);//输出7
//	//int max = MAX(a++, b++);//输出6
//	printf("%d\n", max);
//	return 0;
//}
