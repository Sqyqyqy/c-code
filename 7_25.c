#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//练习2
//函数在设计的时候功能要单一要干净 具有可复用性 不要在这种函数里面进行打印 他只告诉我1还是0这就够了 函数的功能就更加就独立了 跟其他代码就没有任何的关联了 他其实就是在完成一件独立的功能判断闰年
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//函数设计2 逻辑与逻辑或产生的结果无非就是真（1）或者假（0）
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//练习3
				 //本质上这里的arr是一个指针 因为指针才能接收地址
//int binary_search(int arr[], int k,int right)//传过来个数组 拿数组来接收 这个数组可以不指定大小 因为他本质上不是一个数组 后面视频会讲
//int binary_search(int* arr,int k,int right)//形参的部分写成数组的形式也没问题（本质上是int* arr）
//{
//	//算法的实现
//	//int right = sizeof(arr) / sizeof(arr[0]) - 1;// 4/4-1=0
//	int left = 0;
//	while (1)
//	{
//		int mid = (left + right) / 2;//中间元素的下标 函数内部想去求参数部分这个数组的元素个数 这种方法这种是做不到的 怎么办：在外边求好元素个数之后传进来
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] == k)
//			return mid;
//		if (left == right && (arr[left] != k))
//			return -1;
//	}
//}
//int main()
//{
//	//我们在写函数的时候，先去写这个函数怎么用，把这个函数怎么用写出来之后呢再去写这个函数怎么去实现 先把这个函数怎么用想明白了，一会这个函数怎么实现，其实心里更有谱一些
//
//	//二分查找的前提(重要)
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标。0-9 找不到的话返回-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	//                     传递过去的是数组arr首元素的地址(重要) 我通过首元素地址依然能够访问到这个数组 这就是数组传参（语法不支持把整个数组传过去）
//	int ret = binary_search(arr, k,right);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//int search(int k,int right,int arr[])
//{
//	int left = 0;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] == k)
//			return mid;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = search(k,sz,arr);
//
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了，下标是：%d\n", ret);
//	return 0;
//}


//----------------------------------------------------//


//7-22题目7
//void form(int n)
//{
//	int i = 1;
//	while (i <= n)
//	{
//		int a = 1;
//		while (a <= i)
//		{
//			printf("%d*%d=%-2d ", a, i, a*i);
//			if (a == i)
//				printf("\n");
//			a++;
//		}
//		i++;
//	}
//}
//
//int main()
//{
//	int n = 9;
//	form(n);
//	return 0;
//}


//7-22题目8
//void exchange(int* a, int* b)
//{
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("a = %d b = %d\n", a, b);
//	exchange(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//7_22题目9
//int is_leap(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	printf("请输入要判断的年份>:");
//	scanf("%d", &year);
//	int ret = is_leap(year);
//	if (ret == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}


//7-22题目10
#include<math.h>
//int is_prime(int num)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(num/1.0); a++)
//	{
//		if (num % a == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		int answer = is_prime(num);
//		if (answer == 1)
//			printf("%d ", num);
//	}
//	return 0;
//}
//未解决 sqrt参数是整数会强制转换成浮点数？？？


///7-21题目3
//int main()
//{
//	int n = 1;
//	float sum = 0;//易错(float)
//	int i = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		sum += i * 1.0 / n;//(1.0易错)
//		i = -1 * i;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//易错
//测试
//printf("%f\n", 3 / 5);
//printf("%f\n", 3.0 / 5);
//printf("%d\n", 6 / 5);
//此题有待核对正确答案 ??
//测试（未解决）
//int main()
//{
//	float a = 2;
//
//	printf("%f\n", a);//2.000000
//	printf("%d\n", a);//0
//
//	return 0;
//}
