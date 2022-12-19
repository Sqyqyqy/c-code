//F
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int c[101] = { 0 };
//	int i = 0;
//	while (n--)
//	{
//		int arr[110][110] = { 0 };
//		int x1, y1, x2, y2, x3, y3, x4, y4, x, y;
//		scanf("%d %d %d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x, &y);
//		arr[x1][y1] = 1;
//		arr[x1 + 1][y1] = 1;
//		arr[x1 - 1][y1] = 1;
//
//		arr[x1 + 1][y1 + 1] = 1;
//		arr[x1 - 1][y1 + 1] = 1;
//		arr[x1][y1 + 1] = 1;
//
//		arr[x1 + 1][y1 - 1] = 1;
//		arr[x1 - 1][y1 - 1] = 1;
//		arr[x1][y1 - 1] = 1;
//
//		arr[x2][y2] = 1;
//		arr[x2 + 1][y2] = 1;
//		arr[x2 - 1][y2] = 1;
//
//		arr[x2 + 1][y2 + 1] = 1;
//		arr[x2 - 1][y2 + 1] = 1;
//		arr[x2][y2 + 1] = 1;
//
//		arr[x2 + 1][y2 - 1] = 1;
//		arr[x2 - 1][y2 - 1] = 1;
//		arr[x2][y2 - 1] = 1;
//
//		arr[x3][y3] = 1;
//		arr[x3 + 1][y3] = 1;
//		arr[x3 - 1][y3] = 1;
//
//		arr[x3 + 1][y3 + 1] = 1;
//		arr[x3 - 1][y3 + 1] = 1;
//		arr[x3][y3 + 1] = 1;
//
//		arr[x3 + 1][y3 - 1] = 1;
//		arr[x3 - 1][y3 - 1] = 1;
//		arr[x3][y3 - 1] = 1;
//		
//		arr[x4][y4] = 1;
//		arr[x4 + 1][y4] = 1;
//		arr[x4 - 1][y4] = 1;
//
//		arr[x4 + 1][y4 + 1] = 1;
//		arr[x4 - 1][y4 + 1] = 1;
//		arr[x4][y4 + 1] = 1;
//
//		arr[x4 + 1][y4 - 1] = 1;
//		arr[x4 - 1][y4 - 1] = 1;
//		arr[x4][y4 - 1] = 1;
//
//		if (arr[x][y] == 1)
//		{
//			count++;
//			c[i++] = count;
//
//		}
//		else
//		{
//			count = 0;
//		}
//	}
//	qsort(c, i, 4, compar);
//
//	printf("%d\n", c[0]);
//	return 0;
//}


//G
//有一个长度为 N 的数组，给定 L, R，将数组 L 到 R 范围内的数按绝对值大小从小到大排序，输出排序后的结果
//（若两个数符号不同，但绝对值相同，则负数在前）
//int main()
//{
//	int n, l, r;
//	//while (scanf("%d %d %d", &n, &l, &r) == 3)
//	while (scanf("%d %d %d", &n, &l, &r) != -1)
//	{
//		int* arr = (int*)malloc(4 * n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//
//		qsort(arr+l-1, r - l + 1, sizeof(int), compar);
//
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
