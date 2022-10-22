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
