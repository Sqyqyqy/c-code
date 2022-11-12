#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//枚举类型测试
//int main()
//{
//	enum Test
//	{
//		x1,
//		x2,
//		x3 = 10,
//		x4,
//		x5,
//	};
//	printf("%d %d %d %d %d\n", x1,x2,x3,x4,x5);
//	return 0;
//}


//位段观察测试
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%d\n", pstPimData->ucData0);//1
//	return 0;
//}


//找两个单身狗（分析见最下边）
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字
//void Find(int* arr,int sz)
//{
//	int i = 0;
//
//	int flag = 0;
//	
//	int all = sz - 2;
//
//	int count = 0;
//	for (i = 0; i < all; i++)
//	{
//		if (count == 2)
//			break;
//
//		int j = 0;
//		flag = 0;
//		for (j = 1; j < sz; j++)
//		{
//			if (arr[0] == arr[j])
//			{
//				if (j == sz - 1)
//				{
//					arr[0] = arr[sz - 2];
//					sz -= 2;
//				}
//				else if (j == sz - 2)
//				{
//					arr[0] = arr[sz - 1];
//					sz -= 2;
//				}
//				else
//				{
//					arr[0] = arr[sz - 1];
//					arr[j] = arr[sz - 2];
//					sz -= 2;
//				}
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", arr[0]);
//			arr[0] = arr[sz - 1];
//
//			sz--;
//			count++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,5,6,4,4,3,3,2,2,1 };
//	int sz = sizeof(arr) / sizeof(int);
//	Find(arr,sz);
//	return 0;
//}

//异或的性质
//不创建临时变量（第三个变量），实现两个数的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

//找一个单身狗 数组中只有一个数字出现一次，其他数字都是成对出现
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int a = arr[0];
//	for (i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++)
//	{
//		a = a ^ arr[i];
//	}
//	printf("只出现一次的数字是:%d\n", a);
//	return 0;
//}
//析:只要把这组数字异或在一起就能找出单身狗

//找两个单身狗
//分组:
//5 和 6 必须分到2个组里
//只要两数不相同，他们异或的结果一定里边有1
// 101
//^110
// 011
//异或结果是1说明5和6的这一位不相同，就可以根据这一位来分，5和6就必然来到两个组里边去了
//a实现:
//int main()
//{
//	int arr[] = {5,1,2,3,4,5,1,2,3,4,6 ,9};
//	//所有数字异或
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//ret 就是5^6的结果，二进制中一定有1
//	//计算ret的第几位是1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//ret的第pos位是1
//	//把arr数组中的每个元素的第pos位为1的数字异或在一起
//	int num1 = 0;
//	int num2 = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("%d %d\n", num1, num2);
//
//	return 0;
//}


//模拟实现atoi 这样写部分异常情况无法处理，重写代码见下个文件
//int my_atoi(char* arr)
//{
//	int ret;
//	sscanf(arr, "%d", &ret);
//	return ret;
//}
//
//int main()
//{
//	char arr[10];
//	scanf("%s", arr);
//	int i = my_atoi(arr);
//	printf("%d\n", i);
//	return 0;
//}
