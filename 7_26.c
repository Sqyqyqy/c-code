#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//7-21题目4
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			sum += 1;
//		}
//		if (i / 10 == 9)
//		{
//			sum += 1;
//		}
//	}
//	printf("%d\n", sum);
//	return 0; 
//}


//7-21题目5
#include<stdlib.h>
#include<time.h>

//void menu()
//{
//	printf("**************************************\n");
//	printf("******     1.play   0.exit      ******\n");
//	printf("**************************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int num = rand()%100 + 1;
//	printf("猜数字游戏开始，请输入你猜的数字:>");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess == num)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (guess > num)
//			printf("猜大了,继续猜:>");
//		else
//			printf("猜小了,继续猜:>");
//	}
//}
//
//int main()
//{
//	int input = 1;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//7-21题目6
//int main()
//{
//	int find = 0;
//	printf("输入要找的数字:>");
//	scanf("%d", &find);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//        int mid = left + (right - left) / 2;//(重要)求中间位置的方法，直接相加除2容易造成溢出
//
//		if (arr[mid] > find)
//			right = mid - 1;
//		else if (arr[mid] < find)
//			left = mid + 1;
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			return 0;
//		}		
//	}
//	printf("找不到\n");
//	return 0;
//}


//7-20题目7
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//7-20题目8
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a,&b, &c);
//
//	if (a < b)
//	{
//		int d = 0;
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		int d = 0;
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		int d = 0;
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//重做


//7-20题目9
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 0;
//		for (a = 2; a <= sqrt(i / 1.0); a++)
//		{
//			if (i%a == 0)
//				break;
//		}
//		if (a > sqrt(i / 1.0))
//			printf("%d ", i);
//	}
//	return 0;
//}


//7-20题目11
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int c = 0;
//		c = a;
//		a = b;
//		b = c;
//	}
//
//	int r = a % b;
//	if (r == 0)
//	{
//		printf("%d\n", b);
//		return 0;
//	}
//
//	//辗转相除法求最大公约数
//	int d = 0;
//	while (r != 0)
//	{
//		d = r;
//		r = b % r;
//		b = d;
//	}
//	printf("%d\n", d);
//	return 0;
//}

//不熟


//7-20题目12
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		int a = 0;
//		for (a = 1; a <= i; a++)
//		{
//			printf("%d*%d=%-2d ", a, i, a*i);
//			if (a == i)
//				printf("\n");
//		}
//	}
//	return 0;
//}
