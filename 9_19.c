#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//测试
//int main()
//{
//	int a = -10;//a取10，5，-10，-5
//	a >>= 1;
//	return 0;
//}


// !
//int main()
//{
//	int flag = 0;
//	if (!flag)//某个条件为假时想做什么事就可以这样去写 !假变成真 就可以放到if语句判断的部分来写
//	{
//		printf("hehe\n");
//	}
//	//if(flag == 0)或写成
//	return 0;
//}


//& *
//int main()
//{
//	int a = 10;//4 内存里的每个单元都有自己的编号 只要为a开辟了4个字节的空间 这4个字节每个字节都有地址 
//	char c = 0;//1 想知道a的起始地址 只需要写出&a就能拿到a的地址
//	return 0;
//}


//sizeof
//测试 未解决 原因？？？
//int main()
//{
//	int arr1[10];
//	printf("%d\n", sizeof(arr1[10]));//输出4
//	printf("%d\n", arr1[10]);
//
//	char arr2[10];
//	printf("%d\n", sizeof(arr2[10]));//输出1
//	printf("%c\n", arr2[10]);
//
//	return 0;
//}


//==
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "def";
//	if (arr1 == "abc")//这比的不是两个字符串的内容 arr地址跟右边字符串首字符a的地址进行比较 两个地址进行比较的 这没有比较两个字符串的内容
//	{                 //==不能比较两个字符串的内容，实际上比较的是2个字符串的首字符的地址
//		printf("==\n");
//	}
//	if ("abc" == "abc")//未解决？？？
//	{
//		printf("==\n");
//	}
//	if (3 == 3)
//	{
//		printf("==\n");
//	}
//	return 0;
//}


//测试
//struct Book
//{
//	char name[20];
//	int price;
//};
//
//int main()
//{
//	struct Book sb = { "C语言",60 };
//	printf("%p %p %p\n", &sb.name,&sb.price,&sb);//sb.name和sb的地址一样
//	
//	return 0;
//}


//7_29题目3 不允许创建临时变量，交换两个整型的内容
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d b = %d\n", a, b);
//	
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;//有缺陷
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//101 - 5
//011 - 3
//110 - 3 ^ 5
//011 - 3 ^ 5 ^ 5


//7_29题目4 写一个函数返回参数二进制中1的个数
//师2
//int count3(int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m & 1) == 1)
//			count++;
//		m >>= 1;
//	}
//	return count;
//}
//师1
//int count2(int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}

//师3
//思路：
//n=11
//n = n & (n - 1)         (重要)还可用于判断n是不是2的n次方
//1011 - n
//1010 - n-1
//1010 - n
//1001 - n-1
//1000 - n
//0111 - n-1
//0000 - n
//借位 借最右边一个1 借了之后产生0 再按位与就把这位变成0了 （我：看有几个非0高位）
//int count3(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		int look = m - 1;
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//10000000000000000000000000000001 -1 原码
//11111111111111111111111111111111 -1 补码
//11111111111111111111111111111110 m-1
//11111111111111111111111111111110 & -2补码


//11000000000000000000000000000000
//10111111111111111111111111111111
//10000000000000000000000000000000 数了31个1之后 m = -2147483648
//01111111111111111111111111111111 m-1 = 2147483647    //析：-2147483648-1 不管m正负 -1之后十进制变成多少 “在二进制形式-1都要借位"
//00000000000000000000000000000000 &

//测试 int型取值范围测试(重要)                  a直接=-2147483648报错 未解决
//----------------------------------------------------
//int main()
//{
//	//int a = -1;
//    //11111111111111111111111111111111 - -1补码
//	//unsigned int b = a;//b = 4294967295
//	
//	//int a = 2147483647;//a = 2147483647
//	//int b = 2147483648;//b = -2147483648
//	//int c = 2147483649;//c = -2147483647
//
//	int a = 2147483647;//a = 2147483647
//	int b = a + 1;//b = -2147483648
//	int c = b + 1;//c = -2147483647//这一步比较关键
//	int d = c + 1;//d = -2147483646
//	//01111111111111111111111111111111 - 2147483647
//	//10000000000000000000000000000000 - -2147483648
//	//10000000000000000000000000000001 - -2147483648+1 补码 -> 11111111111111111111111111111111 原码
//	//10000000000000000000000000000010 - -2147483647+1 补码 -> 11111111111111111111111111111110 原码
//
//	//int a = -2147483647;
//	//int b = a - 1;//b = -2147483648
//	//int c = a - 2;//c = 2147483647
//	//int d = a - 3;//d = 2147483646
//	//10000000000000000000000000000000 - -2147483648
//	//01111111111111111111111111111111 - -2147483648-1 正数 原码
//	//01111111111111111111111111111110 - 2147483647-1  正数 原码
//
//	return 0;
//}
//经测试，int型：正数最大为2147483647，负数最小为-2147483648；
//               2147483647 + 1 = -2147483648，-2147483648 - 1 = 2147483647；
//----------------------------------------------------

//我
//int count(int a)
//{
//	//>> << & | ^
//	//00000000000000000000000000001111
//	//00000000000000000000000000000001
//	int n = 1;
//	int i = 1;
//	int count = 0;
//	for(n = 1;n <= 32;n++)
//	{
//		if ((i & a) != 0)//查表得 != 的优先级高于 & ？？
//		{
//			count++;
//		}
//		i = i << 1;
//	}//
//	return count;
//}
////11111111111111111111111111111111 - -2147483647
////10000000000000000000000000000001
//int main()
//{
//	//int a = -2147483648;//报错 未解决？？？还有最小值为什么是这个
//	int a;
//	scanf("%d", &a);
//	int ret = count3(a);
//	printf("%d\n", ret);
//	return 0;
//}

//测试
//int main()
//{
//	int i;// = -2147483648;
//	scanf("%d", &i);//scanf可以 直接赋值不行？？？
//	printf("%d\n", i);
//	return 0;
//}