#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//匿名结构体类型
//struct
//{
//	char book_name[20];
//	char author[20];
//	int price;
//}sb1;
//
//struct
//{
//	char book_name[20];
//	char author[20];
//	int price;
//}* ps;
////两个匿名结构体，结构体成员完全相同 
//int main()
//{
//	ps = &sb1;//警告：类型不兼容 编译器认为两个结构体类型不同
//	return 0;
//}


//结构体内存观察
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//}sb1;
//
//int main()
//{
//	struct S1 s1 = { 'a',3,'b' };
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}


//结构体内存对齐的规则了解 拿空间换取时间
//设置默认对齐数 测试
//#pragma pack(4)

struct S1
{
	char c1;
	short i;
	char c2;
};

//恢复默认对齐数
//#pragma pack()

//int main()
//{
//	struct S1 s = { 'a',(short)100,'b' };
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", s.i);
//
//	return 0;
//}


//结构体数组内存观察
//typedef struct S
//{
//	char book_name[20];
//	char author[20];
//	int price;
//}S;
//
//int main()
//{
//	S arr[2] = {{"sen","hai",30},{"sas","das",31}};
//	return 0;
//}


//涉及通讯录部分测试

//struct Peoinfo
//{
//	char name[20];
//	int age;
//	char sex[5];//保密+'\0'
//};
//int main()
//{
//	//struct Peoinfo arr[3] = { 0 };
//
//	/*int* p = NULL;
//	*p = 30;*/
//
//	//测试 用字符串初始化的字符指针数组，字符串不能修改（应该是）
//	char* arr[] = { "abc","def" };
//	//*arr[0] = 'b';//这里会引发异常
//	*arr = 100;
//	printf("%d\n", *arr);//可以打印
//	printf("%s\n", *arr);//引发异常
//	return 0;
//}

//放字符数组数组名的指针数组，可以修改
//int main()
//{
//	char s1[3] = "";
//	char s2[3] = "";
//	char s3[3] = "";
//	char* arr[] = { s1,s2,s3 };
//	scanf("%s", arr[0]);
//	printf("%s\n", s1);
//	return 0;
//}

struct S
{
	char arr[10];
};

//测试 结构体的数组成员 放到字符指针数组中 并通过数组修改结构体的该数组成员
//int main()
//{
//	int i = 0;
//	char* arr_arr[3];
//	struct S ss1 = { "abcdef" };
//	arr_arr[i] = ss1.arr;//不熟悉
//	scanf("%s", arr_arr[i]);
//	printf("%s\n",ss1.arr);
//	printf("%s\n", arr_arr[i]);
//
//	return 0;
//}


//将结构体赋值给结构体 测试
//int main()
//{
//	struct S ss1 = { "abc" };
//	struct S ss2 = { "abcdef" };
//	ss1 = ss2;
//	printf("%s\n", ss1.arr);//打印abcdef
//	return 0;
//}

//测试 结构体数组内存观察
//struct Peoinfo
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Peoinfo ss1 = { 0 };
//	struct Peoinfo ss2 = { 0 };
//	struct Peoinfo ss3 = { 0 };
//	struct Peoinfo ss4 = { 0 };
//	struct Peoinfo ss5 = { 0 };
//	struct Peoinfo arr1[] = { ss1,ss2,ss3,ss4,ss5 };//1. 每个结构体大小是32字节 满足结构体内存对齐规则
//	                                                //2. 并且挨着存放
//	return 0;
//}


//测试 scanf读字符串放到字符数组中
//int main()
//{
//	char arr[] = "xxxxxxx";
//	scanf("%s", arr);//会在末尾放'\0'
//	scanf("%c", arr);//修改首字符，不会放'\0'
//	return 0;
//}


//测试 不满足内存对齐规则的结构体？？？
struct Peoinfo
{
	char name[20];
	char sex[5];
	char tele[12];
	int age;
	char addr[30];
};

struct Contact
{
	struct Peoinfo data[100];
	int sz;
};

//int main()
//{
//	struct Contact con = { 0 };
//	scanf("%s", con.data[0].sex);
//	scanf("%s", con.data[0].tele);//内存中sex后面紧挨着tele，scanf输入baomi，本来后面会越界放个'\0',但scanf又给tele放了字符串，所以打印sex时会将tele也打印出来
//	
//	printf("%s\n", con.data[0].sex);
//
//	//printf("%d\n", sizeof(struct Contact));
//
//	return 0;
//}


//关于vs2017默认对齐数的测试
//struct Test
//{
//	int i;
//	double s;
//};
//
//int main()
//{
//	printf("%d\n",sizeof(struct Test));//打印16
//	return 0;
//}


//测试 scanf("%s", arr);//会在末尾放'\0'（如果'\0'放不下，会越界放'\0'）
//int main()
//{
//	struct Peoinfo ss;
//	scanf("%s\n", ss.sex);//输入baomi
//
//	printf("%s\n", ss.sex);//打印baomi
//
//	return 0;
//}

//未解决 ？？？ 为什么不能直接打印？？？（不重要）
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s\n", arr);
//	printf("%s\n", arr);
//	return 0;
//}


//测试 结构体中放结构体时，内部的结构体还满足内存对齐
//struct SS
//{
//	char a;
//	int i;
//	char b;
//};
//
//struct SSS
//{
//	char b;
//	struct SS s;
//	char a;
//};
//int main()
//{
//	//printf("%d\n", sizeof(struct SS));//SS大小为 12
//	printf("%d\n", sizeof(struct SSS));//SSS大小为 20
//
//	//数组中放结构体时，内部的结构体还满足内存对齐
//	//struct SS arr[3] = { 0 };
//	//printf("%d\n", sizeof(arr));//arr大小为 36
//
//	return 0;
//}


////#pragma pack(4)
//struct SS
//{
//	char arr[20];
//};
//struct SSS
//{
//	int i;
//	struct SS arr[3];
//};
////#pragma pack()
//int main()
//{
//
//	struct SSS s = { 0 };
//	printf("%d\n", sizeof(struct SS));//20
//	printf("%d\n", sizeof(struct SSS));//64
//	return 0;
//}
