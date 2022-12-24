#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	//int ch = 0;
	//ctrl + z
	////EOF - end of file -> -1 文件结束标志
	////EOF解析见笔记
	//while ((ch = getchar()) != EOF)//getchar接收一个字符 (csdn)getchar返回的是字符的ascii值
	//{
	//	printf("%d ", ch);//我(测试)
	//	putchar(ch);
	//}

	//我(测试)
	//if ('H' == 72)
	//	printf("111\n");
	/*if ('^Z' == 26)
		printf("111\n");*/
		//if (EOF == -1)
		//	printf("111\n");

	//getchar 重要
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);//输入密码，并存放在password数组中
	
	//printf("%s111\n", password);//我(测试)
	////缓冲区还剩余一个'\n'
	////读取一下'\n'
	////getchar();//这个getchar函数会把字符读走
	////如果输入:123 ABCD 怎么办
	//int ch = 0;
	//while ((ch = getchar()) != '\n')
	//{
	//	;//;是一条空语句 不需要在循环里干什么事情
	//}
	//
	///*while (getchar() != '\n')
	//{
	//	getchar();
	//}*/ //我写的代码 不是最优待改善
	printf("请确认(Y/N)：>");
	ret = getchar();//Y/N
	//printf("%d\n", ret);//我(测试)
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}

	//printf("%d\n", '\n');

	//我(测试)
	//printf("%d\n",sizeof("akdasd"));
	//printf("%d\n", ' ');
	
	//我(测试)
	//char arr[] = { 'a','b','c',100 ,'\0'};
	//printf("%d\n", strlen(arr));

	//我(测试 大发现)
	//int a = getchar();
	//printf("%d", a);
	//putchar(a);
	//

	//int b = getchar();
	//putchar(b);
	//printf("%d", b);//我:回车既是输入完毕的命令 又被放在了输入缓冲区

	return 0;
}

//代码2
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//for循环
//int main()
//{
//	int i = 0;
//	//   初始化  判断  调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//不可在for循环体内修改循环变量，防止for循环失去控制
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n")
//	}
//	return 0;
//}

//建议for语句的循环控制变量的取值采用“前闭后开区间”写法（根据情况不是绝对）
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10 次循环
//	//10 次打印
//	//10 个元素
//	for (i = 0; i < 10; i++)//(i=0;i<=9;i++)前后都是闭区间
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//如果我们把判断部分给省略掉了 条件就变成恒为真了 可能会导致死循环
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//一些for循环的变种 变种1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//10*10 == 100个hehe
//	return 0;
//}
//省略i=0 j=0
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//变种2 用了两个循环变量来控制循环
//int main()
//{
//	//int x, y;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//逗号表达式
//	//{
//	//	printf("hehe\n");
//	//}
//	//我（测试）
//	/*int x = 0;
//	printf("%d\n", x++);*/
//	
//	//测试
//	//int x = 1;
//	//if (x = 0)//重要：不是判断 是赋值 把0赋值给了x 这个表达式的结果是k的值 k的值是0
//	//{
//	//	printf("111");
//	//}
//	//int x = 0;
//	//if (x)
//	//{
//	//	printf("111");
//	//}
//	
//	return 0;
//}
