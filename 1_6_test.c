#include"Sort.h"


void TestInsertSort()
{
	int a[] = { 9,8,7,6,5,4,3,2,1 };
	PrintArray(a, sizeof(a) / sizeof(int));
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


void TestShellSort()
{
	int a[] = { 9,8,7,6,5,4,3,2,1,0,6,3,2,1,0,-1,-4,-3,-9 };
	PrintArray(a, sizeof(a) / sizeof(int));
	ShellSort(a, sizeof(a) / sizeof(int));//观察每趟排序的效果
	//PrintArray(a, sizeof(a) / sizeof(int));
}
