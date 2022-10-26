//学校c语言作业
//------------------------------------------------------
//从键盘上输入x的值，按函数计算y的值
//int main()
//{ 
//	int x = 0;
//	scanf("%d", &x);
//	if (x < -1)
//		printf("%d", 1);
//	else if (x >= -1 && x < 100)
//		printf("%d", 3 * x*x - 4 * x + 5);
//	else
//	{
//		printf("%d", 2*x - 3);
//	}
//	return 0;
//}


//由键盘输入三个整数，输出其中最大的数
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d", a);
//	return 0;
//}


//要求输人某人某月收入, 输出缴税后实际收人
//int main()
//{
//	int sal = 0;
//	scanf("%d", &sal);
//	if (sal <= 1500)
//		printf("%d", sal);
//	else if (sal > 1500 && sal <= 4500)
//	{
//		int f = sal - 0.1*(sal - 1500);
//		printf("%d", f);
//	}
//	else if (sal > 4500 && sal <= 9000)
//	{
//		double f = sal - 0.2*(sal - 1500);
//		printf("%d", f);
//	}
//	else if (sal > 9000 && sal <= 15000)
//	{
//		double f = sal - 0.25*(sal - 1500);
//		printf("%d", f);
//	}
//
//	else
//	{
//		int f = sal - 0.3*(sal - 1500);
//		printf("%d", f);
//	}
//	return 0;
//}

//测试 未解决？？？ 问题描述:double型整型打印，和double先放到整型里再整型打印，输出结果不一样
//int main()
//{
//	//float f1 = 10000 - 0.25*(10000 - 1500);//float型以整型打印，输出为0???
//	////45 f6 18 00
//	////0 10001011 11101100001100000000000 - 内存中存放的二进制序列   (-1)^0 * 1.111011000011 * 2^12 = 1111011000011 即十进制7875
//	////以整型打印应该要把内存里边这个二进制序列当成整数的补码
//	////不对？？？网上查是输出失败了
//	//printf("%d\n", f1);
//
//	//float f2 = 10000 - 0.25*(10000 - 1500);//float型存到int里再打印，输出又正常了？？？
//	////0 10001011 11101100001100000000000
//	////1173755904
//	//int f3 = f2;//为什么不是1173755904？？？
//	//printf("%d\n", f3);
//
//	//double a = 0x11223344;
//	//printf("%d", a);//输出非0，不知道为什么
//	return 0;
//}


//输人年月日, 输出它是这一年的第几天
//int main()
//{
//	int y, m, d;
//	scanf("%d-%d-%d", &y, &m, &d);
//	int sum = 0;
//	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (m-1)
//	{
//		int day = a[m];
//		if (((y % 40 && y % 100 != 0) || (y % 4000))&&(m==2))
//		{
//			day += 1;
//		}
//		sum += day;
//		m--;
//	}
//	sum += d;
//	printf("%d", sum);
//	return 0;
//}


//输入四个数，按从大到小的顺序输出
//int main()
//{
//	int a, b, c, d;
//	int arr[4] = { 0 };
//	scanf("%d %d %d %d",&arr[0],&arr[1], &arr[2], &arr[3]);
//	int j = 0;
//	int i = 2;
//	int tmp = 0;
//	for (i = 2; i >= 0; i--)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void main()//未解决但不重要（这种比较方法）
//{
//	int a, b, c, d, t;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a < b) 
//	{
//		t = a; a = b; b = t; 
//	}
//	if (c < d) 
//	{ 
//		t = c; c = d; d = t; 
//	}
//	if (a < c) 
//	{
//		t = a; a = c; c = t; 
//	}
//	if (b < d) 
//	{ 
//		t = b; b = d; d = t; 
//	}
//	if (b < c) 
//	{
//		t = b; b = c; c = t; 
//	}
//	printf("%d %d %d %d", a, b, c, d);
//}
