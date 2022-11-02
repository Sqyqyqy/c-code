#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


#include<string.h>
//测试
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen("abcde"));//字符串是一个表达式，他的值是他首字符的地址
//	return 0;
//}


//size_t
//测试 无符号整型运算
//int main()
//{
//	//测试1 无符号整型相减
//	//unsigned int a, b;
//	//a = 6;
//	//b = 10;
//	//printf("%u\n", 0 - b);//4294967286
//	//printf("%u\n", a - b);//4294967292
//	//0110 - 6
//	//1010 - 10
//	//10000000000000000000000000001010 - -10原码
//	//11111111111111111111111111110110 - -10补码
//	//00000000000000000000000000000110 - 6
//	//11111111111111111111111111111100 - a - b 4294967292
//
//	//测试2 无符号整型和整型运算
//	//unsigned int a = 6;
//	//int b = -16;
//	//unsigned int c = a + b;//4294967286
//	//printf("%u\n", c);
//	//00000000000000000000000000000110 - 6
//	//11111111111111111111111111110000 - -16补码
//	//11111111111111111111111111110110 - a + b 4294967286
//
//	//a = 16;
//	//b = -16;
//	//c = a+b;
//	//printf("%u\n", c);//0
//	//00000000000000000000000000010000 - 16
//	//11111111111111111111111111110000 - -16
//	//100000000000000000000000000000000 - 发生截断？？
//	return 0;
//}


//测试 数组名的形参失去数组名的特殊性
//void a(int* p)
//{
//	printf("%d\n", sizeof(p));
//}
//
//int main()
//{
//	int arr[] = { 1,2,3 };
//	a(arr);
//	return 0;
//}


//测试 strcpy需要目标空间足够大
//int main()
//{
//	char arr[3] = { 0 };
//	char arr2[] = "abcdef";
//	strcpy(arr, arr2);//调试观察，越界访问
//	printf("%s\n", arr);
//	return 0;
//}


//源字符串里必须有'\0'，并且会将源字符串中的'\0'拷贝到目标空间
//int main()
//{
//	char arr[10] = "xxxxxxxxxx";
//	const char*  p = "abcdef";
//	strcpy(arr, p);
//	printf("%s\n", arr);//打印abcdef
//	return 0;
//}


//模拟实现strcpy函数
#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);//断言 保证指针有效性
//	char* memory = dest;
//	//while (*(src-1))
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return memory;
//}
//
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "abcdef";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//模拟实现strcat函数
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest != 0)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello \0xxxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//模拟实现strcmp
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1!=0 || *s2!=0)
//	{
//		if (*s1 != *s2)
//		{
//			if (*s1 > *s2)
//				return 1;
//			else if (*s1 < *s2)
//				return -1;
//			else
//				return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return 0;
//}

//返回值大于小于零即可 简化
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 != 0 || *s2 != 0)
	{
		if (*s1 != *s2)
		{
			return *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return 0;
}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("arr1<arr2\n");
//	else if (ret > 0)
//		printf("arr1<arr2\n");
//	else
//		printf("arr1=arr2\n");
//	return 0;
//}


//测试 '\0'对于strcmp函数的重要性
//int main()
//{
//	char arr1[] = { 'a','b','a','z' };
//	char arr2[] = { 'a','b','a'};
//
//	char arr11[] = { 'a','b','z','z' };
//	char arr22[] = { 'a','b','a' };
//
//	char arr3[] = "abz";
//	char arr4[] = "ab";
//	printf("%d\n", strcmp(arr1, arr2));//打印-1
//	printf("%d\n", strcmp(arr11, arr22));//打印1
//	printf("%d\n", strcmp(arr3, arr4));
//
//	return 0;
//}
