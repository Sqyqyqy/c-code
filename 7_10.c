#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//дһ���������������Ľϴ�ֵ
//int Max(int x, int y)
//{
//	if (x > y)
//		//int maxa = x;//������䲻��������������
//		return x;
//	else
//		//int maxa = y;//������䲻��������������
//		return y;
//	//return maxa;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	/*if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);*/
//	int max = 0;
//	max = Max(num1, num2);//ͨ�����ķ���ֵ�ķ�ʽ�����ҽϴ�ֵ ������Сд��max������һ��Max��������ķ���ֵ
//	printf("max = %d\n", max);
//	return 0;
//}

//sizeof��Ŀ�������ع�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };//6*4=24
//	printf("%d\n", sizeof(arr));//��������Ĵ�С����λ���ֽ�
//	return 0;
//}


// ~��Ŀ������
//int main()
//{
//	int a = 1;//4���ֽڣ�32��bitλ
//	int b = ~a;//b��ʵ���з��ŵ�����
//	//~ --��(2����)λȡ��
//	//1010
//	//0101
//	//00000000000000000000000000000000
//	//(0����һ������������)
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111(�ڴ��������ǲ���)
//	//11111111111111111111111111111110(����)
//	//10000000000000000000000000000001(ԭ��)
//	printf("%d\n", b);//ʹ�õġ���ӡ������Ӧ�����������ԭ��
//	return 0;
//}
	//int a = 2; 
	//00000000000000000000000000000001
    //11111111111111111111111111111110
    //11111111111111111111111111111101
	//10000000000000000000000000000010
	//��ӡ������-2

//����Ҫ�Ĳ���
//11111111111111111111111111111111 ���2�������д�������1*2^32-1
//100000000000000000000000000000000
//1*2^32-1

//-1 -- ���� - 32
//1  -- ���� - 32
//[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] ����
//[0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][] ����
//�����͸��������з��ŵ� �з������浽�ڴ�����֮�����ǰ���2����������������λ�����涨�ɷ���λ

//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ�룬���룬���� ������ͬ ��Ҳ������Ϊ�����ԭ�� ���ڸ�����˵һ������ǲ���
//������
//ԭ��         -->         ����          -->         ����    
//ֱ�Ӱ�������        ԭ��ķ���λ����               ����+1�õ���
//д���Ķ���������    ����λ��λȡ���õ���
//-2
//10000000000000000000000000000010 - ԭ��
//11111111111111111111111111111101 - ����
//11111111111111111111111111111110 - ����


//ǰ�á�����++
//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	printf("a = %d b = %d\n", a, b);//11 10
//	return 0;
//}
//int b = ++a;//ǰ��++����++����ʹ��
//a = 11 b = 11

//(����) ǿ������ת��
//int main()
//{
//	int a = (int)3.14;//double --> int
//	return 0;
//}

//���������� exp1(����ʽ1) Ҳ����Ŀ������
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	return 0;
//}


// register�ؼ���
//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//	return 0;
//}

//signed�ؼ���
//int main()
//{
//	int a = 10;
//	a = -2;
//	//int����ı������з��ŵ� int��ʵ��signed int ͨ����signedʡ�Ե���
//	unsigned int num = 0;//�����޷�����(�޷��ŵ�����) �����������Զ��������
//	return 0;
//}

//typedef�ؼ���
//int main()
//{
//	//typedef - ���Ͷ��� - �����ض���(����������)
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//static�ؼ���

//1.static���ξֲ�����
//�ֲ��������������ڱ䳤 ��������������������������
//void test()
//{
//	static int a = 1;//����a����һ��static���ε�ʱ������˵���a����һ����̬�ľֲ�������
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	//printf("%d\n", a);//����δ�����ʶ��"a" (�ֲ��������������ڱ䳤����������������������������)
//	return 0;
//}

//2.static����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�� ����Դ�ļ���û����ʹ����
//int main()
//{
//	//extern - �����������ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//3.static���κ���
//Ҳ�Ǹı��˺�����������-����˵����׼ȷ
//static���κ����ı��˺�������������
//������һ�������Ǿ����ⲿ�������Ե� -> ������ڲ���������

//�����ⲿ����
extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}


/*
//#define �����ʶ������
//#define MAX 100

//#define ���Զ����-������
//����ʵ���ڱ�ʶ�������Ļ����ϼ���һ������

//������ʵ��
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//��Ķ���
#define MAX(X,Y) (X>Y?X:Y) //û�в�������

int main()
{
	//int a = MAX;
	int a = 10;  
	int b = 20;
	//����
	int max = Max(a, b);
	printf("max = %d\n", max);
	//��ķ�ʽ
	max = MAX(a, b);
	//��仰δ����������滻�������ӣ�
	//max = (a>b?a:b);
	printf("max = %d\n", max);
	return 0;
}
*/


//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��a�ĵ�ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	        //*p��ʵ����a
//	printf("a = %d\n", a);
//	
//	//��һ�ֱ�����������ŵ�ַ��-���ֱ����ͱ���Ϊָ����� ָ���������ר��������ŵ�ַ�� int*��p������
//	printf("%p\n", &a);//%p���ô�ӡ��ַ�� ���԰ѵ�ַ��ӡ������һ��
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//char*��int* ָ�����͵�����
//	printf("%d\n", sizeof(pc));
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
