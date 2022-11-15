//调用随机函数产生 10 个 1-100 之间的整数，找出其中所有的素数并保存到一维数组 w 中。输出随机产生的十个原始数据及找到的素数
//#include<stdlib.h>
//#include<time.h>
//#include<math.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int arr[10];
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	int c = 0;
//	int k = 0;
//	int a[10];
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 100 + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 1 || arr[i] == 2)//2也是素数
//		{
//			for (j = 3; j <= sqrt(arr[i]); j = j + 2)
//			{
//				if (arr[i] % j == 0)
//					break;
//			}
//			if (j > sqrt(arr[i]))
//			{
//				c++;
//				a[k] = arr[i];
//				k++;
//			}
//		}
//	}
//	printf("%d\n", c);
//	for (i = 0; i < c; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	
//	return 0;
//}
//sqrt函数测试
//int main()
//{
//	int a = 5;
//	int b = sqrt(7);
//	double c = sqrt(7);
//	return 0;
//}


//模拟实现atoi
//my_atoi(NULL)//异常
//my_atoi("")//异常
//my_atoi("        +123")//正常
//my_atoi("  -123")//正常
//my_atoi("123abc")//异常
//my_atoi("111111111111111111111111111111")//异常
//my_atoi("-111111111111111111111111111111")//异常
//
#include<limits.h>
#include<ctype.h>
//enum STATUS
//{
//	VALID,
//	INVALID
//};
//enum STATUS status = INVALID;
//int my_atoi(const char* str)
//{
//	if (str == NULL)//err
//		return 0;
//	if (*str == '\0')//err
//		return 0;
//	//空白字符
//	while (*str == ' ')
//	{
//		str++;
//	}
//	int flag = 1;//正负
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	else if (*str == '+')
//	{
//		str++;
//	}
//	//处理数字字符
//	long long num = 0;
//	//while (*str >= '0' && *str <= '9')//可以用函数isdigit()
//	while(isdigit(*str))
//	{
//		//123
//		num = num * 10 + flag * (*str - '0');
//		str++;
//		
//		//判断数字是否超过整型范围
//		//INT_MAX;
//		//INT_MIN;//头文件limits.h
//		if (num > INT_MAX || num < INT_MIN)
//		{
//			return 0;
//		}
//	}
//	if (*str != '\0')//异常"123abc"
//	{
//		return (int)num;
//	}
//	else//正常
//	{
//		status = VALID;
//		return (int)num;
//	}
//
//}
//
//int main()
//{
//	char arr[30] = { 0 };
//	scanf("%s", arr);
//	int ret = my_atoi(arr);
//	if (status == INVALID)
//	{
//		printf("非法转换:%d", ret);
//	}
//	else
//	{
//		printf("合法转换:%d", ret);
//	}
//	return 0;
//}

//int main()
//{
//	INT_MAX;
//	INT_MIN;
//	int a = 2147483648;//-2147483648
//	int b = 2147483649;//-2147483647
//	int c = 2147483650;//-2147483646
//	return 0;
//}

//10-5运算分析
//00000000000000000000000000001010 10
//11111111111111111111111111111011 -5
//100000000000000000000000000000101 10+(-5) 进的一位丢了
//00000000000000000000000000000101 5

//-2147483647+1运算分析
//11111111111111111111111111111111 - -2147483647原码
//10000000000000000000000000000000
//10000000000000000000000000000001 - -2147483647补码
//00000000000000000000000000000001 - 1原码
//10000000000000000000000000000010 - 负数 - 是一个补码
//11111111111111111111111111111110 减一按位取反 得原码 -2147483646


//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//int main()
//{
//	char *str = GetMemory();
//	printf(str);
//	return 0;
//}
