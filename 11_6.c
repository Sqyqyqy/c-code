//调整奇数偶数顺序
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序
//使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* left = (int*)calloc(sz, sizeof(int));//能用变长数组更方便
//	if (left == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int* right = left + sz - 1;
//	int* rem = left;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			*left = arr[i];
//			left++;
//		}
//		else
//		{
//			*right = arr[i];
//			right--;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", rem[i]);
//	}
//	free(rem);
//	rem = NULL;
//	left = NULL;
//	right = NULL;
//	return 0;
//}

//上述方法并未真正改变原数组内容
//方法二
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* left = arr;
//	int* right = arr + sz - 1;
//	while (left < right)
//	{
//		while (*left % 2 == 1)//left从前往后找，找到一个偶数后停止
//		{
//			left++;
//		}
//		while (*right % 2 == 0)//right从后往前找，找到一个奇数后停止
//		{
//			right--;
//		}
//		//1 2 3 4 5 6 7 8 9 10
//		if ((left < right)/* &&(*left % 2 == 0) && (*right % 2 == 1)*/)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++;
//			right--;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}


//输入一个整数序列，判断是否是有序序列
//有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int mem1 = 0;
//	scanf("%d", &mem1);
//	int mem2 = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int count_all = 0;
//	for (int i = 0; i < n-1; i++)
//	{
//		scanf("%d", &mem2);
//		count_all++;
//		if (mem1 >= mem2)
//		{
//			count1++;
//		}
//		if (mem1 <= mem2)
//		{
//			count2++;
//		}
//		mem1 = mem2;
//
//		if (count1 != count_all && count2 != count_all)
//			break;
//	
//	}
//	if (count1 == count_all || count2 == count_all)
//	{
//		printf("sorted\n");
//	}
//	else
//		printf("unsorted\n");
//	return 0;
//}


//the next day
//-----------------------------------------------------------

//猜名次
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//int main()
//{
//	for (int a = 1; a <= 5; a++)
//	{
//		for (int b = 1; b <= 5; b++)
//		{
//			for (int c = 1; c <= 5; c++)
//			{
//				for (int d = 1;d <= 5; d++)
//				{
//					for (int e = 1; e <= 5; e++)
//					{
//						if (((b == 2) || (a == 3)) && ((b == 2) || (e == 4)) && ((c == 1) || (d == 2)) && ((c == 5) || (d == 3)) && ((e == 4) || (a == 1)) && (a+b+c+d+e == 15) && (a*b*c*d*e == 120))
//							printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//猜凶手
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//if ((guess != 'a') + (guess == 'c') + (guess == 'd') + (guess != 'd') == 3)


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O(N);
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int find = 0;
//	scanf("%d", &find);
//	int i = 0;
//	int j = 2;
//	while (i <= 2 && j >= 0)
//	{
//		if (arr[i][j] > find)
//		{
//			j--;
//		}
//		else if (arr[i][j] < find)
//		{
//			i++;
//		}
//		else
//		{
//			printf("找到了，下标是:%d %d", i, j);
//			break;
//		}
//	}
//
//	return 0;
//}


//模拟实现strlen
#include<assert.h>
//size_t my_strlen(const char* p)
//{
//	assert(p);
//	const char* pc = p;
//	int count = 0;
//	while (*pc)
//	{
//		count++;
//		pc++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefghi";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


#include<string.h>
//模拟实现strcpy
#include<assert.h>
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des&&src);
//	char* rem = des;
//	while (*(des++) = *(src++))
//	{
//		;
//	}
//	return rem;
//}
//
//int main()
//{
//	char des[10] = "123";
//	char src[] = "abcdef";
//
//	printf("%s\n", my_strcpy(des, src));
//
//	return 0;
//}


//模拟实现strcmp
#include<assert.h>
//int my_strcmp(const char* pc1,const char* pc2)
//{
//	assert(pc1&&pc2);
//	//"abcde" "abcdf"
//	while (*pc1 == *pc2)//走到不相等停下(重要)
//	{
//		if (*pc1 == 0)
//		{
//			return 0;
//		}
//		pc1++;
//		pc2++;
//	}
//	if (*pc1 > *pc2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abcdf";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//


//模拟实现strcat
#include<assert.h>
//char* my_strcat(char* des, const char* src)
//{
//	assert(des&&src);
//	char* rem = des;
//	while (*(des++) != 0)//走到des的0停下（从哪开始追加）
//	{
//		;
//	}
//	des--;
//	while (*(des++) = *(src++))//走到src的0停下（什么时候追加停止）
//	{
//		;
//	}
//	return rem;
//}
//
//int main()
//{
//	char des[20] = "hello ";
//	char src[] = "world";
//	printf("%s\n", my_strcat(des, src));
//	return 0;
//}


//模拟实现strstr
//char* my_strstr(const char* str1,const char* str2)
//{
//	
//}
//
//int main()
//{
//	char* p = my_strstr("abcdef", "cde");
//	if (p == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", p);
//	}
//
// 	return 0;
//}
//kmp
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* Getnext(char* son, int sz_son)
{
	int* next = (int*)malloc(sizeof(int)*sz_son);
	next[0] = -1;
	next[1] = 0;
	int lef = 0;
	int rig = 1;
	while (rig <= sz_son - 2)
	{
		if (son[lef] == son[rig])
		{
			next[rig + 1] = next[rig] + 1;
			lef++;
			rig++;
		}
		else
		{
			lef = 0;
			next[rig + 1] = 0;
			rig++;
		}
	}
	return next;
}

char* Find(char* fa, char* son, int sz_fa, int sz_son)
{
	int i = 0;//fa
	int j = 0;//son
	int* next = Getnext(son, sz_son);
	while (i < sz_fa && j < sz_son)
	{
		if (fa[i] == son[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
			if (j == -1)
			{
				j++;
				i++;
			}
		}
	}

	if (j == sz_son)
	{
		return &fa[i - sz_son];
	}
	else
	{
		return NULL;
	}

	free(next);
	next = NULL;
}

int main()
{
	char father[] = "abfdabef";
	char son[] = "dabe";
	char* ret = Find(father, son, strlen(father), strlen(son));
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}
