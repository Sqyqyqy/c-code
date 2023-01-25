#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//观察
//int main()
//{
//	int a = 15;
//	int *pa = &a;
//	return 0;
//}

//w测验
//int main()
//{
//	//int* p;
//	//*p = 20;
//	//printf("%d\n", *p);//报错 使用了未初始化的局部变量p
//
//	int arr[3] = { 0 };
//	*(arr + 3) = 30;
//	printf("%d\n", *(arr + 3));//提示调试错误 围绕变量arr的堆栈已损坏
//	return 0;
//}


//w 测试
int main()
{
	//double arr1[5] = { 0 };
	//arr1[6] = 10;//我:指针偏移这么多 解引用 权限是(可访问到)8个字节
	//printf("%lf", arr1[6]);//我:arr是double类型的指针 arr1[6]相当于指针偏移6个double型 指针偏移然后解引用 访问到8个字节 打印应该也是8个字节？？
	
	//int a = 0x11223344;//16进制1位相当于4位二进制 两位相当于8位相当于一个字节 8位16进制相当于四个字节 所以整型正好能放下
	//int* pa = &a;
	//char* pc = &a;
	
  //测试3
	int arr2[5] = { 300,384,255,5,6 };
	char* p = (char*)arr2;
	char* p1 = (char*)(arr2 + 1);
	char* p2 = (char*)(arr2 + 2);
	printf("%d %d %d", *p,*p1,*p2);
	return 0;
}
//测试3:
//300的16进制:0000012c,内存中:2c 01 00 00,short型指针p只能访问一个字节，打印2c(十进制位44)
//256-383打印是按上面规律来的
//但384(00000180)，80(十进制128)，打印出来却是-128,未解决
//255(000000ff),ff(十进制255)，打印出来却是-1，未解决

//和测试3类似
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}


//w测试
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	printf("%d\n",*(arr + 1));
//	printf("%d\n", *(&arr + 1));
//	return 0;
//}


//数组元素个数
//1.计数器的方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str /*!= '\0'*/)//'\0'的ASCII码值为0
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.递归的方法
//
////3.指针-指针
//int my_strlen3(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen3(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//数组的指针访问
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%d ", *p++);
//
//		//printf("%d ", *(p + i));
//
//		/*printf("%d ", *p);
//		p++;*/
//	}
//	return 0;
//}


//用一维数组模拟一个二维数组（重要）
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//	int* arr[] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//刷题2 判断是不是字母
#include <stdio.h>
#include<string.h>

//int main() {
//	//int a;//这个地方用整型接收getchar是最合适的
//	//while ((a = getchar()) != EOF)
//	//{
//	//	if ((a >= 65 && a <= 90) || (a >= 'a' && a <= 'z'))
//	//		printf("%c is an alphabet.\n", a);
//	//	else if(a != 10)//1.回车应该也会被获得 我记得回车既有输入完毕的指令的意思 也是一个字符 会被获取；并且如果Ctrl+z前面有未被获取的字符 就不会停止（下一题可以验证）
//	//		printf("%c is not an alphabet.\n", a);
//	//	//getchar();//2.a:可以这样处理缓冲区中多余的\n
//	//}
//
//	//scanf也可以读数据
//	char a = 0;
//	while (scanf("%c", &a) == 1)//scanf以%c的形式读的时候,在缓冲区里面看见'\n'也会直接读走
//	{     //3.这道题输入格式固定，也可以写成scanf("%c\n",&a)
//		if ((a >= 65 && a <= 90) || (a >= 'a' && a <= 'z'))
//			printf("%c is an alphabet.\n", a);
//		else
//			printf("%c is not an alphabet.\n", a);
//		getchar();//这里依然需要清理缓冲区
//	}
//	return 0;
//}

//测试 未解决 如何跳出循环
//int main()
//{
//	int a;
//	int count = 1;
//	while (scanf("%d", &a) != EOF)
//	{
//		printf("%d\n",count++);
//	}
//
//	//char a;
//	//int count = 1;
//	//while (scanf("%c", &a) != EOF)
//	//{
//	//	printf("%d\n", count++);
//	//}
//	return 0;
//}

//测试 scanf以%c的形式读的时候，下次过来会把\n读走，但以%d的形式读就不会
//int main()
//{
//	//char a = 0;
//	//printf("%d\n", scanf("%c", &a));
//	//char b = 0;
//	//printf("%d\n", scanf("%c", &b));
//
//	//对比
//	char a = 0;
//	printf("%d\n", scanf("%c", &a));
//	int b = 0;
//	printf("%d\n", scanf("%d", &b));
//	return 0;
//}
