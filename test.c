//����һ����stdio.h���ļ�
//std-��׼ standard input output
//#include<stdio.h>
//int�����͵���˼
//mainǰ���int��ʾmain��������֮�󷵻�һ������ֵ
//int main()//���������������ڡ�main�������ҽ���һ��
//{
//	//�����������
//	//����Ļ�����hello world
//	//������print function��printf����ӡ����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���-���к�
//	//#include
//	printf("hello world\n");
//	return 0;//����0 �����ͣ�
//} 
//����д���ǹ�ʱ��д��
//void main()
//{

//}
#include <stdio.h>

//char-�ַ�����
//int main()
//{
//	//char ch = 'A';//�ڴ� ch��ʵ�������ڴ�������һ��ռ� ����ռ��������������һ�����ֽ�ch 
//	//printf("%c\n", ch);//%c������ӡ�ַ���ʽ������
//	//return 0;
//	
//	//int age = 20;
//	//printf("%d\n", age);//%d������ӡ����ʮ�������� ��ӡage���������ֵ
//	//return 0;
//
//	//long ������
//	//long num = 100;
//	//printf("%d\n", num);
//	//return 0;
//
//	//float f = 5.0;
//	//printf("%f\n", f);
//	//return 0;
//
//	double d = 3.14;
//	printf("%lf\n", d);//������%f ����׼ȷ����ʽ��%lf
//	return 0;
//}
//int  main()
//{
//	printf("%d\n", sizeof(char));//char �����������ڴ�����ռ�Ļ� �ܹ�������Ŀռ� //1 1���ֽ�
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4(4/8)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//int main()
//{
//	//���� 20
//	short age = 20;//���ڴ�����2���ֽ�=16��bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С��
//	                     //95.6Ĭ�ϱ���������Ϊ����double���ͣ���Ҫ��double���͵�����һ��С���ŵ�float����ȥ���ʱ��ᷢ��һ�����ȵĶ�ʧ
//}                        //�����ֻ����95.6��һ�������ȸ����͵Ļ��������ĺ���Ӹ�f�Ϳ����ˣ��������ȷ��ָ��95.6�Ǹ�float������

//int num2 = 20;//ȫ�ֱ���-�����ڴ����({})֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ����(�����ָ�ľ���һ��{})�ڲ��ı���
//	return 0;
//}

//int a = 100;//ȫ�ֱ���
//int main()
//{
//	int a = 10;//�ֲ�����
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n", a);
//	return 0;
//}
////��ӡ������10 ˵���ֲ�������ȫ�ֱ�������ͬʱ����

//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}
////a�����ڷ�Χ֮��ʹ��

//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����&
//	//int sum = num1 + num2;//������������дҲû����d
//	//int sum = 0;����Ķ���λ��
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num 1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//������������
//int num = 0;
//int main()
//{
//	{
//		int num = 0;//���num��������������Ĵ����� �ֲ���������������������ڵ�����ֲ��Ĵ�����ڲ�
//	}
//	//int num = 0;
//	printf("num = %d\n", num); 
//	//�ֲ�������������
//	int mun = 0;
//	{
//		printf("num = %d\n", num);
//	}
//	return 0;
//}//���num��ǰ�Ƕ���������������ڲ� �Ǿ�������������ڲ�������λ�ö�����ʹ��
//
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test()
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//g_val��δ�����ı�ʶ��
//	//������Ϊ�˽���������δ�����ı�ʶ�� �����ǲ��Ǿ�����һ�� extern����ؼ��־������������ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
 
//�ֲ���������������
int main()
{
	{//�����������������Ǵ����ȥ�������ڿ�ʼ
		int a = 10;
		printf("a = %d\n", a);//ok
	}//�����ȥ��ʱ���������ڽ���
	printf("a = %d\n", a);//error
	return 0;
}

