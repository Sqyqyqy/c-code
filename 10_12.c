#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//测试
//int main()
//{
//    //*&arr的步长
//	char arr[] = "abcd";
//	printf("%p\n", arr);
//	printf("%p\n", *&arr);
//	printf("%p\n", (*&arr) + 1);//增加1
//
//	//打印字符串规则
//	printf("%s\n", *(&arr));//打印abcd
//	printf("%s\n", arr);//打印abcd
//	printf("%s\n", &arr[0]);//打印abcd
//
//	//sizeof中arr(*&arr)的特殊;他们值一样，甚至步长也一样
//	printf("%d\n", sizeof(arr));//打印5
//	printf("%d\n", sizeof(*&arr));//打印5
//	printf("%d\n", sizeof(&*arr));//打印4
//	printf("%d\n", sizeof(&arr[0]));//打印4
//	printf("%d\n", sizeof(arr+0));//打印4
//
//	return 0;
//}


//测试 越界访问
//int main()
//{
//	//int a = 0;
//	//int* p = &a;
//	////*(p + 1) = 1;//err 不能改
//	//printf("%d\n", *(p + 1));//但好像能看看是多少，但strlen('a')会报异常
//	//printf("%d\n", *(p + 2));
//	//printf("%d\n", *(p + 3));
//
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr + 7));//调试时没有引发异常
//	printf("%d\n", strlen('a'));//即strlen(97)，strlen把97当成地址来访问 调试时引发异常
//	return 0;
//}


//测试
//int main()
//{
//	int* p = "abcdef";
//	printf("%zu\n", sizeof(*p));//打印4
//	return 0;
//}


//数组名和首元素地址的区别 其特殊性的体现(注：值一样)
//int main()
//{
//	//体现1 &数组名
//	int arr[] = { 1,2,3 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr + 1);//比arr大12
//	printf("%p\n", &arr[0]+1);//比arr大4
//
//	//体现2 sizeof(数组名)
//	printf("%d\n", sizeof(arr));//12
//	printf("%d\n", sizeof(&arr[0]));//4
//
//	return 0;
//}

//二维数组测试
//int main()
//{
//	int a[3][4] = { 0 };
//	//printf("%p\n", a);
//	//printf("%p\n", a+1);//a的步长是16，因为a指向第一行的一维数组
//	//printf("%d\n", sizeof(a));//但是sizeof(a)依然是48，毕竟a是二维数组数组名，和a指向什么没关系
//	                          //好比一维数组数组名虽然指向一个元素，但sizeof(数组名)依然表示整个数组                        
//	//体现1 &数组名
//	//printf("%p\n", a);
//	//printf("%p\n", &a + 1);//比a大48
//	//printf("%p\n", &a[0][0]+1);//比a大4
//
//	//体现2 sizeof(数组名)
//	//printf("%d\n", sizeof(a[0]));//数组指针解引用得到数组名 16
//	//printf("%d\n", sizeof(&a[0][0]));//这是首元素的地址 4
//
//	return 0;
//}


//sizeof内部表达式是否计算测试
//int main()
//{
//	short s = 10;
//	int a = 2;
//	printf("%d\n", sizeof(s = a + 5));//返回10
//	printf("%d\n", s);
//	return 0;
//}
//sizeof的处理是在编译期间完成的


//10.指针题 
//1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}


//2
//指针+-整数的问题
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;   //p是一个结构体指针变量
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节(x86环境下)
//int main()
//{
//	p = (struct Test*)0x100000;//不强制类型转换会报警告
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001 (可以把整数当成地址来打印 报警告)
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}
//测试 (可以把整数当成地址来打印)
//int main()
//{
//	int a = 1;
//	printf("%p\n", a+1);//打印2 (可以把整数当成地址来打印)
//	printf("%p\n", &a);
//	return 0;
//}


//3 重要
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);//打印4
//	int *ptr2 = (int *)((int)a + 1);//01 00 00 00 02 00 00 00 打印2000000
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//4
#include <stdio.h>
//int main()
//{
//	//数组的初始化内容有逗号表达式，实际上数组初始化的是1，3，5
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//(0,1)是逗号表达式
//	//int a[3][2] = {{0,1}, {2,3}, {4,5}};
//	 
//	int *p;
//	p = a[0];//*(a+0)
//	printf("%d", p[0]);//打印1
//	return 0;
//}

//测试 (arr[0])[1]
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	printf("%d\n", (&arr[0])[1]);
//	return 0;
//}


//测试 二维数组aa,int* ptr2 = *(aa + 1);不需要强制类型转换
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = *(aa + 1);//这里不用强制类型转换 没警告
//	return 0;             //对数组指针解引用得到该指针指向数组的数组名，类型本来就是int*
//}


//测试
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int(*p)[3] = &arr;
//	printf("%d\n",sizeof(*p));//12
//	printf("%d\n", sizeof(&arr[0]));//x64:8
//	return 0;
//}


//int main()
//{
//	//int arr[2][3] = { 0 };
//	////1
//	////类比指向一维数组的数组指针
//	////int(*p)[] -> 数组元素的类型是去掉(*p)[]
//	//int((*p)[2][3])[3] = &arr;//此推测不正确
//	////数组元素的类型是去掉(*p)[2][3] 
//	////数组元素的类型是数组，数组这个类型怎么表示呢
//	////定义数组时是int arr[n],去掉变量名，就是变量的类型(int a，去掉a，a的类型是int)
//	////因此，数组这个类型是int [n]
//	////但此推测不正确
//
//	////2 数组指针解引用得到的是数组名
//	int arr[2][3] = { 0 };
//	//printf("%p\n", arr);
//
//	//printf("%p\n", &arr[0][0] + 1);//步长4
//
//	//printf("%p\n", arr + 1);//步长12
//	//printf("%p\n", *(&arr)+1);//步长12
//
//	return 0;
//}


//测试 把数组名放到指针变量中，该指针变量不具有数组名的特殊性
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int* p = arr;
//	printf("%d\n",sizeof(p));//打印4
//	return 0;
//}

//字符指针 题目9
//杨氏矩阵 有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N)
//int main()
//{
//	int list = 0;
//	int find = 0;
//	int row = 0;
//	scanf("%d %d %d",&row,&list,&find);
//	int arr[row][list] = { 0 };
//	int i = 0;
//	int j = 0;
//	for()
//	if (list >= row)
//	{
//		int tmp = row;
//		row = list;
//		list = tmp;
//	}
//	int n = row + (row - 1) - (row - list);
//	if (n >= find)
//		printf("存在\n");
//	else
//		printf("不存在\n");
//	return 0;
//}
