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


//8_02题目7 使用指针打印数组内容
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


//8_02题目8 字符串逆序 (重要)如何读入一个字符串
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* p, int sz)
//{
//	char* right = p + sz - 1;
//	char* left = p;
//	while (left < right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = {0};//我:这里应该必须初始化 否则里面放的是随机值而不是'\0' strlen统计时可能出问题
//	//scanf("%s", arr);//csdn:scanf遇到空格后就会停止扫描 这里使用gets这个函数获得标准输入流(键盘)上的字符串就不会出现这种问题
//	//法一
//	//gets(arr);//cplusplus:C标准在2011年从其规范中明确删除了此功能
//	int i = 0;
//	char tmp;
//	//法二
//	while ((tmp = getchar())!= 10)//scanf,gets都解决不了，这样写可以解决
//	{                             //while ((arr[i]= getchar())!= 10)这个代码有问题 会把换行也放到字符数组里
//		arr[i] = tmp;
//		i++;
//	}
//  //法三
//	scanf("%[^\n]", arr);//读到直到\n就停止(重要) 这种方法输入格式要求是字符串
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s", arr);
//	return 0; 
//}

//a
//int main()
//{
//	char arr[10001] = { 0 };//保证最后能放得下\0,\0才能截至
//	//scanf输入字符串，遇到空格默认认为结束了
//}
