#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//��һά����ģ��һ����ά���飨��Ҫ��
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//	int* arr[] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8_1ˢ��2 �ж��ǲ�����ĸ
#include <stdio.h>
#include<string.h>

//int main() {
//	//int a;//����ط������ͽ���getchar������ʵ�
//	//while ((a = getchar()) != EOF)
//	//{
//	//	if ((a >= 65 && a <= 90) || (a >= 'a' && a <= 'z'))
//	//		printf("%c is an alphabet.\n", a);
//	//	else if(a != 10)//1.�س�Ӧ��Ҳ�ᱻ��� �Ҽǵûس�����������ϵ�ָ�����˼ Ҳ��һ���ַ� �ᱻ��ȡ���������Ctrl+zǰ����δ����ȡ���ַ� �Ͳ���ֹͣ����һ�������֤��
//	//		printf("%c is not an alphabet.\n", a);
//	//	//getchar();//2.a:�����������������ж����\n
//	//}
//
//	//scanfҲ���Զ�����
//	char a = 0;
//	while (scanf("%c", &a) == 1)//scanf��%c����ʽ����ʱ��,�ڻ��������濴��'\n'Ҳ��ֱ�Ӷ���
//	{     //3.����������ʽ�̶���Ҳ����д��scanf("%c\n",&a)
//		if ((a >= 65 && a <= 90) || (a >= 'a' && a <= 'z'))
//			printf("%c is an alphabet.\n", a);
//		else
//			printf("%c is not an alphabet.\n", a);
//		getchar();//������Ȼ��Ҫ��������
//	}
//	return 0;
//}

//���� δ��� �������ѭ��
//int main()
//{
//	int a;
//	int count = 1;
//	while (scanf("%d", &a) != EOF)
//	{
//		printf("%d\n",count++);
//	}
//
//	//char a;
//	//int count = 1;
//	//while (scanf("%c", &a) != EOF)
//	//{
//	//	printf("%d\n", count++);
//	//}
//	return 0;
//}

//���� scanf��%c����ʽ����ʱ���´ι������\n���ߣ�����%d����ʽ���Ͳ���
//int main()
//{
//	//char a = 0;
//	//printf("%d\n", scanf("%c", &a));
//	//char b = 0;
//	//printf("%d\n", scanf("%c", &b));
//
//	//�Ա�
//	char a = 0;
//	printf("%d\n", scanf("%c", &a));
//	int b = 0;
//	printf("%d\n", scanf("%d", &b));
//	return 0;
//}


//8_1ˢ��3 ��ĸ��Сдת��
//�ÿ⺯��ֱ�ӿ��Խ�� <ctype.h> isalpha
//#include <stdio.h>
//
//int main()
//{
//	char word;
//	while ((word = getchar()) != EOF)
//	{
//		if ((word >= 65 && word <= 90))
//		{
//			printf("%c\n", word + 32);
//		}
//		else if (word >= 97 && word <= 122)
//		{
//			printf("%c\n", word - 32);
//		}
//	}
//	return 0;
//}

//�ÿ⺯�� (�ַ������ת������) ʹ�ÿ⺯��Ч�ʸ���
//int main()
//{
//	char word;
//	while ((word = getchar()) != EOF)
//	{
//		if (isupper(word))
//		{
//			printf("%c\n", tolower(word));
//		}
//		else if (islower(word))
//		{
//			printf("%c\n",toupper(word));
//		}
//		//����Ӧ�ò��ô���\n�˰�
//	}
//	return 0;
//}

//����
//int main()
//{
//	char a = -1;
//	printf("%d\n", a);//��ӡ-1
//
//	char b = getchar();
//	printf("%d\n", b);//����ctrl+Z��ӡ-1
//	return 0;
//}