
//测试 数组指针解引用
//int main()
//{
//	char arr[3][3] = { 'a','b','c','e' };
//	printf("%s\n", *arr);//arr是数组指针，类型是char(*p)[3]
//	                     //数组指针解引用，得到他所指向数组的数组名，值上是数组首元素的地址
//	printf("%d\n", sizeof(*arr));
//
//	printf("%s\n", arr);//arr是数组名，值和首元素地址一样，类型是char(*p)[3]
//	
//	//无关测试
//	char(*p)[3][3] = &arr;//无警告
//	return 0;
//}


//测试 二维数组传参，形参类型的影响
//void a(int arr[][5])
//{
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);//差20
//}
//
//void a1(int(*p)[5])
//{
//	printf("%p\n", p);
//	printf("%p\n", p+1);//差20
//}
//
//int main()
//{
//	int arr[3][4] = { 1,2,3 };
//	a(arr);
//	return 0;
//}


//10_13题目1 三角形判断
//int main()
//{
//	int arr[4] = { 0 };//出错点2：多组输入考虑多组间是否有影响
//	while (scanf("%d %d %d", &arr[0], &arr[1], &arr[2]) == 3)
//	{
//		int i = 0;
//		int flag;
//		for (i = 0; i < 3; i++)
//		{
//			if (arr[i] >= arr[3])
//			{
//				arr[3] = arr[i];
//				flag = i;
//			}
//		}
//		int sum = 0;
//		for (i = 0; i < 3; i++)
//		{
//			if (i != flag)
//				sum += arr[i];
//		}
//		if (sum <= arr[3])
//		{
//			printf("Not a triangle!\n");
//		}
//		else
//		{
//			flag = 0;
//			int j = 0;
//			for (i = 0; i < 2; i++)//出错点1：判断是等边还是全等
//			{
//				for (j = i + 1; j < 3; j++)
//				{
//					if (arr[i] == arr[j])
//					{
//						flag++;
//					}
//				}
//			}
//			if (flag == 0)
//			{
//				printf("Ordinary triangle!\n");
//			}
//			else if (flag == 1)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Equilateral triangle!\n");
//			}
//		}
//		arr[3] = 0;
//	}
//	return 0;
//}


//测试 while循环条件，用逗号表达式？？？
//int main()
//{
//	int a = 6;
//	while (printf("%d\n", a), a = 0, a)
//	{
//		printf("s\n");
//	}
//	return 0;
//}


//10_13题目2 公务员面试 易
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	int count = 0;
//	while (scanf("%d", &a) == 1)
//	{
//		if (a > max)
//		{
//			max = a;
//		}
//		/*else if (a < min)//易错点
//		{
//			min = a;//23 67 87 56 33 85 70
//		}*/
//		if (a < min)
//		{
//			min = a;
//		}
//		sum += a;
//		count++;
//		if (count == 7)
//		{
//			sum = sum - max - min;
//			double b = sum / 1.0 / 5;
//			printf("%.2lf\n", b);
//			count = 0;
//			sum = 0;
//			max = 0;
//			min = 100;
//		}
//	}
//	return 0;
//}


//EOF - end of file
//scanf读取数据，如果读到了数据，返回的是实际读到的数据的个数
//如果没有读到数据，说明读取失败，返回的是EOF(-1)
//EOF转到定义，发现EOF的本质是-1
int main()
{
	int a = 0;
	int b = 0;
	int ret = scanf("%d", &a);
	printf("ret = %d\n", ret);//vs2017上连输3个ctrl+z返回-1，-1是EOF - end of file

	//多组输入场景 写法总结
	while (scanf("%d %d",&a,&b) == 2)
	{
		//读取到两个数字，scanf返回的是2
	}

	while (scanf("%d %d", &a, &b) != EOF)//scanf返回1或2都不等于EOF，但凡读到点数据就能进入循环
	{
		//读取到2个数字，scanf返回的是2
		//读取到1个数字，scanf返回的是1
	}

	while (~scanf("%d %d", &a, &b))
	{
		//scanf读取失败时返回的是EOF，也就是-1
		//-1的补码是
		//11111111111111111111111111111111
		//当对scanf的返回值~(按位取反的时候)得到的是0
	}
	
	return 0;                 
}


//测试 while (num--)
//int main()
//{
//	int num = 1;
//	while (num--)
//	{
//		printf("e\n");//打印1个e
//	}
//	return 0;
//}
