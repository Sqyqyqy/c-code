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

//挖坑法
int PartSort2(int* a, int begin, int end)
{
	//三数取中优化
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);

	int key = a[begin];
	int left = begin, right = end;
	int hole = left;
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			--right;
		}
		a[hole] = a[right];
		hole = right;

		while (left < right && a[left] <= key)
		{
			++left;
		}
		a[hole] = a[left];
		hole = left;
	}
	a[hole] = key;
	return hole;
}

//前后指针
//w
int PartSort3(int* a, int begin, int end)
{
	//三数取中优化
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);

	int prev = begin, cur = begin + 1;
	int keyi = begin;
	while (cur <= end)
	{
		while (cur <= end && a[cur] >= a[keyi])
		{
			cur++;
		}
		prev++;
		if (cur <= end && prev != cur)
		{
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}

//三路划分
void PartSort4(int* a, int begin, int end, int* end1, int* begin2)
{
	//三数取中优化
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);

	int left = begin, cur = begin + 1, right = end;
	int key = a[begin];

	while (cur <= right)
	{
		if (a[cur] > key)
		{
			Swap(&a[cur], &a[right]);
			right--;
		}
		else if (a[cur] == key)
		{
			cur++;
		}
		else
		{
			Swap(&a[left], &a[cur]);
			left++;
			cur++;
		}
	}
	*end1 = left - 1;
	*begin2 = cur;
}
//三路划分
void QuickSort_PS4(int* a, int begin, int end)
{
	if (begin >= end)
		return;

	//小区间优化
	//if ((end - begin + 1) <= 15)
	//{
	//	//小区间用直接插入排序处理，优化掉百分之八九十的递归调用
	//	InsertSort(a + begin, end - begin + 1);
	//}
	//else
	//{
	int end1, begin2;
	PartSort4(a, begin, end, &end1, &begin2);

	QuickSort(a, begin, end1);
	QuickSort(a, begin2, end);

	//}
}

void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;

	//小区间优化
	if ((end - begin + 1) <= 15)
	{
		//小区间用直接插入排序处理，优化掉百分之八九十的递归调用
		InsertSort(a + begin, end - begin + 1);
	}
	else
	{
		int left = PartSort2(a, begin, end);

		QuickSort(a, begin, left - 1);
		QuickSort(a, left + 1, end);
	}
}

//快速排序非递归
void QuickSortNotR(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);
	while (!StackEmpty(&st))
	{
		int end = StackTop(&st);
		StackPop(&st);
		int begin = StackTop(&st);
		StackPop(&st);

		int mid = PartSort2(a, begin, end);
		
		if (end - mid - 1 >= 1)
		{
			StackPush(&st, mid + 1);
			StackPush(&st, end);
		}
		if (mid - 1 - begin >= 1)
		{
			StackPush(&st, begin);
			StackPush(&st, mid - 1);
		}
	}
	StackDestroy(&st);
}


//归并排序
void _MergeSort(int* a,int begin,int end,int* tmp)
{
	if (begin == end)
		return;
	
	int mid = (begin + end) / 2;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);
	//归并
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin1;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	memcpy(a + begin, tmp + begin, sizeof(int)*(end - begin + 1));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;
}


//归并排序非递归
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	int range = 1;
	while (range < n)
	{
		for (int i = 0; i < n ;i += 2 * range)
		{
			int begin1 = i, end1 = i + range - 1;
			int begin2 = i + range, end2 = end1 + range;
			if (begin2 >= n)
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			int j = begin1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
			memcpy(a + i, tmp + i, sizeof(int)*(end2 - i + 1));
		}

		range *= 2;
	}
	free(tmp);
	tmp = NULL;
}


//计数排序
//时间复杂度：O(N+range)
//空间复杂度：O(range)
void CountSort(int* a, int n)
{
	//获得最大最小值
	int max = a[0], min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	int range = max - min + 1;
	int* countarr = (int*)calloc(range, sizeof(int));
	if (countarr == NULL)
	{
		perror("calloc fail\n");
		exit(-1);
	}
	//统计次数
	for (int i = 0; i < n; i++)
	{
		countarr[a[i] - min]++;
	}
	
	int k = 0;
	for (int i = 0; i < range; i++)
	{
		int count = countarr[i];
		while (count--)
		{
			a[k++] = i + min;
		}
	}
	
	free(countarr);
	countarr = NULL;
}
