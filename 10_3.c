#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//���� ���������п��Է����ͱ���
//int main()
//{
//	int a = 10;
//	int arr[3] = { 1,2,a };
//	printf("%d\n", arr[2]);
//	return 0;
//}


//����ָ�������ʹ��
//дһ�������� ʵ�������ļӡ������ˡ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*****1.add        2.sub*****\n");
//	printf("*****3.mul        4.div*****\n");
//	printf("*****0.exit          *******\n");
//	printf("****************************\n");
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//ʹ�ú���ָ������ �򻯴���
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//����ָ������ - ת�Ʊ�
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}


//ָ����ָ�������ָ��
//int arr[4];
//int(*p)[4];
//���
//int(*p[4])(int,int);
//int(*(*p)[4])(int,int);


//����qsort����ṹ������ - �ֱ����ֺ���������
#include<stdlib.h>
#include<string.h>

int cmp_int(const void* x, const void* y)
{
	return (*(int*)x - *(int*)y);
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test1()
{
	int arr[] = { 3,1,2,4,6,5,7,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int compare_str_by_name(const void* x, const void* y)
{
	return strcmp(((struct Stu*)x)->name, ((struct Stu*)y)->name);
}

int compare_str_by_age(const void* x, const void* y)
{
	return ((struct Stu*)x)->age - ((struct Stu*)y)->age;//�뽵��ı�˳�����
}

void test2()
{
	//����s���������ߵ�����
	struct Stu s[] = { {"zhang",20},{"li",55},{"wang",40} };//�ṹ������
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), compare_str_by_name);
	                           //�ṩ�ȽϷ���
	qsort(s, sz, sizeof(s[0]), compare_str_by_age);
	
	//���ڽṹ������Ĳ���
	//���� ����������Ԫ�صĵ�ַ(����Ϊ1��Ԫ��1���ṹ���С)
	//printf("%x\n", s);//������ - ��ַ
	//printf("%x\n", &s[0]);//��ַ
	//printf("%x\n", s+1);//��24
	
	//���� s[0]����Ԫ�أ��൱��*(s+0)��������Ԫ�صĵ�ַ
	//printf("%d\n", s[0]->age);//err
	//printf("%d\n", (&s[0])->age);//ok
	//printf("%d\n", s[0].age);//ok

	//���� s[0].name���ַ�������Ԫ�صĵ�ַ
	//printf("%c\n", *s[0].name);//��ӡz
	//printf("%c\n", *(s[0].name));//��ӡh
	//printf("%p\n", s[0].name);
	//printf("%p\n", s[0].name+1);//���1

	//strcmp����
	//char arr1[] = "abc";
	//char arr2[] = "adc";
	//printf("%d\n",strcmp(arr1, arr2));//���-1 lower

	//�ṹ������ָ������ò���
	//struct Stu a = { "wang",20 };
	//struct Stu * p = &a;
	//printf("%d\n",(*p).age);
}


void Swap(char*buf1, char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//��ð������˼��ʵ��qsort����
void bubble_sort(void* base, int sz, int width,int(*cmp)(const void*, const void*))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{   //��ȡ�Ƚ�ģ�飬��װ�������Ƚ�
			if (cmp((char*)base + j * width, ((char*)base) + (j+1) * width) > 0)
			{ 
				//����
				Swap((char*)base + j * width, ((char*)base) + (j + 1) * width, width);
			}
		}
	}
}

void test3()
{
	int arr[] = { 3,1,2,4,6,5,7,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

void test4()
{
	struct Stu s[] = { {"zhang",20},{"li",55},{"wang",40} };//�ṹ������
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), compare_str_by_age);
	bubble_sort(s, sz, sizeof(s[0]), compare_str_by_name);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}