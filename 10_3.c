#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//测试 整型数组中可以放整型变量
//int main()
//{
//	int a = 10;
//	int arr[3] = { 1,2,a };
//	printf("%d\n", arr[2]);
//	return 0;
//}


//函数指针数组的使用
//写一个计算器 实现整数的加、减、乘、除
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*****1.add        2.sub*****\n");
//	printf("*****3.mul        4.div*****\n");
//	printf("*****0.exit          *******\n");
//	printf("****************************\n");
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个整数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个整数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个整数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个整数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//使用函数指针数组 简化代码
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//函数指针数组 - 转移表
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个整数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}


//指向函数指针数组的指针
//int arr[4];
//int(*p)[4];
//类比
//int(*p[4])(int,int);
//int(*(*p)[4])(int,int);


//测试qsort排序结构体数据 - 分别按名字和年龄排序
#include<stdlib.h>
#include<string.h>

int cmp_int(const void* x, const void* y)
{
	return (*(int*)x - *(int*)y);
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test1()
{
	int arr[] = { 3,1,2,4,6,5,7,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int compare_str_by_name(const void* x, const void* y)
{
	return strcmp(((struct Stu*)x)->name, ((struct Stu*)y)->name);
}

int compare_str_by_age(const void* x, const void* y)
{
	return ((struct Stu*)x)->age - ((struct Stu*)y)->age;//想降序改变顺序就行
}

void test2()
{
	//排序s这个数组里边的数据
	struct Stu s[] = { {"zhang",20},{"li",55},{"wang",40} };//结构体数组
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), compare_str_by_name);
	                           //提供比较方法
	qsort(s, sz, sizeof(s[0]), compare_str_by_age);
	
	//关于结构体数组的测试
	//测试 数组名是首元素的地址(步长为1个元素1个结构体大小)
	//printf("%x\n", s);//数组名 - 地址
	//printf("%x\n", &s[0]);//地址
	//printf("%x\n", s+1);//差24
	
	//测试 s[0]是首元素，相当于*(s+0)，而非首元素的地址
	//printf("%d\n", s[0]->age);//err
	//printf("%d\n", (&s[0])->age);//ok
	//printf("%d\n", s[0].age);//ok

	//测试 s[0].name是字符数组首元素的地址
	//printf("%c\n", *s[0].name);//打印z
	//printf("%c\n", *(s[0].name));//打印h
	//printf("%p\n", s[0].name);
	//printf("%p\n", s[0].name+1);//相差1

	//strcmp测试
	//char arr1[] = "abc";
	//char arr2[] = "adc";
	//printf("%d\n",strcmp(arr1, arr2));//输出-1 lower

	//结构体类型指针解引用测试
	//struct Stu a = { "wang",20 };
	//struct Stu * p = &a;
	//printf("%d\n",(*p).age);
}


void Swap(char*buf1, char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//用冒泡排序思想实现qsort函数
void bubble_sort(void* base, int sz, int width,int(*cmp)(const void*, const void*))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{   //提取比较模块，封装函数来比较
			if (cmp((char*)base + j * width, ((char*)base) + (j+1) * width) > 0)
			{ 
				//交换
				Swap((char*)base + j * width, ((char*)base) + (j + 1) * width, width);
			}
		}
	}
}

void test3()
{
	int arr[] = { 3,1,2,4,6,5,7,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

void test4()
{
	struct Stu s[] = { {"zhang",20},{"li",55},{"wang",40} };//结构体数组
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), compare_str_by_age);
	bubble_sort(s, sz, sizeof(s[0]), compare_str_by_name);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}