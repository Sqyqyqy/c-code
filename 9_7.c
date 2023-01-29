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


//8_1刷题1 获得月份天数
//#include <stdio.h>
//
//int main() {
//	int year, month;
//	while (scanf("%d %d", &year, &month) != EOF)//输入什么会停止？？？输入，为什么会死循环 
//	{
//		if (month == 2)
//		{
//			if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//				printf("29\n");
//			else
//				printf("28\n");
//		}
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("30\n");
//		}
//		else
//		{
//			printf("31\n");
//		}
//	}
//
//	return 0;
//}

//或者用switch语句s
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf("%d %d", &y, &m) == 2)//an(这样写容易理解)
//	{
//		switch (m)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("%d\n", 31);
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("%d\n", 30);
//		case 2:
//		{
//			if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//				printf("%d\n", 29);
//			else
//				printf("%d\n", 28);
//		}
//		}
//	}
//	return 0;
//}
//
////改进 用数组s
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y, m;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int day = days[m];
//		if (is_leap_year(y) && m == 2)//多组输入题目(重要)
//		{
//			day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}


//指针
//int main()
//{
//	int arr[] = { 0x11111111,2,3,4,5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//8_02刷题7 使用指针打印数组内容
//void print_arr(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	return 0;
//}
