#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//������Ԫ�صĵ�ַ֮��Ĺ�ϵ�����ԣ�
//int main()
//{
//	char arr[] = "abc";
//	char* a = &arr[0];//����˭�ĵ�ַ
//	char* b = &arr[1];
//	char* c = &arr[2];
//	char* i = arr;
//	char d = *(i + 1);
//	printf("%p %p %p %p %c\n", a,b,c,i,d);
//	return 0;
//}//��� a��i��ֵ��һ�� a������Ԫ�صĵ�ַ����

//��д���������ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����Ҫ��
//	}
//	return count;
//
//	//��д
//	/*int i = 0;
//	while (str[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	return count;*/
//}

//��д��������������ʱ���������ַ����ĳ���

//�ݹ鷽��

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//	}
//	else
//		return 0;
//	return my_strlen(str) + 1;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//	return 0;
//}


//��n�Ľ׳�

//int fac(int n)
//{
//	if (n != 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 3;
//	int ans = fac(n);
//	printf("%d\n", ans);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}


//��n�Ľ׳�
//int Fac1(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac1(n - 1);
//	}
//
//}
//Ҳ�����÷ǵݹ�ķ�ʽ�����
//�ǵݹ�ķ�ʽ�е��� ѭ���ǵ�����һ�� ��ʾһ�����鷴������
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//���n��쳲�������

//쳲���������
//1 1 2 3 5 8 13 21 34 55 ..
//

//��쳲��������ǲ��ʺ�ʹ�õݹ�����--�ǵݹ�

//int count = 0;//ȫ�ֱ���
//
//int Fib(int n)
//{
//	if (n == 3)//����һ�µ�����쳲��������������˶��ٴ�
//		count++;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}

//�ո���ʵ��һ�ֵ����� ��������Ҳ��õݹ�ķ�ʽȥ���Ļ� �������������ÿ�ζ�Ҫ֪��ǰ����ÿ�ζ�Ҫǰ���� ���ظ�����
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	int i = 3;
//	int a = 1;
//	int b = 1;
//	int ret = 0;
//	while (i <= n)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//��ѭ��ȥ���Ч�ʸ���

//�й�ʽ�������õݹ�ķ�ʽд���� �������õݹ�д�����ǳ��� �Ǿ��õݹ�ȥд ��д����֮�����Ƿ�������������һЩȱ�ݵ� ����˵����Ч�ʺܵ� �Ǹ���ʱ��ݹ�Ͳ��ʺ������� ��Ӧ�øĳɷǵݹ�ķ�ʽ
//���д����û���������Ǿ��õݹ� ���������������ط����õݹ��������취�����

//Ҫ��������ֱ���й�ʽ�� �㿿�Ź�ʽ�ͺ������뵽�ݹ� ��εĻ��������������Ǻ������õݹ�ķ�ʽȥ���
//��ô�뵽�õݹ��������� �����ܲ����ô��»�С��˼·��˼��������� ���ǵݹ��һ��˼����ʽ
//�ݹ鲻�о��õ����ķ�ʽ�����


////��ŵ������
//
//void Han(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		printf("%c    %c\n",a,c);
//	}
//	else
//	{
//		Han(n - 1, a, c, b);
//		printf("%c    %c\n",a,c);
//		Han(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 4;
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//	Han(n,a,b,c);
//	return 0;
//}


//������̨����
//�ⷨһ��쳲���������
//int jup(int i)
//{
//	if (i <= 2)
//	{
//		return i;
//	}
//	else
//	{
//		return jup(i - 1) + jup(i - 2);
//	}
//}
//
//int main()
//{
//	int n = 5;
//	int ret = jup(n);
//	printf("%d\n", ret);
//	return 0;
//}

//�����оٵ�˼���Ƕȣ����������� Ҳ�ǵݹ鷽ʽ


//���鴫��
//������void test(int* brr)
//void test(int brr[])
//{
//	int a = 10;
//	int b = 20;
//	brr[0] = a;
//	brr[1] = b;
//}
////brr����Ԫ�صĵ�ַ brr[1]��ʵ��ͨ�������ַ�ҵ�������������±�Ϊ1��Ԫ�� ���ǰ����Ž�ȥ 
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int arr[2] = { 0 };
//	test(arr);
//	return 0;
//}


//7_24��Ŀ7
//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("����������׳�:>");
//	scanf("%d", &n);
//	int ret1 = Fac1(n);
//	printf("ret1 = %d\n", ret1);
//	int ret2 = Fac2(n);
//	printf("ret2 = %d\n", ret2);
//	return 0;
//}


//7_24��Ŀ8
//void print(int n)
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d ",n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//
//void m(char arr[][3])
//{
//	arr[0][0] = 'a';
//}
//
//int main()
//{
//	char arr[1][3] = { 0 };
//	m(arr);
//	printf("%c\n", arr[0][0]);
//	return 0;
//}