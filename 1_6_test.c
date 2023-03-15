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


void TestSelectSort()
{
	int a[] = { 9,8,7,6,5,4,3,2,1 };
	PrintArray(a, sizeof(a) / sizeof(int));
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


void TestBubbleSort()
{
	int a[] = { 9,8,7,6,5,4,3,2,1 };
	PrintArray(a, sizeof(a) / sizeof(int));
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


void TestQuickSort()
{
	//int a[] = { 6,3,7,9,8,2,5,4,1 };
	int a[] = { 2,2,2,2,2,2,2,2,2,2 };

	PrintArray(a, sizeof(a) / sizeof(int));
	QuickSort(a, 0, sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));
}


void TestQuickSortNotR()
{
	int a[] = { 6,3,7,9,8,2,5,4,1 };

	PrintArray(a, sizeof(a) / sizeof(int));
	QuickSortNotR(a, 0, sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestMergeSort()
{
	int a[] = { 6,3,7,9,8,2,5,4,1,10 };

	PrintArray(a, sizeof(a) / sizeof(int));
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestMergeSortNonR()
{
	int a[] = { 6,3,7,8,2,5,10,4,1,9 };

	PrintArray(a, sizeof(a) / sizeof(int));
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestCountSort()
{
	int a[] = { 6,3,-7,8,2,5,-10,4,-1,9 };

	PrintArray(a, sizeof(a) / sizeof(int));
	CountSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


void TestOP()
{
	srand(time(0));
	const int N = 10000000;
	int* a1 = (int*)malloc(sizeof(int)*N);
	//int* a2 = (int*)malloc(sizeof(int)*N);
	//int* a3 = (int*)malloc(sizeof(int)*N);
	//int* a4 = (int*)malloc(sizeof(int)*N);
	//int* a5 = (int*)malloc(sizeof(int)*N);
	//int* a6 = (int*)malloc(sizeof(int)*N);
	//int* a7 = (int*)malloc(sizeof(int)*N);
	int* a8 = (int*)malloc(sizeof(int)*N);
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand() + i;
		//int x = rand();
		//if (x % 7 == 0 && x % 5 == 0 && x % 3 == 0)
		//{
		//	a1[i] = x;
		//	count++;
		//}
		//else//造接近有序的数据
		//{
			//a1[i] = i;
		//}

		//a2[i] = a1[i];
		//a3[i] = a1[i];
		//a4[i] = a1[i];
		//a5[i] = a1[i];
		//a6[i] = a1[i];
		//a7[i] = a1[i];
		a8[i] = a1[i];
	}
	//printf("%d\n", count);

	int begin1 = clock();
	//InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	QuickSort(a1, 0, N - 1);
	int end2 = clock();

	//int begin3 = clock();
	//SelectSort(a3, N);
	//int end3 = clock();

	//int begin4 = clock();
	//HeapSort(a4, N);
	//int end4 = clock();

	//int begin5 = clock();
	//QuickSortNotR(a2, 0, N - 1);
	//int end5 = clock();

	//int begin6 = clock();
	//MergeSort(a6, N);
	//int end6 = clock();

	//int begin7 = clock();
	//BubbleSort(a7, N);
	//int end7 = clock();

	int begin8 = clock();
	CountSort(a8, N);
	int end8 = clock();

	//printf("InsertSort:%d\n", end1 - begin1);
	printf("QuickSort:%d\n", end2 - begin2);
	//printf("SelectSort:%d\n", end3 - begin3);
	//printf("HeapSort:%d\n", end4 - begin4);
	//printf("QuickSortNotR:%d\n", end5 - begin5);
	//printf("MergeSort:%d\n", end6 - begin6);
	//printf("BubbleSort:%d\n", end7 - begin7);
	printf("CountSort:%d\n", end8 - begin8);
	free(a1);
	//free(a2);
	//free(a3);
	//free(a4);
	//free(a5);
	//free(a6);
	//free(a7);
	free(a8);
}


//int main()
//{
//	//TestInsertSort();
//	//TestShellSort();
//	//TestBubbleSort();
//	//TestSelectSort();
//	//TestQuickSort();
//	//TestQuickSortNotR();
//	//TestMergeSort();
//	//TestMergeSortNonR();
//	//TestCountSort();
//
//	//TestOP();
//
//	return 0;
//}


#define N 30
#define Add(x,y) x+y
int main()
{
	//int a = 0;
	//double* p1 = (double*)&a; // 显式类型转换
	//double* p2 = &a; // 隐式类型转换
	int a = N;
	printf("%d\n", N);
	int b = 1;
	Add(a, b);

	return 0;
}
