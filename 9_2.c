//7_30题目7 序列中删除指定数字
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (del != arr[i])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//“未被删除的数字前后位置没有发生改变，所以排序这种方式是不太合适的”？？？

//真的要删除这个元素我们该怎么去做
//我
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//		{
//			if (i == n - 1)
//			{
//				count++;
//			}
//			else
//			{
//				int j = i;
//				for (j; j < n - 1; j++)//1 2 3 4 5 5
//				{
//					arr[j] = arr[j + 1];
//				}
//				count++;
//			}
//		}
//	}
//	for(i = 0;i < n - count;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//a:双下标的方式一个去遍历一个去存储


////7_30题目8 n和m的最大公约数与最小公倍数之和 (long long类型的使用)
//int main()
//{
//	long long m, n;
//	scanf("%lld %lld", &m, &n);
//	long long mul = m * n;
//	if (n > m)
//	{
//		int tmp = n;
//		n = m;
//		m = tmp;
//	}//m / n = 
//	while (m % n)
//	{
//		int y = m % n;
//		m = n;
//		n = y;
//	}
//	////a：改进
//	//int y = 0;
//	//while (y = m % n)
//	//{
//	//	m = n;
//	//	n = y;
//	//}
//	int com_div = n;//最大公约数
//	long long com_mul = mul / com_div;//最小公倍数:公式法,两个数的乘积等于这两个数的最大公约数与最小公倍数的积
//	printf("%lld\n", com_div + com_mul);
//	return 0;
//}

//测试
//int main()
//{
//	long long m, n;
//	scanf("%lld %lld", &m, &n);//"%d %d"会有问题 为什么？？
//	long long c = m * n;
//	return 0;
//}


//7_30题目9 走n阶台阶，每次可以选择走一阶或者走两阶，有多少种走法
//void run(int n,int* count)
//{
//	if (n - 2 >= 0)
//	{
//		run(n - 2,count);
//	}
//	if (n - 1 >= 0)
//	{
//		run(n - 1,count);
//	}
//	if (n == 0)
//		(*count)++;
//}
//
////A
//int walk(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return walk(n - 1) + walk(n - 2);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	run(n,&count);
//	printf("%d\n", count);
//	return 0;
//}
//青蛙跳台问题变型未解决？？？


//测试 未解决？？？
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i);//a = 6
////	int b = (i++) + (i++);//b = 2
//	//int c = (i++) + (i++) + (i++);//c = 3
//	//int d = (++i) + (++i) + (++i);//这是问题代码
//	return 0;
//}//++在前是先自加再运算，在后是先(按1)运算再自加 通过汇编也可以看出
// //  (加成3放到i里再运算)   (运算出2放到b里再自加) 


//半径为5的圆的周长和面积
//#include<stdio.h>
//int a(int i)
//{
//	if (i % 10 >= 5)
//	{
//		i = i / 10 + 1;
//	}
//	else
//	{
//		i = i / 10;
//	}
//	return i;
//}
//
//int main()
//{
//	float c = 3.1415 * 2 * 5;
//	float s = 3.1415 * 5 * 5;
//	
//	int i = c * 1000;
//	int c_1 = a(i);
//	float c_2 = c_1 * 1.0 / 100;
//	float c_3 = c_1 / 100 * 1.0;//易错
//	
//	int j = s * 1000;
//	int s_1 = a(j);
//	float s_2 = s_1 * 1.0 / 100;
//	
//	printf("%.2f %.2f\n", c_2, s_2);
//	return 0;
//}


//解二元一次方程
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	float d = b * b - 4 * a *c;
//	float g = -b - sqrt(d);
//	float h = g / (2 * a);
//	float x1 = (-b - sqrt(b * b - 4 * a *c)) / (2 * a);//2*a要括起来
//	double x2 = (-b + sqrt(d)) / (2 * a);
//	if (x1 > x2)
//	{
//		printf("%.2f %.2f", x2, x1);
//	}
//	else
//		printf("%.2f %.2f", x1, x2);
//		return 0;
//}


//华氏温度转换
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	float b = 5 *(a - 32)/9.0;
//	printf("%.2f", b);
//	return 0;
//}


//使用不带随机种子的随机函数求出任意两个一百以内（包含一百）的正整数，这两个正整数之和，输出形式为a+b=c(例如28+19=47)。
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = rand() % 100 + 1;
//	int b = rand() % 100 + 1;
//	printf("%d+%d=%d\n", a, b, a + b);
//	return 0;
//}
