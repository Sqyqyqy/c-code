#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�۲�
//int main()
//{
//	int a = 15;
//	int *pa = &a;
//	return 0;
//}

//�Ҳ���
//int main()
//{
//	//int* p;
//	//*p = 20;
//	//printf("%d\n", *p);//���� ʹ����δ��ʼ���ľֲ�����p
//
//	int arr[3] = { 0 };
//	*(arr + 3) = 30;
//	printf("%d\n", *(arr + 3));//��ʾ���Դ��� Χ�Ʊ���arr�Ķ�ջ����
//	return 0;
//}


//�� ����
//int main()
//{
//	//double arr1[5] = { 0 };
//	//arr1[6] = 10;//��:ָ��ƫ����ô�� ������ Ȩ����(�ɷ��ʵ�)8���ֽ�
//	//printf("%lf", arr1[6]);//��:arr��double���͵�ָ�� arr1[6]�൱��ָ��ƫ��6��double�� ָ��ƫ��Ȼ������� ���ʵ�8���ֽ� ��ӡӦ��Ҳ��8���ֽڣ���
//	
//	//int a = 0x11223344;//16����1λ�൱��4λ������ ��λ�൱��8λ�൱��һ���ֽ� 8λ16�����൱���ĸ��ֽ� �������������ܷ���(û����Ļ�)
//	//int* pa = &a;
//	//char* pc = &a;
//	
//  //����3
//	int arr2[5] = { 300,384,255,5,6 };
//	char* p = (char*)arr2;
//	char* p1 = (char*)(arr2 + 1);
//	char* p2 = (char*)(arr2 + 2);
//	printf("%d %d %d", *p,*p1,*p2);
//	return 0;
//}
//����3:
//300��16����:0000012c,�ڴ���:2c 01 00 00,short��ָ��pֻ�ܷ���һ���ֽڣ���ӡ2c(ʮ����λ44)
//256-383��ӡ�ǰ������������
//��384(00000180)��80(ʮ����128)����ӡ����ȴ��-128,δ���
//255(000000ff),ff(ʮ����255)����ӡ����ȴ��-1��δ���

//�Ͳ���3����
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}


//�Ҳ���
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	printf("%d\n",*(arr + 1));
//	printf("%d\n", *(&arr + 1));
//	return 0;
//}


//����Ԫ�ظ���
//1.�������ķ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str /*!= '\0'*/)//'\0'��ASCII��ֵΪ0
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.�ݹ�ķ���
//
////3.ָ��-ָ��
//int my_strlen3(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen3(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//�����ָ�����
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%d ", *p++);
//
//		//printf("%d ", *(p + i));
//
//		/*printf("%d ", *p);
//		p++;*/
//	}
//	return 0;
//}