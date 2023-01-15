//7_29题目5 两个int(32位)整数m和n的二进制表达中,有多少个位(bit)不同
//int count(int a, int b)
//{
//	int i = 1;
//	int n = 1;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if ((n & a) != (n & b))//有必要加括号(优先级)
//		{
//			count++;
//		}
//		n = n << 1;
//	}
//	return count;
//}

//a
//int count1(int m, int n)
//{
//	//异或运算的特点是：相同为0，相异为1
//	//
//	int ret = m ^ n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a,&b);
//	int ret = count(a, b);
//	printf("%d和%d的二进制表达中，有%d个位不同\n", a,b,ret);
//	return 0;
//}
//10000000000000000000000000000000
//00000000000000000000000000001111


//7_30题目4
void print(int a)
{
	int i = 1;
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", (a >> i) & 1);
		}
	}
	printf("\n");
	for (i = 0; i < 32; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ", (a >> i) & 1);
		}
	}
	printf("\n");
}

//改进w
void print1(int a)
{
	int i = 1;
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i = i - 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int a;
	scanf("%d", &a);
	print1(a);
	return 0;
}


//7_30题目5 上三角矩阵判定
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10][10];
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				printf("NO\n");
//				return 0;
//			}
//		}
//	}
//	printf("YES\n");
//
//	//a
////	int flag = 1;//假设是上三角矩阵
////	for (i = 0; i < n; i++)
////	{
////		for (j = 0; j < n; j++)
////		{
////			if (arr[i][j] != 0)
////			{
////				flag = 0;
////				goto end;
////			}
////		}
////	}
////end:
////	if (flag == 0)
////		printf("NO\n");
////	else
////		printf("YES\n");
//	//a：多层循环想跳出来的话 goto一次就跳出来了
//	
//	return 0;
//}
//1 2 3 4
//0 3 2 4
//0 0 3 5
//0 0 0 3


//7_30题目6 转六进制
//思路 十进制转二进制
//10
//14

//10
//10/6 = 1...4
//void change(int n)
//{
//	//if (n >= 6)
//	//{
//	//	change(n / 6);
//	//	printf("%d", n % 6);
//	//}
//	//else
//	//{
//	//	printf("%d", n);
//	//}
//	
//	//改进
//	if (n)
//	{
//		change(n / 6);
//		printf("%d", n % 6);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	change(n);
//	return 0;
//}
//a:可以存到数组里倒着打印
