//H
//有两个字符串 s1, s2，每一个字符串可以取出 k 个字符。
//你可以用任意顺序将这 2 × k 个字符拼接在一起，得到新字符串 s3。
//请你输出能得到的字典序最小的 s3
//int main()
//{
//	char s1[1001] = { 0 };
//	char s2[1001] = { 0 };
//
//	//while (scanf("%s %s", s1, s2) == 2)
//	while (scanf("%s %s", s1, s2) != -1)
//	{
//		int ls1 = strlen(s1);
//		int ls2 = strlen(s2);
//		int k;
//		scanf("%d", &k);
//		qsort(s1, ls1, sizeof(char), compar);
//		qsort(s2, ls2, sizeof(char), compar);
//		int i = 0;
//		int j = 0;
//		while (i < k && j < k)
//		{
//			if (s1[i] <= s1[j])
//			{
//				printf("%c", s1[i]);
//				i++;
//			}
//			else
//			{
//				printf("%c", s2[j]);
//				j++;
//			}
//		}
//		if (i == k)
//		{
//			while (j < k)
//			{
//				printf("%c", s2[j]);
//				j++;
//			}
//		}
//		else
//		{
//			while (i < k)
//			{
//				printf("%c", s2[i]);
//				i++;
//			}
//		}
//		printf("\n");
//		memset(s1, 0, ls1);
//		memset(s2, 0, ls2);
//	}
//
//	return 0;
//}


//I
//输入第一行一个整数 N，代表立方体的大小。
//数据保证 N 为奇数。
//数据范围：5 ≤ N ≤ 999
//int main()
//{
//	int n;
//	//while (scanf("%d", &n) == 1)//oj应该也可
//	while (scanf("%d", &n) != -1)
//	{
//		int a = (n - 5) / 2 + 2;
//		int b = (n - 5) / 2 + 3;
//		for (int i = 0; i < b; i++)
//		{
//			if (i == 0)
//			{
//				for (int j = 0; j < a; j++)
//				{
//					printf("  ");
//				}
//				for (int j = 0; j < n; j++)
//				{
//					printf("@ ");
//				}
//				printf("\n");
//				continue;
//			}
//
//			if (i == b - 1)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					printf("@ ");
//				}
//				for (int j = 0; j < (n - 5) / 2 + 1; j++)
//				{
//					printf(". ");
//				}
//				printf("@ \n");
//				continue;
//			}
//
//			for (int j = 0; j < b - 1 - i; j++)
//			{
//				printf("  ");
//			}
//			printf("@ ");
//			for (int j = 0; j < n - 2; j++)
//			{
//				printf(". ");
//			}
//			printf("@ ");
//			for (int j = 0; j < i - 1; j++)
//			{
//				printf(". ");
//			}
//			printf("@ ");
//			printf("\n");
//		}
//
//		for (int i = 0; i < (n - 5) / 2 + 2; i++)
//		{
//			printf("@ ");
//			for (int j = 0; j < n - 2; j++)
//			{
//				printf(". ");
//			}
//			printf("@ ");
//			for (int j = 0; j < (n - 5) / 2 + 1; j++)
//			{
//				printf(". ");
//			}
//			printf("@ \n");
//		}
//
//		for (int i = 0; i < (n - 5) / 2 + 1; i++)
//		{
//			printf("@ ");
//			for (int j = 0; j < n - 2; j++)
//			{
//				printf(". ");
//			}
//			printf("@ ");
//			for (int j = 0; j < (n - 5) / 2 + 0 - i; j++)
//			{
//				printf(". ");
//			}
//			printf("@ \n");
//		}
//		for (int j = 0; j < n; j++)
//		{
//			printf("@ ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//scanf返回值测试
//int main()
//{
//	//char s1[1001] = { 0 };
//	//char s2[1001] = { 0 };
//	//printf("%d\n", scanf("%s %s", s1, s2));
//	
//	int a, b;
//	printf("%d\n", scanf("%d %d", &a, &b));
//	if (feof(stdin))
//	{
//		printf("Error reading test.bin:unexpected end of file\n");
//	}
//	else if (ferror(stdin))
//	{
//		printf("Error reading test.bin\n");
//	}
//	//一开始输入a1
//	scanf("%d", &a);
//	char c;
//	scanf("%c", &c);
//	scanf("%d", &b);
//
//	return 0;
//}

