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
void m(char arr[][3])
{
	arr[0][0] = 'a';
}

int main()
{
	char arr[1][3] = { 0 };
	m(arr);
	printf("%c\n", arr[0][0]);
	return 0;
}
