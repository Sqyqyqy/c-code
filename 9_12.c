#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//测试 字符串打印，printf函数参数是arr+i时的打印情况
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", &arr[1]);
//	return 0;
//}


//将一句话的单词进行倒置，标点不倒置。比如 "I like beijing."，经过处理后变为："beijing. like I"。字符串长度不超过100
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[101] = { 0 };//保证放个\0
//	gets(arr);
//	int sz = strlen(arr);
//	int i = 0;
//	int flag = sz - 1;
//	//"ab cd e." 8
//	for (i = 0; i <= sz - 1; i++)
//	{
//		int j = 0;
//		if (arr[sz - 1 - i] == ' ')//空格位置
//		{
//			while (sz - i + j <= flag)
//			{
//				printf("%c", arr[sz - i + j]);
//				j++;
//			}
//			printf(" ");
//			flag = sz - 2 - i;
//		}
//		if (i == sz - 1)
//		{
//			while (j <= flag)
//			{
//				printf("%c", arr[j]);
//				j++;
//			}
//		}
//
//	}
//}
//a:逆序每个单词，完了之后再逆序整个字符串(没敲)

//别人写的
//void fun()
//{
//	char arr[100];
//	if (scanf("%s", arr) != EOF)
//	{
//		fun();
//		printf("%s ", arr);
//	}
//}
//
//int main()
//{
//	fun();
//	return 0;
//}

//测试
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	printf("%s", arr);
//
//	scanf("%s", arr);
//	printf("%s", arr);
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int a = 20;
//	int change = 0;
//	int count = 0;
//	while (a)
//	{
//		a--;
//		change++;
//		count++;
//		if (change == 2)
//		{
//			count++;
//			change = 0;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//变种水仙花数 求出5位数中的所有 Lily Number(把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number)
//int main() 
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++) {
//		int sum = 0;
//		//14615
//		int a = 10000;
//		while (a >= 10) {
//			sum += (i / a) * (i % a);
//			a /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//判断当前机器的字节序
//封装成一个函数
//返回1表示小端，返回0表示大端
//int check_system()
//{
//	int a = 1;
//	return *(char*)&a;//改进2
//}
//
//int main()
//{
//	int a = 0x11223344;//int a = 1;更简单 改进2:判断部分就不用比较了
//	char* p = (char*)&a;
//	
//	if (*p == 0x44)//改进1:if(*(char*)&a == 0x44)
//	{
//		printf("当前机器是小端字节序存储\n");
//	}
//	else if(*p == 0x11)
//	{
//		printf("当前机器是大端字节序存储\n");
//	}
//	
//	//测试
//	//printf("%d", *p);//输出68
//	return 0;
//}


//题目
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//10000000000000000000000000000001
//11111111111111111111111111111111 - 补码
//截断
//111111111
//11111111111111111111111111111111 - 整型提升(补码)
//11111111111111111111111111111110 
//10000000000000000000000000000001 - 打印时 原码
//测试
//int main()
//{
//	char a = 127;
//	a += 1;//-128
//	
//	return 0;
//}
