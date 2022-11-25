#define _CRT_SECURE_NO_WARNINGS 1


//A
//编写两个函数，将n个正整数中的素数按升序排序
//函数功能分别是:判断一个数是否为素数，对数组进行排序
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int x)
{
	if ((x % 2 == 0 && x!=2) || x == 1)//1 偶数
		return 0;
	if (x == 2)//2
		return 1;
	int i = 0;
	for (i = 3; i <= sqrt(x); i = i + 2)
	{
		if (x%i == 0)
			return 0;
	}
	return 1;
}
//
//快排的优化 未解决？？？
//void my_qsort(int* left,int* right)
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int mid = *left;
//	int* left_rem = left;
//	int* right_rem = right;
//	//int state = -1;
//	//while (left < right)//假设没有相同的数(待细析)
//	//{
//	//	while (state == -1 && *right > mid)
//	//	{
//	//		right--;
//	//	}
//	//	if (state == -1 && *right < mid)
//	//	{
//	//		*left = *right;
//	//		*right = mid;//省去跳出循环后*left = mid,意义不大
//	//		left++;
//	//		state = 1;
//	//	}
//	//	while (state == 1 && *left < mid)
//	//	{
//	//		left++;
//	//	}
//	//	if (state == 1 && *left > mid)
//	//	{
//	//		*right = *left;
//	//		*left = mid;
//	//		right--;
//	//		state = -1;
//	//	}
//	//}
//	//state设定没有必要
//	while (left < right)//假设没有相同的数(待细析)
//	{                   //有相同的数的情况，把while循环条件中*right > mid改为*right >= mid即可；同样*left < mid改为*left <= mid即可
//		while (*right >= mid && left < right)//left < right避免走过了的现象发生
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			//*left = *right;
//			////*right = mid;//没有必要赋值，跳出循环最后赋值就行
//			//left++;//有更好，避免多余判断
//			//state = 1;//没必要（没必要设定状态，右指针走和左指针走一定是交替进行的）(状态值的意义:如果选最右边为mid，调整状态值由-1为1即可，而不用调整代码顺序(应该是)，但无实际应用价值)
//
//			*left = *right;
//			left++;
//		}
//
//		while (*left <= mid && left < right)
//		{
//			left++;
//		}
//		if (left < right)
//		{
//			//*right = *left;
//			//*left = mid;
//			//right--;
//			//state = -1;
//
//			*right = *left;
//			right--;
//		}
//	}
//	*left = mid;
//  //(未实现)还可以左右指针往中间遍历，左遇到大于停下来，右遇到小于停下来，交换，最后把mid和 大于mid和小于mid的交界处 的值交换，单次排序的时间复杂度应该是a*N（a大于1），乘常数可以忽略，数量级和上述方法是一样的
//	//(未实现)还可以用smaller(慢)，larger(快)两个快慢指针，见https://assets.leetcode-cn.com/solution-static/912/912_fig1.gif           
//
//	my_qsort(left_rem, left - 1);
//	my_qsort(right + 1, right_rem);
//}
//快排的优化1 随机选取mid值 应对"7 6 5 4 3 2 1"的情况
#include<time.h>
#include<stdlib.h>
//void my_qsort(int* left,int* right)
//{
//	if (left >= right)
//	{
//		return;
//	}
//
//	int* pmid = rand() % (right - left + 1) + left;
//	int mid = *pmid;
//	*pmid = *left;
//	*left = mid;
//	//int mid = *left;
//
//	int* left_rem = left;
//	int* right_rem = right;
//
//	while (left < right)
//	{
//		while (*right >= mid && left < right)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			*left = *right;
//			left++;
//		}
//
//		while (*left <= mid && left < right)
//		{
//			left++;
//		}
//		if (left < right)
//		{
//			*right = *left;
//			right--;
//		}
//	}
//	*left = mid;
//
//	my_qsort(left_rem, left - 1);
//	my_qsort(right + 1, right_rem);
//}
//随机种子测试1：位置1和位置2结果不同
//int main()
//{
//	int i = 20;
//	//srand((unsigned int)time(NULL));//位置1
//	while (i--)
//	{
//		//srand((unsigned int)time(NULL));//位置2
//		int mid = rand();
//		printf("%d\n", mid);
//	}
//
//	//无srand测试
//	//int mid1 = rand();
//	//printf("%d\n", mid1);//41
//	//int mid2 = rand();
//	//printf("%d\n", mid2);//18467
//	//int mid3 = rand();
//	//printf("%d\n", mid3);//6334
//	return 0;
//}
//随机种子测试2
//void s()
//{
//	srand((unsigned int)time(NULL));
//}
//int main()
//{
//	s();
//	int i = 10;
//	while (i--)
//	{
//		int mid = rand();
//		printf("%d\n", mid);
//	}
//	return 0;
//}
//随机种子测试3
//void s2()
//{
//	srand((unsigned int)time(NULL));
//}
//void s1()
//{
//	s2();
//	int i = 10;
//	while (i--)
//	{
//		int mid = rand();
//		printf("%d\n", mid);
//	}
//}
//int main()
//{
//	s1();
//	return 0;
//}
//(w)快排的优化2 优化单次排序 应对"3 3 3 3 3 3"的情况
void my_qsort(int* left, int* right)
{
	if (left >= right)
	{
		return;
	}

	int* pmid = rand() % (right - left + 1) + left;
	int mid = *pmid;
	*pmid = *left;
	*left = mid;

	int* left_rem = left;
	int* right_rem = right;

	while (left < right)
	{
		if (*right >= mid && left < right)//if而不是while，每次只走一步
		{
			right--;
		}
		if (*left <= mid && left < right)
		{
			left++;
		}
		if (*left > mid && *right < mid && left < right)
		{
			int tmp = *right;
			*right = *left;
			*left = tmp;
			left++;
			right--;
		}
	}
	if (left == right)//走一起 该处的值分三种情况
	{
		if (*left < mid)         //1
		{
			*left_rem = *left;
			*left = mid;
		}
		//=不需要操作            //2
		else if(*left > mid)     //3
		{
			*left_rem = *(left - 1);
			*(left - 1) = mid;
			left--;
			right--;
		}
	}
	if (left > right)//只有一种情况
	{
		left--;
		*left_rem = *right;
		*right = mid;
	}

	my_qsort(left_rem, left - 1);
	my_qsort(right + 1, right_rem);
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * 4);
//	int* arr_p = (int*)malloc(n * 4);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (is_prime(arr[i]) == 1)
//		{
//			arr_p[count++] = arr[i];
//		}
//	}
//	printf("%d\n", count);
//	srand((unsigned int)time(NULL));
//	my_qsort(arr_p, arr_p + count - 1);
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", arr_p[i]);
//	}
//
//	//my_qsort测试
//	//int arr[] = { 5,1,1,2,0,0 };
//	//srand((unsigned int)time(NULL));
//	//my_qsort(arr, arr + 5);
//
//	return 0;
//}
