#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	//double d = 3.14;
//	//double* pd = &d;//32-4   64-8
//	//printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//
//	//int a = 10;//���ڴ�������4���ֽڵĿռ�
//	////printf("%p\n", &a);
//	//int* p = &a;//p��һ������-ָ�����
//	////printf("%p\n", p);
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	return 0;
//}
//����p��������int* ���ʱӦ�ò�ֿ�����*����˼�Ǹ�����˵p��һ��ָ����� int˵��pָ����Ǹ�����a��������int
//*p *����һ�������� ������������������ָ�����p


/*
//�ṹ��
//���Ӷ��� -- �ýṹ�������� -- �ṹ���������Լ����������һ������
//
//����һ���ṹ������
struct Book//Book��������
{//�ô����Ű����й������������ԾͰ���������
	char name[20];//C���Գ������
	short price;//55
};
//���������������

//����Ĵ����һ����
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ��������� (����һ��������ô������ô������ֵ)
	struct Book b1 = { "C���Գ������",55 };
	//printf("����:%s\n", b1.name);
	//printf("�۸�:%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�:%d\n", b1.price);
	
	//struct Book* pb = &b1;//struct Book*��ʵ����һ��ָ�������� ����ָ�����Ͷ�����һ��������pb pb�Ǹ�ָ����� ����ָ����b1
	//����pb��ӡ���ҵ������ͼ۸�
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//.      �ṹ�����.��Ա
	//->     �ṹ��ָ��->��Ա

	//b1.name = "C++";//error
	strcpy(b1.name, "C++");//strcpy-string copy -�ַ�������-����һ���⺯��-string.h
	printf("%s\n", b1.name);
	//name�ɲ���һ������������һ������ ��������ʵ��������һ����ַ�� ��������ط���������Ҫ�����name���¸���һ�����ֵĻ� ���������һ������ ��һ���µ��ַ��������ŵ�name����ȥ
	//b1.price = 15;//���price���Ը� ��Ϊע�����price�б��� �����ǿ���ֱ�ӽ���������ֵ�ĶԲ���
	//����˵����ط���Ա��һ���ַ����� ������һ����ֵ��ʽ��������strcpy�� 
	return 0;
}
*/

int main()
{
	char arr[] = "abc";
	printf("%s\n", arr);
	//arr = "bca";//error
	strcpy(arr, "bac");
	printf("%s\n",arr);
	return 0;
}