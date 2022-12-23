#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	/*int age = 100;
//
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 13 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("长寿\n");
//	}*/
//
//	/*if (age < 18)
//		printf("未成年\n");
//	else if (age >= 13 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("长寿\n");*/
//
//	/*if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//
//	/*if (age < 18)
//		printf("未成年\n");*/
//	return 0;
//}


//练习
//1.判断一个数是否为奇数
//2.输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	/*while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//			i++;
//		}
//		else
//			i++;
//	}*/
//	return 0;
//} 


//switch语句
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);//3
//	//改变需求
//	//输入1-5输出工作日 输入6、7输出休息日
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//		if (n == 1)
//			printf("hehe\n");
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	//如果输入的不是我只处理的值
//	default://如果1234567都不能进去的话 那我就走default 走默认这种情况 我这给你提示一下说输入错误		printf("输入错误\n");
//		printf("输入错误\n");
//		break;
//	}
//	//case后面的break不一定要有
//	
//	/*switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break; 
//	}*/
//	/*if (1 == day)
//		printf("星期1\n");
//	else if (2 == day)
//		printf("星期2\n");
//	else if (3 == day)
//		printf("星期3\n");
//	else if (4 == day)
//		printf("星期4\n");*/
//	//..
//	return 0;
//}


//while循环
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		//i++;//continue跳上去的时候i是没有机会变的
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}*/
//	return 0;
//}

//代码1
int main()
{
	int ch = 0;
	//ctrl + z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}

//getchar putchar
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);//putchar在打印一个字符的时候其实跟我的printf是一样的
//	return 0;
//}
