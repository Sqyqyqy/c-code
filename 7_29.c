//7-20题目13
//int main()
//{
//	int arr[] = { 1,2,13,14,25,36,17,28,19,10 };
//	int i = 0;
//	int max = 0;
//	max = arr[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大值是%d\n", max);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
		}
	}
	return 0;
}

//7-18题目2
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int time = n / 12 * 4 + 2;
//	printf("%d\n", time);
//	return 0;
//}


//7-18作业3
//int main()
//{
//	int a = printf("Hello world!\n");
//	printf("%d\n", a);
//	return 0;
//}


//7-18题目4
//int main()
//{
//	////int a = 0;     
//	////scanf("%c", &a);
//	//char a = 0;
//	//scanf("%c", &a);
//	//if ((a <= 122 && a >= 97) || (a >= 65 && a <= 90))
//	//	printf("YES\n");
//	//else
//	//	printf("NO\n");
//	
//	//测试(对比) 数据类型的自动转换
//	//char a = 'a';
//	//printf("%d\n", a);//输出97
//	//int a = 'a';
//	//printf("%c\n", a);//输出a
//	//char a = 97;
//	//printf("%c\n", a);//输出a
//	return 0;
//}
//输入字符到a(int)的地址 自动转化成ASCII码值？？


//7-17题目7
//int MAX(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a, &b);
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//7-17题目8
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int answer = (-8 + 22)*a - 10 + c / 2;
//	printf("%d\n", answer);
//	return 0;
//}


//7-17题目9
//int main()
//{
//	int num = 0;
//	do
//	{
//		printf("请输入你的智商:");
//		scanf("%d", &num);
//		if (num >= 140)
//			printf("Genius\n");
//	} while (num);
//	return 0;
//}


//7-17题目10
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     Man\n");
//	return 0;
//}


//7-17题目11
//int main()
//{
//	int M = 0;
//	scanf("%d", &M);
//	if (M % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//7-17题目6
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入被除数和除数:");
//	scanf("%d%d", &a, &b);
//	int quotient = a / b;
//	int rem = a % b;
//
//	printf("%d %d\n", quotient, rem);
//	return 0;
//}


//7-17题目7
//int main()
//{
//	int i = 0;
//	printf("输入一个四位数:");//1234 4321
//	scanf("%d", &i);
//	int a = i%10;
//	int b = i % 100 / 10;
//	int c = i % 1000 / 100;
//	int d = i / 1000;
//	printf("%d%d%d%d\n", a, b, c, d);
//
//	return 0;
//}

//int main()
//{
//	char arr[10];//（注意）如果这里是int arr[10]，在printf的时候用%c不行,用%d也不行？？（重点）
//	scanf("%s", arr);//调试后自理解：放的是字符串(%s)每个单独的是字符不是整形 所以数组里的元素类型应该是char
//	printf("%c %c %c %c\n", arr[3], arr[2], arr[1], arr[0]);
//	return 0;
//}
//更多且更简单的方法重做
//其他方法:将数字以字符串读入


//7-17题目8
//int main()
//{
//	int a, b, c, d, e;
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	float avg = 0;
//	avg = (a + b + c + d + e) / 5;//重点1 （/5.0；avg是浮点数 /5.0：avg变成整数了）
//	printf("%.1f", avg);//重点2 （"%.1f"：保留一位小数）
//	return 0;
//}


//7-17题目9
//int main()
//{
//	int a = 0;
//	int b = 0;
//	do
//	{
//		scanf("%d%d", &a, &b);
//		if (a > b)
//			printf("a>b\n");
//		if (a < b)
//			printf("a<b\n");
//		else
//			printf("a=b\n");
//	} while (a);
//	return 0;
//}

//题目有多组输入数据？？


//7-17题目10
//int main()
//{
//	int second = 0;
//	scanf("%d", &second);
//	int hour = second / 3600;
//	int min = second % 3600 / 60;
//	int sec = second % 3600 % 60;
//	printf("%d %d %d\n", hour, min, sec);
//	return 0;
//}


//----------------------------------------------------//
//题目4
//void Add(int* p)
//{
//	(*p)++;//++的优先级比较高，写成*p++的话，++是作用于p的，不是作用于*p的
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//函数内部想改变函数外部的变量的时候，把地址给传进去
//	printf("num = %d\n", num);// 1
//	Add(&num);
//	printf("num = %d\n", num);// 2
//	Add(&num);
//	printf("num = %d\n", num);// 3
//	return 0;
//}


//链式访问
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n",strlen("abc"));//把一个函数的返回值作为另外一个函数的参数
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	注：printf函数的返回值是打印在屏幕上字符的个数
//  return 0;
//}


//函数的声明和定义

//VS2019 是编译器吗？其实是集成开发环境，缩写是IDE
//编辑器，编译器，链接器，调试器
//链接器会把在工程里面这种.c文件组合在一起

#include "add.h"//包含头文件的动作就是让头文件的内容拷贝过来 相当于这个地方有了函数的声明 （最终在编译器看见的时候这个地方其实进行了函数的声明）
                //其实最终达到的效果还是相当于把这些东西全部都集成到这边来
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//简单说：只有我们把函数的声明放在.h文件里，函数的实现放到源文件里面 这样就可以把我的模块(应该是.c文件)编译成静态库 同时把这个头文件提供给别人 别人就看不到源文件但是能用

//如果没有头文件的情况下 add.c定义的函数7_29.c想使用你需要extern一下


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr, 10);
//	return 0;
//}


//%u无符号的整数
//void print(unsigned int n)//1234
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);//123
//		printf("%d ", n % 10);
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);
//	
//
//	/*int arr[10];
//	int i = 0;
//	while (num)
//	{
//		arr[i] = num % 10;
//		i++;
//		num /= 10;
//	}
//	printf("%d %d %d %d\n", arr[3], arr[2], arr[1], arr[0]);*/
//
//	return 0;
//}


//int main()
//{
//	double d = 12345678.9;
//	float f = d;
//	printf("%f  %lf\n", f, d);
//	return 0;
//}
