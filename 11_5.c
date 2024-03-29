//统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数
//int count_bit_1(int n)
//{
//	//10
//	//1010
//	//0001
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((1 & n) == 1)//== 优先级大于 &
//			count++;
//		n = n >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_bit_1(n);
//	printf("二进制中 1 的个数:%d\n", ret);
//
//	return 0;
//}
//优点：用位操作代替取模和除法运算，效率稍微比较高
//缺点：不论是什么数据，循环都要执行32次

//方法二
//思路：采用相邻的两个数据进行按位与运算（重要）我：n减1后按位与n可以消除n二进制最低位的1（最低位的1变成0）
//1010 
//1001 （1010 - 1）
//1000 （1010）&（1010 - 1）

//0111 （1000 - 1）
//0000 （1000）&（1000 - 1）
int count_bit_1(int n)
{
	int count = 0;
	while (n)
	{
		n = (n - 1)&n;
		count++;
	}
	return count;
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_bit_1(n);
//	printf("二进制中 1 的个数:%d\n", ret);
//
//	return 0;
//}
//负数也正确（对最后的符号位也可以做该方法的处理）
//11111111111111111111111111111111
//11111111111111111111111111111110 
//11111111111111111111111111111100
//11111111111111111111111111111000
//..
//10000000000000000000000000000000
//00000000000000000000000000000000


//求两个数二进制中不同位的个数（和上题有关）
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
//1010 10
//0100 4
//1110 ^
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("不同位的个数:%d\n",count_bit_1(a^b));
//	return 0;
//}


//打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void Print_bit(int n)
//{
//	int i = 0;
//	for (i = 31; i >= 0; i--)//打印偶（奇）数位时，奇（偶）数位按0处理
//	{
//		if (((n >> i) & 1) == 1)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取所有偶数位
//	//00000000000000000000000000001010
//	//1010 1010 1010 1010 1010 1010 1010 1010 &该数
//	//a    a    a    a    a    a    a    a    十六进制0xaaaaaaaa
//	//获取所有奇数位
//	//00000000000000000000000000001010
//	//0101 0101 0101 0101 0101 0101 0101 0101
//	//5    5    5    5    5    5    5    5    十六进制0x55555555
//
//	Print_bit(n & 0xaaaaaaaa);//先把偶数位都拿出来再打印
//	Print_bit(n & 0x55555555);
//
//	return 0;
//}
//方法二
//也可以直接打印
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 31; i > 0; i -= 2)//打印偶数位时，奇数位不打印
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)//打印奇数位时，偶数位不打印
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}


//十进制转六进制
//int Change_D_to_H(int n)
//{
//	if(n/6 == 0)
//		printf("%d", n % 6);
//	else
//	{
//		Change_D_to_H(n / 6);
//		printf("%d", n % 6);
//	}
//}
//
//int main()
//{
//	//13 转二进制
//	//6..1
//	//3..0
//	//1..1
//	//0..1
//	//13 转六进制
//	//2..1
//	//0..2
//	int n = 0;
//	scanf("%d", &n);
//
//	Change_D_to_H(n);
//	return 0;
//}
//方法二：非递归，先存到数组中然后倒序打印


//小乐乐走台阶
//走n阶台阶,每次可以选择走一阶或者走两阶，那么他一共有多少种走法
//和斐波那契数列相似 可以递归也可非递归，当n较大时用非递归
//1 2 3 4 5 台阶数
//1 2 3 5 8 方法数


//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = n;
//	int bottle = n;
//	while (bottle > 1)
//	{
//		sum = sum + bottle / 2;
//		bottle = bottle / 2 + bottle % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
