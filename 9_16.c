#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//7_25��Ŀ5 ���
//#include<stdio.h>
//long long sum(long long n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + sum(n - 1);
//}
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long ret = sum(n);
//	printf("%lld\n", ret);
//	return 0;
//}


//7_25��Ŀ6 ��������N��Ȼ������N������������N�����ĺ͡�
//�ݹ�ʵ��
//int sum(int arr[])
//{
//	if (*arr != 0)
//	{
//		return *arr + sum(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int arr[50] = {0};//���ﲻ��ʼ���Ļ� �����Ի��������ֵ ���Ƿ���0 char����ʼ��Ҳ���Ƿ���0
//	int N = 0;
//	scanf("%d", &N);
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", arr+i);
//	}
//	printf("%d\n", sum(arr));
//	return 0;
//}
//arr[1]������ڶ���Ԫ�صĵ�ַ�𣿣������ǰɣ�&arr[1]�ǣ�

//����ĳ�ʼ��(����)
//-------------------------------------------
//int main()
//{
//	char arr1[5];
//	scanf("%c", arr1);
//
//	int arr3[5];
//	scanf("%d", arr3);
//
//	int arr4[5] = { 1 };
//	char arr2[5] = {'a'};
//	return 0;
//}
//-------------------------------------------

//�ǵݹ�ʵ��
//int main()
//{
//	int arr[50];//���ﲻ��ʼ���Ļ� �����Ի��������ֵ ���Ƿ���0 char����ʼ��Ҳ���Ƿ���0
//	int N = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", arr + i);
//		sum = sum + *(arr + i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//7_25��Ŀ7 �ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ݹ�ʵ��
//int fibo(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibo(n - 1) + fibo(n - 2);
//	}
//}
//
//int main()
//{
//	//1 1 2 3 5 8 13
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fibo(n);
//	printf("%d\n", ret);
//	return 0;
//}

//�ǵݹ�ʵ��
//int main()
//{
//	//1 1 2 3 5 8 13
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	int i = 2;
//	int a = 1;
//	int b = 1;
//	while(i<n)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		i++;
//	}
//	printf("%d", ret);
//	if (n < 3)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//����
//int main()
//{
//	int a[][3] = { {0,1,2},{3,4,5} };
//	//int a[][3] = { {0,2},{},{3,4,5} };//δ���
//	return 0;
//}


//7_26��Ŀ9 ��������
//void change(char A[], char B[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//}
//
//int main()
//{
//	char A[] = "abc";
//	char B[] = "123";
//	int sz = sizeof(A) / sizeof(A[0]) - 1;
//	change(A, B,sz);
//	printf("A = %s B = %s\n", A, B);
//	return 0;
//}


//7_26��Ŀ10 �������
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//��ӡ�����ÿ��Ԫ��
//
//	reverse(arr, sz);//����Ԫ�ص�����
//	print(arr, sz);//��ӡ�����ÿ��Ԫ��
//	
//	init(arr,sz);//��ʼ������Ϊȫ0
//	print(arr,sz);//��ӡ�����ÿ��Ԫ��
//
//	return 0;
//}
