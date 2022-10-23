//8_02题目9 打印菱形
//int main()
//{
//	//char arr1[] = "*************";//13
//	//char arr2[] = "             ";
//	int i = 0;
//	int z = 0;
//	for (i = 1; i <= 6; i++)
//	{
//		for (z = 1; z <= 7 - i; z++)
//		{
//			printf(" ");
//		}
//		for (z = 1; z <= 1 + 2 * (i - 1); z++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("*************\n");
//	for (i = 1; i <= 6; i++)
//	{
//		for (z = 1; z <= i; z++)
//		{
//			printf(" ");
//		}
//		for (z = 1; z <= 13 - 2 * i; z++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印任意大小的菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < line * 2 - 1 - (i + 1) * 2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8_02题目10 求出0～100000之间的所有“水仙花数”并输出 (“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”)
#include<math.h>

#include<limits.h>
//INT_MAX

//int main()
//{
//	int num = 0;
//	for (num = 0; num <= 100000; num++)
//	{
//		int rem = num;
//		int n = 1;//考虑到0，n要初始化为1
//		while (num /= 10)//0一次都不进来，0还是1位数（出错点）
//		{                //num是循环变量，不要改变num（出错点）给个临时变量
//			n++;
//		}
//		int sum = 0;
//		num = rem;//出错点 前面对num的值做改变了 a:给个临时变量
//		while (num)
//		{
//			sum += (int)pow(num % 10, n);
//			num /= 10;
//		}
//		num = rem;//出错点 前面对num的值做改变了
//		if (sum == num)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//8_02题目11 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	int rem_a = a;
//	for (i = 1; i <= 5; i++)
//	{
//		sum += a;
//		a = a * 10 + rem_a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//求前n项之和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += a;
//		a = a * 10 + 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
