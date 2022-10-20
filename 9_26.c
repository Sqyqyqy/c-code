#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


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


//8_1刷题2 判断是不是字母
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


//8_1刷题3 字母大小写转换
//用库函数直接可以解决 <ctype.h> isalpha
//#include <stdio.h>
//
//int main()
//{
//	char word;
//	while ((word = getchar()) != EOF)
//	{
//		if ((word >= 65 && word <= 90))
//		{
//			printf("%c\n", word + 32);
//		}
//		else if (word >= 97 && word <= 122)
//		{
//			printf("%c\n", word - 32);
//		}
//	}
//	return 0;
//}

//用库函数 (字符分类和转换函数) 使用库函数效率更高
//int main()
//{
//	char word;
//	while ((word = getchar()) != EOF)
//	{
//		if (isupper(word))
//		{
//			printf("%c\n", tolower(word));
//		}
//		else if (islower(word))
//		{
//			printf("%c\n",toupper(word));
//		}
//		//这里应该不用处理\n了吧
//	}
//	return 0;
//}

//测试
//int main()
//{
//	char a = -1;
//	printf("%d\n", a);//打印-1
//
//	char b = getchar();
//	printf("%d\n", b);//输入ctrl+Z打印-1
//	return 0;
//}