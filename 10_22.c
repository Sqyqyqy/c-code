
//malloc函数测试
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	int* rem = p;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//释放
//	free(rem);
//	p = NULL;
//
//	return 0;
//}


//栈上的变量会被回收 但堆区上的不会
#include<stdlib.h>
//int test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 3;
//	return 0;
//}
//
//int main()
//{
//	test();
//	//观察内存 出了test函数，开辟的空间也不会被回收
//	return 0;
//}


//realloc函数测试
//int main()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	int* rem = p;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//增加空间
//	int* ptr = (int*)realloc(p, 8000);
//	//free(p);//报异常？？ 我推测：此时p指向的空间已被释放(realloc函数free掉p指向的空间)，此处重复释放会报异常
//	if (ptr != NULL)//realloc开辟失败返回NULL
//	{
//		//free(p);//报异常？？
//		p = ptr;
//		ptr = NULL;
//	}
//	printf("%d\n", *(rem + 3));//验证p申请的空间没有被释放现象
//
//	return 0;
//}
//测试2 验证p申请的空间没有被释放现象，空间已经释放，只不过暂时未被覆盖
//int* test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int* rem = p;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)//realloc开辟失败返回NULL
//	{
//		//free(p);//报异常？？
//		p = ptr;
//		ptr = NULL;
//	}
//	return rem;
//}
//
//int main()
//{
//	int* rem = test();
//	printf("覆盖");//未覆盖p指向的空间，推测因为test函数中p在函数栈帧中，但p指向的空间不在函数栈帧中，此次调用printf函数创建栈帧，可能会覆盖p，但是不一定覆盖p指向的，malloc函数开辟的空间
//	               //观察&p验证上述推测，&p所指向的内存空间，在出test后暂未改变，但在调用printf函数时发生改变
//	printf("%d\n", *(rem + 3));//验证p申请的空间没有被释放现象
//
//	return 0;
//}


//kmp算法实现
#include<stdlib.h>
#include<assert.h>
#include<string.h>
int* Getnext(char* arr1)
{
	int* next = (int*)malloc(sizeof(int)*strlen(arr1));
	assert(next);
	next[0] = -1;
	next[1] = 0;
	int i = 1;//arr(next)下标
	int k = next[i];//next数组值
	while (i<=strlen(arr1)-2)
	{
		if (arr1[i] == arr1[k] || k == -1)
		{
			next[i + 1] = ++k;
			i++;
		}
		else if (arr1[i] != arr1[k])
		{
			k = next[k];
		}
	}
	return next;
}

char* kmp(char* arr, char* arr1)
{
	int* next = Getnext(arr1);
	int i = 0;//arr
	int j = 0;//arr1
	while (i < (int)strlen(arr) && j < (int)strlen(arr1))//???
	{
		if (arr[i] == arr1[j] || j == -1)
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
	}
	if (j == strlen(arr1))
	{
		return &arr[i - j];
	}
	return NULL;
}

//int main()
//{
//	char arr[] = "abdefabcabc";
//	char arr1[] = "abcab";
//	//int* next = Getnext(arr1);
//	char* p = kmp(arr,arr1);
//	if(p != NULL)
//		printf("%s\n", p);
//
//	//for (int i = 0; i < strlen(arr1); i++)
//	//{
//	//	printf("%d ", next[i]);
//	//}
//	return 0;
//}


//测试 无符号整型和有符号整型比较大小 我:比较时会发生算术转换
//int main()
//{
//	unsigned int n = 1;
//	if (-1 > n)
//	{
//		printf("a");
//	}
//	//10000000000000000000000000000001
//	//11111111111111111111111111111111
//	//
//	return 0;
//}


//测试 static观察
int* test()
{
	static int a = 1;
	a++;
	return &a;
}

int main()
{
	int i = 3;
	int* pa = test();
	while (i)
	{
		test();
		i--;
	}//a的值变成5

	printf("%d\n", *pa);//可以通过*pa来打印a
	//printf("%d\n", a);//未定义标识符a
	return 0;
}
