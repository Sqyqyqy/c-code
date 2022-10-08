#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//数组中元素的地址之间的关系（测试）
//int main()
//{
//	char arr[] = "abc";
//	char* a = &arr[0];//这是谁的地址
//	char* b = &arr[1];
//	char* c = &arr[2];
//	char* i = arr;
//	char d = *(i + 1);
//	printf("%p %p %p %p %c\n", a,b,c,i,d);
//	return 0;
//}//输出 a和i的值不一样 a不是首元素的地址？？

//编写函数，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//（重要）
//	}
//	return count;
//
//	//自写
//	/*int i = 0;
//	while (str[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;*/
//}

//编写函数不允许创建临时变量，求字符串的长度

//递归方法

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//	}
//	else
//		return 0;
//	return my_strlen(str) + 1;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//	return 0;
//}


//求n的阶乘

//int fac(int n)
//{
//	if (n != 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 3;
//	int ans = fac(n);
//	printf("%d\n", ans);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}


//求n的阶乘
//int Fac1(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac1(n - 1);
//	}
//
//}
//也可以用非递归的方式来解决
//非递归的方式叫迭代 循环是迭代的一种 表示一件事情反复的做
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//求第n个斐波那契数

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ..
//

//求斐波那契数是不适合使用递归求解的--非递归

//int count = 0;//全局变量
//
//int Fib(int n)
//{
//	if (n == 3)//计算一下第三个斐波那契数被计算了多少次
//		count++;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}

//刚刚其实是一种倒着算 现在如果我不用递归的方式去做的话 如果倒着往回算每次都要知道前两个每次都要前两个 有重复计算
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	int i = 3;
//	int a = 1;
//	int b = 1;
//	int ret = 0;
//	while (i <= n)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//用循环去解决效率更高

//有公式很容易用递归的方式写出来 如果你觉得递归写起来非常简单 那就用递归去写 但写出来之后我们发现他明显是有一些缺陷的 比如说他的效率很低 那个这时候递归就不适合来解他 就应该改成非递归的方式
//如果写出来没明显问题那就用递归 如果他有问题那这地方不用递归想其他办法来解决

//要不就是他直接有公式了 你靠着公式就很容易想到递归 其次的话就是这种问题是很容易用递归的方式去想的
//怎么想到用递归解决问题呢 就是能不能用大事化小的思路来思考这个问题 这是递归的一个思考方式
//递归不行就用迭代的方式来解决


////汉诺塔问题
//
//void Han(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		printf("%c    %c\n",a,c);
//	}
//	else
//	{
//		Han(n - 1, a, c, b);
//		printf("%c    %c\n",a,c);
//		Han(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 4;
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	Han(n,a,b,c);
//	return 0;
//}


//青蛙跳台问题
//解法一：斐波那契数列
//int jup(int i)
//{
//	if (i <= 2)
//	{
//		return i;
//	}
//	else
//	{
//		return jup(i - 1) + jup(i - 2);
//	}
//}
//
//int main()
//{
//	int n = 5;
//	int ret = jup(n);
//	printf("%d\n", ret);
//	return 0;
//}

//采用列举的思考角度？？（重做） 也是递归方式


//数组传参
//本质上void test(int* brr)
//void test(int brr[])
//{
//	int a = 10;
//	int b = 20;
//	brr[0] = a;
//	brr[1] = b;
//}
////brr是首元素的地址 brr[1]其实是通过这个地址找到这个数组里面下标为1的元素 我们把他放进去 
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int arr[2] = { 0 };
//	test(arr);
//	return 0;
//}


//7_24题目7
//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("输入求该数阶乘:>");
//	scanf("%d", &n);
//	int ret1 = Fac1(n);
//	printf("ret1 = %d\n", ret1);
//	int ret2 = Fac2(n);
//	printf("ret2 = %d\n", ret2);
//	return 0;
//}


//7_24题目8
//void print(int n)
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d ",n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//
//void m(char arr[][3])
//{
//	arr[0][0] = 'a';
//}
//
//int main()
//{
//	char arr[1][3] = { 0 };
//	m(arr);
//	printf("%c\n", arr[0][0]);
//	return 0;
//}