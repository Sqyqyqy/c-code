#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	//double d = 3.14;
//	//double* pd = &d;//32-4   64-8
//	//printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//
//	//int a = 10;//向内存申请了4个字节的空间
//	////printf("%p\n", &a);
//	//int* p = &a;//p是一个变量-指针变量
//	////printf("%p\n", p);
//	//*p = 20;//* - 解引用操作符/间接访问操作符
//	//printf("a = %d\n", a);
//	return 0;
//}
//变量p的类型是int* 理解时应该拆分开来：*的意思是告诉我说p是一个指针变量 int说明p指向的那个对象a的类型是int
//*p *他是一个操作符 他是用来解引用我们指针变量p


/*
//结构体
//复杂对象 -- 用结构体来描述 -- 结构体是我们自己创造出来的一种类型
//
//创建一个结构体类型
struct Book//Book是类型名
{//用大括号把所有关于这个书的属性就把他括起来
	char name[20];//C语言程序设计
	short price;//55
};
//创建的是书的类型

//具体的创造出一本书
int main()
{
	//利用结构体类型-创建一个该类型的结构体变量出来 (创建一个变量怎么创建怎么给他赋值)
	struct Book b1 = { "C语言程序设计",55 };
	//printf("书名:%s\n", b1.name);
	//printf("价格:%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格:%d\n", b1.price);
	
	//struct Book* pb = &b1;//struct Book*其实就是一种指针类型了 这种指针类型定义了一个变量叫pb pb是个指针变量 他呢指向了b1
	//利用pb打印出我的书名和价格
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//.      结构体变量.成员
	//->     结构体指针->成员

	//b1.name = "C++";//error
	strcpy(b1.name, "C++");//strcpy-string copy -字符串拷贝-这是一个库函数-string.h
	printf("%s\n", b1.name);
	//name可不是一个变量，他是一个数组 数组名其实本质上是一个地址啊 所以这个地方如果我真的要给这个name重新给他一个名字的话 我们这得用一个函数 把一个新的字符串拷贝放到name里面去
	//b1.price = 15;//这个price可以改 因为注意这个price叫变量 变量是可以直接进行这样赋值的对不对
	//凡是说这个地方成员是一个字符串的 那他的一个赋值形式啊都得用strcpy啊 
	return 0;
}
*/

int main()
{
	char arr[] = "abc";
	printf("%s\n", arr);
	//arr = "bca";//error
	strcpy(arr, "bac");
	printf("%s\n",arr);
	return 0;
}