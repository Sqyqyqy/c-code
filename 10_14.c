//关于strncpy重叠内存拷贝的 测试，测试结论:strncpy不具有重叠内存拷贝功能
#include<string.h>
//int main()
//{
//	char arr[10] = "abcdef";
//	//strncpy(arr, arr + 2, 3);//调试观察:拷贝成功
//	strncpy(arr+2, arr, 3);//调试观察:拷贝失败(ababaf)
//	return 0;
//}


//strncpy模拟实现（重要）
#include<assert.h>
#include<string.h>
char* my_strncpy(char* s1, const char* s2,int count)
{
	assert(s1&&s2);
	char* ret = s1;
	while (count && (*s1++ = *s2++)!=0)//问题：如果count == 0，&&后面表达式还会执行吗
	{                                  //猜测不会执行，待测试，经测试符合猜测
		count--;
	}
	if (count)
	{
		while(--count)
			*s1++ = 0;
	}
	return ret;
}

//char* strncpy_test1(char * dest,const char * source,size_t count)
//{
//	char *start = dest;
//
//	while (count && (*dest++ = *source++) != '\0')    /* copy string */
//		count--;
//
//	if (count)                              /* pad out with zeroes */
//		while (--count)
//			*dest++ = '\0';
//
//	return(start);
//}

//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "xxxx";
//	
//	//char arr2[] = "";
//	//strncpy_test1(arr1, arr2, 2);
//	
//	//strncpy(arr1, arr2,5);
//
//	printf("%s\n", my_strncpy(arr1, arr2, 8));
//	return 0;
//}

//测试 &&前面的表达式为0，则后边的表达式不会执行
//int main()
//{
//	int a = 0;
//	while (a && a++)
//	{
//		;
//	}
//	printf("%d\n", a);//打印0
//	return 0;
//}


//模拟实现strstr
#include<assert.h>
//bf算法
char* my_strstr(const char* s1,const char* s2)
{
	const char* rem = s2;
	assert(s1 && s2);
	while (*s1!=0)
	{
		s1++;
		if (*s1 == *s2)
		{
			const char* rem1 = s1;
			int count1 = 1;
			int count2 = 1;
			while (*++s2 != 0)
			{
				s1++;
				count1++;
				if (*s2 == *s1)
				{
					count2++;
				}
			}
			if (count1 == count2)
			{
				return (char*)(s1 - count2 + 1);
			}
			s2 = rem;
			//s1 = s1 - count1 + 1;
			s1 = rem1;
		}
	}
	return NULL;
}

//KMP算法(算法实现见10_17代码)
//假设已得出next数组
#include<string.h>
//char* kmp_strstr(const char* s1, const char* s2)
//{
//	char* next = build_next(s2);
//	int i = 0;
//	int j = 0;
//	while (i < strlen(s1))
//	{
//		if (s1[i] == s2[j])
//		{
//			i++;
//			j++;
//		}
//		else if (j = 0)
//		{
//			i++;
//		}
//		else
//		{
//			j = next[j-1];
//		}
//		if (j == strlen(s2))
//		{
//			return &s1[i - j];
//		}
//	}
//}
//
//
//int main()
//{
//	char arr1[] = "accdefab";
//	char arr2[] = "cde";
//	char* p = my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}


//strtok函数使用测试
#include<string.h>
//int main()
//{
//	char arr[] = "2507248165@qq.com";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//
//	const char* p = "@.";
//
//	//可以
//	/*char* str = strtok(buf, p);
//	printf("%s", str);*/
//
//  //不行
//	//printf("%s\n%s\n%s\n", strtok(buf,p),strtok(NULL,p),strtok(NULL,p));//为什么不能这样写？？？未解决
//	
//  //可以
//	printf("%s\n", strtok(buf, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));
//	char* a = strtok(NULL, p);//a里边放的NULL
//	return 0;
//}

//不关注几个字段
//int main()
//{
//	char arr[] = "2507248165@qq.com";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//	const char* p = "@.";
//	char* str = NULL;
//	//技巧
//	//巧妙地利用for循环的初始化部分只会执行一次的特点，但条件改变部分可能会调用好多次
//	for(str = strtok(buf,p);str!=NULL;str = strtok(NULL,p))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}


//strerror函数使用测试
//#include<errno.h>
//int main()
//{
//	char* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));//打印错误信息：No such file or directory
//		perror("fopen");//打印：fopen: No such file or directory//打印errno变量中错误码对应的错误信息
//		return 1;         
//	}
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//memcpy函数使用测试
//int main()
//{
//	/*float arr1[] = { 1.0f,2.0f,3.0f };
//	float arr2[5] = { 0.0 };
//	memcpy(arr2, arr1, 8);*/
//
//	int arr3[] = { 65,2,3,4,5,6,7 };//41 00 00 00
//	char arr4[5] = {0};
//	memcpy(arr4, arr3, 1);
//	printf("%s\n", arr4);//打印A
//	return 0;
//}

//memcpy函数模拟实现
#include<assert.h>
//void* my_memcpy(void* dest, const void* sourse, size_t num)
//{
//	assert(dest);//对指针进行了解引用操作，所以指针必须为非空指针
//	assert(sourse);
//	//((char*)dest)++;//在有些编译器下不允许这样写，不是最好的写法
//	char* ps = (char*)sourse;
//	char* pd = (char*)dest;//对dest强转之后，dest本身的类型不变(我测试)
//	unsigned int i = 0;
//	for (i = 0; i < num; i++)//警告:有符号无符号不匹配
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	return dest;//void*的指针接收谁的地址都可以，不需要强转（当然此处本来就是void*型的）
//}               
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//测试 对指针类型强转之后，指针本身类型变了吗 -> 不变
//int main()
//{
//	int a = 0;
//	int* p1 = &a;
//	char* p2 = (char*)p1;
//	p1;
//	return 0;
//}

//测试 重叠内存的拷贝 在vs编译器上memcpy具备memmove的功能
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	memcpy(arr + 2, arr, 20);
//
//	return 0;
//}
