//调试时:条件断点设置
//场景:想在循环i=5时停下
//int main()
//{
//	int i = 10;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		//方法二 设置if语句
//		if (i == 5)
//		{
//			printf("D\n");//不能是空语句 否则不会停下
//		}
//		arr[i] = 1;//方法一 直接设置条件断点
//	}
//	return 0;
//}


//调试问题代码
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//模拟实现strcpy
//void my_strcpy(char* arr1,char* arr2)
//{
//	int i = -1;
//	while (1)
//	{
//		//*(arr1 + ++i) = *(arr2 + ++i);//这行i加了两次
//		*(arr1 + ++i) = *(arr2 + i);//我改进 (重要)
//		if (*(arr2 + i) == 0)
//			break;
//	}
//}
//
////t
//void my_strcpy1(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
////t改进
//void my_strcpy2(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//
////t改进
//void my_strcpy3(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
////t改进
//#include<assert.h>
//void my_strcpy4(char* arr1, char* arr2)
//{
//	//assert(arr1 != NULL);//断言
//	//assert(arr2 != NULL);//断言
//
//	//assert(arr1);//断言
//	//assert(arr2);//断言
//
//	assert(arr1 && arr2);//断言
//	
//	while (*arr1++ = *arr2++)//如果arr是空指针，程序会挂掉，还得调试找问题，但如果加上断言，是空指针就会直接报错找到问题在哪里
//	{
//		;
//	}
//}
//
////t改进
////函数返回的是目标空间的起始地址
//char* my_strcpy5(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//	assert(arr1 && arr2);//断言
//
//	while (*arr1++ = *arr2++)//如果arr是空指针，程序会挂掉，还得调试找问题，但如果加上断言，是空指针就会直接报错找到问题在哪里
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	//我测试
//	/*int * const p = arr2;
//	p = 1;*/
//
//	return 0;
//}


//我测试
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int* p = &arr;
//	printf("%p\n", p+1);//为什么p+1和&arr+1的值不一样  我:把数组的地址传给p，但p的类型是int*，类型转换成整型指针了
//	return 0;
//}
