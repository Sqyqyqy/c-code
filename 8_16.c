#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//7_25练习1
//int pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n * pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = pow(n,k);
//	printf("%d的%d次方等于%d\n",n,k,ret);
//	return 0;
//}


//7_25练习2
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	printf("输入一个非负整数，返回组成它的数字之和:>");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


#include<string.h>
//7_25练习3(重做)
//void  reverse_string(char* arr)
//{
//	int sz = strlen(arr);
//	if (sz > 1)
//	{
//		char tmp = *arr;
//		*arr = *(arr + sz - 1);
//		*(arr + sz - 1) = 0;//关键是\0的使用
//		reverse_string(arr + 1);
//		*(arr + sz - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10];
//	printf("输入字符串，将字符串中的字符反向排列:>");
//	scanf("%s", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//(数组传参以及在函数内部修改数组名)(测试)(重要)
//---------------------------------------------------
//void  reverse_string(char* arr)
//{
//	arr = arr + 3;
//	*arr = '\0';
//	printf("%d\n", strlen(arr));	
//}
//
//int main()
//{
//	char arr[7] = "abcdef";
//	//arr = arr + 3;//报错：表达式必须是可修改的左值
//
//	reverse_string(arr);
//	printf("%d\n", strlen(arr));
//	printf("%s\n", arr);//自：在函数内部能修改数组名，但在函数外部数组名不可修改，因此在函数内部修改arr的值之后 出了函数arr并没有被改变，即arr又会恢复原来的地址，打印数组仍然是从第一个元素开始打印 strlen仍然是从第一个元素开始统计数组的元素个数
//
//	printf("%d\n", strlen(arr+1));
//	printf("%s\n", arr + 1);
//	return 0;
//}
//--------------------------------------------------

//(测试)
//--------------------------------------------------
//int main()
//{
//	char arr[3] = "abc";
//	printf("%s\n", arr);
//
//	//char arr1[3] = "ab";
//	//printf("%s\n", arr1);
//
//	//char arr1[5] = "abcde";
//	//printf("%d\n",strlen(arr1) );
//
//	char arr1[5] = "abcd";
//	printf("%s\n", arr1 + 1);
//	//*arr = 'a' ;
//	//arr[] = 'a';
//
//	return 0;
//}
//-------------------------------------------------


//7_25练习4
//非递归实现strlen
//int my_strlen1(char arr[])
//{
//	int count = 0;
//	while (*arr != 0)
//	{
//		count++;
//		arr += 1;
//	}
//	return count;
//}

//递归实现strlen
//int my_strlen2(char arr[])
//{
//	if (*arr != 0)
//	{
//		return 1 + my_strlen2(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//int main()
//{
//	char arr[10] = { 0 };
//	printf("输入长度小于10的字符串,返回字符串长度:>");
//	scanf("%s", arr);
//	int num1 = my_strlen1(arr);
//	int num2 = my_strlen2(arr);
//	printf("num1 = %d\n", num1);
//	printf("num2 = %d\n", num2);
//	return 0;
//}
