void HeapSort(int* a, int n)
{
	//升序排序 建大堆
	//向下调整建堆 O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	//O(N*logN)
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

void TestHeapSort()
{
	int a[] = { 23,10,13,43,94,25,49,65,19,12 };

	HeapSort(a, sizeof(a) / sizeof(int));

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//100个数 选出最大的10个
void TestTopK()
{
	int n = 100;
	int k = 10;

	//造数据
	srand((unsigned int)time(NULL));
	FILE* fin = fopen("data.txt", "w");
	if (fin == NULL)
	{
		perror("fopen fail");
		return;
	}

	for (int i = 0; i < n; i++)
	{
		fprintf(fin, "%d ", rand()%100+1);
	}
	fclose(fin);

	//找topk
	//读10个数据 建小堆
	FILE* fout = fopen("data.txt", "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}
	int* a = (int*)malloc(sizeof(int) * k);
	if (a == NULL)
	{
		perror("malloc fail");
		return;
	}

	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &a[i]);
	}
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, k, i);
	}

	//继续读数据 大于堆顶的数据替换堆顶
	int tmp = 0;
	while (fscanf(fout, "%d", &tmp) != EOF)
	{
		if (tmp > a[0])
		{
			a[0] = tmp;
			AdjustDown(a, k, 0);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	fclose(fout);
}

int main()
{
	TestHeapSort();

	TestTopK();

	return 0;
}
