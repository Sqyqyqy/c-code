//测试 观察内存，观察截断
//int main()
//{
//	int b = -128;
//	//10000000000000000000000010000000 -> -128的原码
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 -> -128的补码(FF FF FF 80)
//	char a1 = -128;//80 -> 10000000
//
//	int c = 128;//00 00 00 80
//	char a = 128;//80 -> 10000000 不能再求原码了，规定是-128
//  //发生截断
//  printf("%d",a);//输出-128 我析：规定是-128，其实整型提升以后也就是整型-128的补码，一样的
//
//	return 0;
//}


//练习3
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101100 -> -20补码
//	unsigned int j = 10;
//	//00000000000000000000000000001010 -  10
//	printf("%d\n", i + j);
//	//11111111111111111111111111110110 -  10 和 20的补码 相加
//	//10000000000000000000000000001010 -> 原码 -10
//	return 0;
//}


//练习6
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//255+1
//11111111 - 255
//00000000000000000000000011111111 - 运算要整型提升(无符号数补0)
//00000000000000000000000100000000 - +1
//00000000 - 再放回i-发生截断


//我
//(无符号数0)0-1 -> 0+(-1)
//00000000000000000000000000000000 - 无符号整型0
//10000000000000000000000000000001 -> -1原码
//11111111111111111111111111111111 -> -1补码
//11111111111111111111111111111111 - 算术转换(无符号整型)
//11111111111111111111111111111111 -> 相加


//测试 未解决？？？(int max1 = -2147483648; //报错)
//int main()
//{
//	int max = (-2147483647 - 1);
//	int max1 = -2147483648;//报错:一元负运算符应用于无符号类型，结果仍为无符号类型？？？
//	//-2147483648-2147483647
//	int max2 = 2147483647 + 1;
//
//	//char a = -128;//char类型就不报错
//	return 0;
//}


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


//某人从第0天起开始“三天打鱼两天晒网”，问这个人在第n天时应该是“打鱼”还是“晒网”
//int main()
//{
//	int d = 0;
//	scanf("%d", &d);
//	d = d % 5;
//	if (d <= 2)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}


//编程实现模拟计算器的功能
//int main()
//{
//	int a, b;
//	char c;
//	scanf("%d%c%d", &a, &c, &b);
//	if (c != '+'&&c != '-'&&c != '*'&&c != '/'&&c != '%')
//	{
//		printf("illegal operator");
//	}
//	if (c == '+')
//	{
//		printf("%d+%d=%d",a,b, a + b);
//	}
//	if (c == '-')
//	{
//		printf("%d-%d=%d",a,b,a - b);
//	}
//	if (c == '*')
//	{
//		printf("%d*%d=%d",a,b, a * b);
//	}
//	if (c == '/')
//	{
//		printf("%d/%d=%d",a,b, a / b);
//	}
//	if (c == '%')
//	{
//		printf("%d%c%d=%d",a,c,b, a % b);
//	}
//	return 0;
//}
//测试 打印%:需要输入两个%号才可以
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%%\n");//输出%
//	printf("%d%%%d", a, b);//输出0%0
//	return 0;
//}


//给定一个不多于4位的正整数，要求：求出它是几位数，按逆序打印出各位数字
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int flag = n;
//	int count = 1;
//	while (n = n / 10)
//	{
//		count++;
//	}
//	printf("%d ", count);
//	while (flag)
//	{
//		printf("%d", flag % 10);
//		flag /= 10;
//	}
//	return 0;
//}
//----------------------------------------------------

