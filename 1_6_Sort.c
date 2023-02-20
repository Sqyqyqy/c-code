#include"Sort.h"
#include"Stack.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void ShellSort(int* a, int n)
{
	//gap
	//int gap = 3;
	//for (int j = 0; j < gap; j++)
	//{
	//	for (int i = j; i < n - gap; i += gap)
	//	{
	//		int end = i;
	//		int tmp = a[end + gap];
	//		while (end >= 0)
	//		{
	//			if (a[end] > tmp)
	//			{
	//				a[end + gap] = a[end];
	//				end = end - gap;
	//			}
	//			else
	//			{
	//				break;
	//			}
	//		}
	//		a[end + gap] = tmp;
	//	}
	//}	

	// gap > 1 预排序
	// gap == 1 直接插入排序
	int gap = n;
	while (gap > 1)
	{
		//gap = gap / 2;
		gap = gap / 3 + 1;//+1 - 保证最后一次一定是1

		//更简洁的写法 效率一样
		//gap组一起排
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end = end - gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}

		//PrintArray(a, n);//观察每趟排序的效果
	}
}


void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;

	while (begin < end)
	{
		int maxi = begin, mini = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}
		Swap(&a[mini], &a[begin]);
		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}


void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}


//三数取中
int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] > a[mid])
	{
		if (a[end] > a[mid])
		{
			if (a[begin] > a[end])
			{
				return end;
			}
			else
			{
				return begin;
			}
		}
		else
		{
			return mid;
		}
	}
	else
	{
		if (a[begin] > a[end])
		{
			return begin;
		}
		else
		{
			if (a[mid] > a[end])
			{
				return end;
			}
			else
			{
				return mid;
			}
		}
	}
}

//void QuickSort(int* a, int begin,int end)
//{
//	if (begin >= end)
//		return;
//
//	//小区间优化
//	if ((end - begin + 1) <= 15)
//	{
//		//小区间用直接插入排序处理，优化掉百分之八九十的递归调用
//		InsertSort(a + begin, end - begin + 1);
//	}
//	else
//	{
//		//三数取中优化
//		int mid = GetMidIndex(a, begin, end);
//		Swap(&a[mid], &a[begin]);
//
//		int left = begin, right = end;
//		int keyi = left;
//		while (left < right)
//		{
//			//左边先走 找小
//			while (left < right && a[right] >= a[keyi])
//			{
//				right--;
//			}
//			//右边再走 找大
//			while (left < right && a[left] <= a[keyi])
//			{
//				left++;
//			}
//			Swap(&a[left], &a[right]);
//		}
//		Swap(&a[keyi], &a[left]);
//
//		QuickSort(a, begin, left - 1);
//		QuickSort(a, left + 1, end);
//	}
//}

//Hoare
int PartSort1(int* a, int begin, int end)
{
	//三数取中优化
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);

	int left = begin, right = end;
	int keyi = left;
	while (left < right)
	{
		//左边先走 找小
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		//右边再走 找大
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}
