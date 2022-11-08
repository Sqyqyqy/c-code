#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	int a = RED;//无警告
//	enum Color color = 5;//c++会有警告
//	return 0;
//}


//联合体的定义
//union Un
//{
//	char c;
//	int i;
//	double d;
//};

//int main()
//{
//	union Un un;
//	printf("%d\n", sizeof(un));
//	printf("%d\n", sizeof(union Un));//大小是8 联合的大小至少是最大成员的大小
//	return 0;
//}

//联合体大小探究 要满足两个条件
//union Un
//{
//	short arr[7];
//	int i;
//	char a;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));//大小是16
//	return 0;                        //要对齐到最大对齐数的整数倍
//}

//测试 联合体的初始化 对比结构体测试
//union Un
//{
//	int arr[4];
//	int i;
//	char a;
//};
//struct SS
//{
//	int arr[3];
//	int i;
//	char a;
//};
//int main()
//{
//	union Un un1 = { 0 };//可以这样初始化 为全0
//	//un1 = { 0 };//err
//	//union Un un2 = { {1,2,3},4,'a' };//err 不同于结构体 初始值设定项值太多
//	union Un un2 = { {1,2,3} };
//	union Un un2_1 = { 1,2,3 };
//	union Un un2_2 = { 'a' };
//	
//	union Un un3;
//	//un3.arr = //err
//	un3.a = 'a';
//	
//	//类比结构体
//	struct SS s1 = { 0 };
//	struct SS s2 = { {1,2,3},3,'a' };
//	struct SS s2_1 = { 1,2,3 };
//	//struct SS s2_2 = { 'a' };//'a'会被当成成员arr的第一个元素
//	struct SS s2_2 = { .a = 'a' };
//
//	struct SS s3;
//	//s3 = { 0 };//err
//	//s3 = { {1,2,3},3,'a' };//err
//	//s3.arr = //err
//	s3.a = 'a';
//	return 0;
//}


//测试 scanf读取字符串放到字符数组中
//int main()
//{
//	/*char arr[3] = { 0 };
//	scanf("%s", arr);
//	printf("%s\n", arr);*/
//	//输入"abcdef"，scanf会在末尾放'\0'，好像可以打印，但会报异常，因为越界访问修改的空间不属于你
//	//如果越界访问修改的空间属于自己 那是不是不会报异常了
//	//创建字符指针数组好像行不通
//	//创建结构体数组 这样各个数组间的空间就都是自己的了
//	struct Arr
//	{
//		char arr[3];
//	};
//	struct Arr arr[20] = { 0 };
//	scanf("%s", arr[0].arr);
//	printf("%s\n", arr[0].arr);//可以打印且没有警告
//	return 0;
//}


//结构体中放结构体数组
//int main()
//{
//	struct SS
//	{
//		char arr[20];
//	};
//	struct SSS
//	{
//		int i;
//		struct SS arr[3];
//	};
//	struct SSS s = { 0 };
//	printf("%d\n", sizeof(struct SS));// 20
//	printf("%d\n", sizeof(struct SSS));// 64
//
//	return 0;
//}
//#include<assert.h>
//
//int main()
//{
//	assert(0);
//	return 0;
//}


//学校oj题 计算并输出正整数n的各位数字之积（如:n=234时,输出234=2*3*4=24）
//void a(int n,int* ret)
//{
//	if(n)//while
//	{
//		*ret = *ret * (n % 10);
//		a(n / 10,ret);
//		if (n / 10)
//			printf("*%d", n%10);
//		else
//			printf("%d", n%10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d=", n);
//	int ret = 1;
//	a(n,&ret);
//	printf("=%d", ret);
//	return 0;
//}

//web:
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i, j, l, sum = 1;
//	int k = 0;
//	int n = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//	l = n;
//	for (i = 0; n > 0; i++)
//	{
//		a[i] = n % 10;
//		n = n / 10;;
//		k++;
//		//l=n/10;
//	}
//	printf("%d=", l);
//	for (j = (k - 1); j >= 0; j--)
//	{
//		sum *= a[j];
//	}
//	//printf("%d\n",sum);
//	for (j = (k - 1); j >= 0; j--)
//	{
//		if (j != 0)printf("%d*", a[j]);
//		else if (j == 0)printf("%d=%d\n", a[j], sum);
//	}
//
//	return 0;
//}


//循环求斐波那契
//int main()
//{
//	//1 1 2 3 5
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int n1 = 1;
//	int n2 = 1;
//	int sum = 0;
//	if (n == 1 || n == 2)
//	{
//		printf("1");
//	}
//	for (i = 3; i <= n; i++)
//	{
//		sum = n1 + n2;
//		n2 = n1;
//		n1 = sum;
//	}
//	printf("%d", sum);
//	return 0;
//}
