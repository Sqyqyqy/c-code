#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//7_29��Ŀ5 ����int(32λ)����m��n�Ķ����Ʊ����,�ж��ٸ�λ(bit)��ͬ
//int count(int a, int b)
//{
//	int i = 1;
//	int n = 1;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if ((n & a) != (n & b))//�б�Ҫ������(���ȼ�)
//		{
//			count++;
//		}
//		n = n << 1;
//	}
//	return count;
//}

//ʦ
//int count1(int m, int n)
//{
//	//���������ص��ǣ���ͬΪ0������Ϊ1
//	//
//	int ret = m ^ n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a,&b);
//	int ret = count(a, b);
//	printf("%d��%d�Ķ����Ʊ���У���%d��λ��ͬ\n", a,b,ret);
//	return 0;
//}
//10000000000000000000000000000000
//00000000000000000000000000001111


//7_30��Ŀ4
void print(int a)
{
	int i = 1;
	for (i = 0; i < 32; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", (a >> i) & 1);
		}
	}
	printf("\n");
	for (i = 0; i < 32; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d ", (a >> i) & 1);
		}
	}
	printf("\n");
}

//�Ľ����ң�
void print1(int a)
{
	int i = 1;
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i = i - 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int a;
	scanf("%d", &a);
	print1(a);
	return 0;
}


//7_30��Ŀ5 �����Ǿ����ж�
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10][10];
//	int i,j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				printf("NO\n");
//				return 0;
//			}
//		}
//	}
//	printf("YES\n");
//
//	//ʦ
////	int flag = 1;//�����������Ǿ���
////	for (i = 0; i < n; i++)
////	{
////		for (j = 0; j < n; j++)
////		{
////			if (arr[i][j] != 0)
////			{
////				flag = 0;
////				goto end;
////			}
////		}
////	}
////end:
////	if (flag == 0)
////		printf("NO\n");
////	else
////		printf("YES\n");
//	//a�����ѭ�����������Ļ� gotoһ�ξ���������
//	
//	return 0;
//}
//1 2 3 4
//0 3 2 4
//0 0 3 5
//0 0 0 3


//7_30��Ŀ6 ת������
//˼· ʮ����ת������
//10
//14

//10
//10/6 = 1...4
void change(int n)
{
	//if (n >= 6)
	//{
	//	change(n / 6);
	//	printf("%d", n % 6);
	//}
	//else
	//{
	//	printf("%d", n);
	//}
	
	//�Ľ�
	if (n)
	{
		change(n / 6);
		printf("%d", n % 6);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	change(n);
	return 0;
}
//a:���Դ浽�����ﵹ�Ŵ�ӡ