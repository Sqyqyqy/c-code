
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
