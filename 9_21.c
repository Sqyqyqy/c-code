#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//7_30��Ŀ7 ������ɾ��ָ������
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (del != arr[i])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//��δ��ɾ��������ǰ��λ��û�з����ı䣬�����������ַ�ʽ�ǲ�̫���ʵġ�������

//���Ҫɾ�����Ԫ�����Ǹ���ôȥ��
//��
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del;
//	scanf("%d", &del);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//		{
//			if (i == n - 1)
//			{
//				count++;
//			}
//			else
//			{
//				int j = i;
//				for (j; j < n - 1; j++)//1 2 3 4 5 5
//				{
//					arr[j] = arr[j + 1];
//				}
//				count++;
//			}
//		}
//	}
//	for(i = 0;i < n - count;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//a:˫�±�ķ�ʽһ��ȥ����һ��ȥ�洢


////7_30��Ŀ8 n��m�����Լ������С������֮�� (long long���͵�ʹ��)
//int main()
//{
//	long long m, n;
//	scanf("%lld %lld", &m, &n);
//	long long mul = m * n;
//	if (n > m)
//	{
//		int tmp = n;
//		n = m;
//		m = tmp;
//	}//m / n = 
//	while (m % n)
//	{
//		int y = m % n;
//		m = n;
//		n = y;
//	}
//	////a���Ľ�
//	//int y = 0;
//	//while (y = m % n)
//	//{
//	//	m = n;
//	//	n = y;
//	//}
//	int com_div = n;//���Լ��
//	long long com_mul = mul / com_div;//��С������:��ʽ��,�������ĳ˻������������������Լ������С�������Ļ�
//	printf("%lld\n", com_div + com_mul);
//	return 0;
//}

//����
//int main()
//{
//	long long m, n;
//	scanf("%lld %lld", &m, &n);//"%d %d"�������� Ϊʲô����
//	long long c = m * n;
//	return 0;
//}