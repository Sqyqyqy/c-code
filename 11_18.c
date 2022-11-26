
//B 重要
//请你编写函数，按顺序输出 0~2^n - 1 的二进制表示，并且全部按长度 n 输出，不足 n 位的补前导零
//输入一个正整数 n，1 <= n <= 15
//输出 2^n 行，每行一个 n 位二进制数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = pow(2, n) - 1;
//	int i = 0;
//	for (i = 0; i <= a; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d", (i >> (n - 1 - j)) & 1);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//C 溢出问题
//编写一个函数，计算 n 的双阶乘，答案对 109+7 取余
//正整数 n 的双阶乘 n!! 表示不超过 n 且与 n 有相同奇偶性的所有正整数乘积
//如 7!! = 7 * 5 * 3 * 1 = 105
//1 <= n <= 1000
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	if (n % 2 == 0)
//		i = 2;
//	else
//		i = 1;
//	long long ret = 1;
//	while (i <= n)
//	{
//		ret *= i;
//		i += 2;
//		if (ret >= 1000000007)
//		{
//			ret = ret % 1000000007;
//		}
//	}
//	printf("%lld", ret);
//
//	return 0;
//}


//E
//写一个函数, 求两个整数的最小公倍数
//输入两个整数 a, b
//1 <= a, b <= 10^9
#include<stdio.h>
#include<time.h>
long long com_mul(int a, int b)//超时
{
	long long i = 1;//9223372036854775808
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	//1000000000
	//999999999
	//999999999000000000
	while (1)
	{
		if (a*i%b == 0)
			return i;
		i++;
	}
}
//时间测试
void time_i_from_1_to_999999999()
{
	int i = 1;
	int n = 1;
	//int c = 1;
	for (i = 1; i < 2000000000; i++)
	{
		n++;
		/*if (i == 15)
		{
			int b = 1;
		}*/
	}
}

long long com_mul2(int a, int b)
{
	long long rema = a;
	long long remb = b;
	//long long mul = a * b;//err

	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	int c = a % b;
	while (c)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return rema * remb / b;
	//return mul / b;//err
}

//int main()
//{
//	long long a = 0, b = 0;
//	scanf("%lld %lld", &a, &b);
//
//	//测试时间 下边每行操作都单独测试时间
//	size_t begin = clock();
//	//printf("%lld\n", com_mul(a, b));//3973ms
//	//com_mul(a, b);//3771ms
//	time_i_from_1_to_999999999();//392ms for循环条件设置成i<100000000是39ms，10倍
//								 //(i<999999999)for循环中加if判断语句 i == 15:576ms i*n == 15:553ms，i*n%c == 15:1669ms
//	//printf("%lld\n", com_mul2(a, b));//1ms
//	size_t end = clock();
//	printf("%d\n", end - begin);
//
//	return 0;
//}

