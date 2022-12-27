///////计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
//我
//int main()
//{
//	int i = 1;
//	//double n = 0.0;
//	double an = 0.0;
//	while (i <= 100)
//	{
//		//n = 1.0 / i;
//		if (i % 2 == 0)
//		{
//			an = an - 1.0/i;
//		}
//		else
//		{
//			an = an + 1.0/i;
//		}
//		i++;
//	}
//	printf("%lf\n", an);
//	return 0;
//}
//师
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	// 1/1+1/2+1/3...
//	// 1+0+0+0..= 1
//	printf("%lf\n", sum);
//	return 0;
//}


///////求10个整数中最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//这段代码有问题
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int n = 0;
//		for (n = 1; n <= i; n++)
//		{
//			int an = i * n;
//			printf("%d*%d=%-2d ", i, n, an);
//			if (n == i)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
//师
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//d和%中间出现一个2的话表示打印这个数字的时候直接打印两位 如果不够两位用空格补齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字

//#include<stdlib.h>
//#include<time.h>
//
//void menu()//(弹幕)void是函数的返回类型，表示这个函数不返回值
//{
//	printf("**************************************\n");
//	printf("******     1.play   0.exit      ******\n");
//	printf("**************************************\n");
//}
//
////RAND_MAX-32767//以0x开头的数字叫16进制数字
//
//void game()
//{
//	//1.生成一个随机数
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	//srand((unsigned int)time(NULL));//返回的这个值把他强制类型转换成unsigned int
//	                                  //代码放的位置有问题，srand这个生成随机数的起点，我们只要在整个代码里面设置一次就可以了，不要频繁的去设置这个生成起点
//	int ret = rand()%100+1;//生成1-100之间随机数
//	int guess = 0;//接受猜的数字
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//在主函数里调用一次就可以 整个程序跑起来的时候这个地方就把随机数生成起点设置好了 设置好之后后面用就可以了 只要调用一次就可以了这个srand 不要频繁的调用 放到这个game函数里面去的话玩一次游戏设置一次 并不是特别好(原因未解决)
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏的过程
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//自己完整打一遍
#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("****************************************\n");
//	printf("****      1.play        0.exit      ****\n");
//	printf("****************************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	//printf("%d\n", ret);
//	//printf("猜数字\n");
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("猜数字游戏，请选择：>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出游戏\n");
//		}
//		else if (input == 1)
//		{
//			printf("游戏开始\n");
//			game();
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}



//goto语句
//int main()
//{
//again:
//	printf("hello\n");
//	goto again;
//	return 0;
//}

//int main()
//{
//	printf("hello\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

//关机程序
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60  （一个系统命令 cmd command - 命令行）
//	//system()-这个函数是用来执行系统命令的 头文件是stdlib.h
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//也可用循环语句
