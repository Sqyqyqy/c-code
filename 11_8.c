//模拟实现memcpy
#include<assert.h>
//void* my_memcpy(void* des,const void* src, size_t num)
//{
//	void* ret = des;
//	assert(des&&src);
//	unsigned int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*(((char*)des) + i) = *(((char*)src) + i);
//	}
//	return ret;
//}
//
//int main()
//{
//	int src[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int des[10] = { 0 };
//
//	my_memcpy(des, src, sizeof(src) / sizeof(src[0]) * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", des[i]);
//	}
//	return 0;
//}


//模拟实现memmove
#include<assert.h>
//void* my_memmove(void* des, const void* src, size_t num)
//{
//	assert(des&&src);
//	void* ret = des;
//	if (des > src)
//	{
//		/*char* des1 = (char*)des+num - 1;
//		char* src1 = (char*)src+num - 1;
//		while (num--)
//		{
//			*(des1--) = *(src1--);
//		}*/
//		//a
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			//*( ( (char*)des )++) = *(((char*)src)++);//不是最好的写法,有些编译器下不允许这样写
//			*(char*)des = *(char*)src;
//			des = (char*)des + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 3 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//1 2 1 2 3 6 7 8 9 10
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//前缀++ 和 后缀++ 的优先级都比 ( 类型 ) 高


//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//void Find(int* arr,int sz)
//{
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < sz; i++)//得到5^6
//	{
//		num = num ^ arr[i];
//	}
//	while (1)//找到5和6二进制不相同的一位
//	{
//		i = 0;
//		if ((num >> i) & 1 == 1)
//		{
//			break;
//		}
//	}
//	int j = 0;
//	int single1 = 0;
//	int single2 = 0;
//	for (j = 0; j < sz; j++)//根据5和6某一个不同的二进制位，把5和6分到两组中，把两组数字分别异或在一起，得到5和6
//	{
//		if ((arr[j] >> i) & 1 == 1)
//		{
//			single1 = single1 ^ arr[j];
//		}
//		else
//		{
//			single2 = single2 ^ arr[j];
//		}
//	}
//	printf("%d %d\n", single1, single2);
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
//	//{ 1,1,2,2,5 } { 3,3,4,4,6 }
//	//5 ^ 6
//
//	Find(arr,sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}


//学校oj
//---------------------------------------------------------------------
//C
//某班有5名学生,每名学生学习了4门课程
//要求按照总分从高到低的顺序输出该班的成绩（各科成绩均为整数）单
//输入占5行，每行输入4个数，表示每名同学的四科成绩
//输出：将5名学生按照总分排序，分高的排在前面，输出这个班的成绩单
//#include<stdio.h>
//#include<stdlib.h>
//int compar(const void* x, const void* y)
//{
//	return -(*(int*)x - *(int*)y);
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[5][5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d %d %d %d", &arr[i][1], & arr[i][2], & arr[i][3], & arr[i][4]);
//		arr[i][0] = arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4];
//	}
//	qsort(arr, 5, 20, compar);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//D
//二维数组 a（3 行 4 列）表示矩阵 A，二维数组 b（4 行 5 列）表示矩阵 B
//计算矩阵 A 和矩阵 B 的乘积
//#include<stdio.h>
//int main()
//{
//	int arr1[3][4] = { 0 };
//	int arr2[4][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int arr3[3][5] = { 0 };
//	int k = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 5; k++)
//		{
//			int sum = 0;
//			for (j = 0; j < 4; j++)
//			{
//				sum = sum + arr1[i][j] * arr2[j][k];
//
//			}
//			arr3[i][k] = sum;
//		}	
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//F
//验证哥德巴赫猜想：任何一个大于 2 的偶数总能表示为两个素数之和
//比如：24 = 5 + 19，其中 5 和 19 都是素数。
//输入一个大于 2 的偶数 n，请你找到两个素数 a、b，使得 a + b = n。素数是指不能被除了 1 和它本身整除的数。
//如果有多对满足条件的 a, b，输出任意一对即可
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)//该函数设计有该题特殊性
//{
//	int i = 0;
//	for (i = 3; i <= sqrt(n); i = i + 2)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 4)//出错点 不能输出1 3，1不是素数
//	{
//		printf("2 2\n");
//		return 0;
//	}
//	int a = 3;
//	int b = n - 3;
//	while ( !(is_prime(a) && is_prime(b)) )//能否把a++和b++写到函数括号里，推测（测试在下面代码）:不能，因为对于&&，如果前面为假，则后面的表达式就不会算了
//	{
//		a = a + 2;
//		b = b - 2;
//	}
//	printf("%d %d\n", a, b);
//	return 0;
//}
//测试
//int test(int n)
//{
//	if (n % 2 == 0)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int a = 4;
//	int b = 1;
//	while (test(a++) && test(b++))
//	{
//		;
//	}
//	printf("%d %d\n", a, b);//a = 5 b = 1 说明&&后面的表达式没有算
//	return 0;
//}
