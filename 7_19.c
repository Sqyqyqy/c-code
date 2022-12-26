#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

///////写代码将三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


///////写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}


///////给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = m%n;
//	scanf("%d%d", &m, &n);
//	while (r != 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}
//师 改进
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int i = 0;
//	while (i = m % n)
//	{
//		//r = m%n;
//		m = n;
//		n = i;
//	}
//	printf("%d\n", n);
//	return 0;
//}


///////打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))//||或者
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

int is_leap(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	printf("请输入要判断的年份>:");
	scanf("%d", &year);
	int ret = is_leap(year);
	if (ret == 1)
		printf("是闰年\n");
	else
		printf("不是闰年\n");
	return 0;
}


///////写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int r = 0;
//		for (r = 2; r <= i/2; r++)//r<i/2后面if(r==i/2)也行
//		{
//			if (i%r == 0)
//				break;
//		}
//		//break可以跳到这来
//		if (r == i / 2 + 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}
//师
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//13 2-12
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//有两种情况代码会执行走到这来，第一种情况就是break跳出来，第二种情况就是这个循环已经不能再循环了，这个条件不满足了
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//优化
#include<math.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//13 2-12
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//当我这写成j<i的时候呢 那j最大是不是其实就是i-1了
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//有两种情况代码会执行走到这来，第一种情况就是break跳出来，第二种情况就是这个循环已经不能再循环了，这个条件不满足了
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//优化
//偶数不可能是素数 101每次让i+=2，把所有的偶数直接跳过去 在奇数里面找素数
//for(i=101;i<=200;i+=2)

//<素数求解的n种境界>


///////1到100的所有整数中出现多少个数字9 (易错)
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 9 == 10)//(重点)前面的if如果匹配 else if没机会
//		{               //对于99来说这两个if都要执行
//			count++;
//		}
//	}
//
//	printf("count = %d\n", count);
//	return 0;
//}

//未解决的问题 尝试用字符串去解决
//int main()
//{
//	int arr[] = { '1','2','3',0};
//	printf("%s\n", arr);
//	return 0;
//}
