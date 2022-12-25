//练习1
//1.计算n的阶乘
//int main()
//{
//	int i = 1;
//	int begin = 1;
//
//	//int n = scanf("%d",&n);//不能这么写 见笔记 (重要)
//	int n = 0;
//	scanf("%d", &n);//不考虑溢出的情况 n输入100 100的阶乘完全可能在一个整型里放不下 放不下时算出的结果就是错误的
//	for (i = 1; i <= n; i++)
//	{
//		begin = begin * i;
//	}
//	printf("%d\n", begin);
//
//	//我（测试1）
//	/*int a = scanf("%d",&a);
//	printf("%d\n", a);*/
//	//测试2
//	/*int a, b = 3;
//	printf("%d\n", b);*/
//
//	return 0;
//}

//练习2
//int main()
//{
//	int i = 1;
//	int begin = 1;
//	int n = 0;
//	int sum = 0;
//	//scanf("%d", &n);
//	//1 + 2 + 6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		begin = 1;
//		for (i = 1; i <= n; i++)
//		{
//			begin = begin * i;
//		}
//		//n的阶乘
//		sum += begin;
//	}
//	//begin = 1*1 = 1
//	//begin = 1*1*2 = 2
//	//begin = 1*1*2*3 = 6
//	printf("%d\n", sum);
//	return 0;
//}
//这样写比较浪费资源和时间 效率一点都不高 （每次都要从1开始乘 做了很多重复的工作）
//int main()
//{
//	//int i = 1;
//	//int begin = 1;
//	//int n = 0;
//	//int sum = 0;
//	////1 + 2 + 6 = 9
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	begin = begin * n;
//	//	sum = sum + begin;
//
//	//}
//	//printf("sum = %d\n", sum);
//
//	char arr[] = {'1','2','3','\0'};
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//不同的算法带来的不同体验

//练习3
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)//如果能够找到的话，这个地方的i是不是一定是小于sz的
//		printf("找不到\n");
//	return 0;
//}
//这种写法不够高效 因为数组是有序的数组 有序无序从第一个往后遍历去找都可以 如果有序再这样去找有点太啰嗦
//举例子
//买了一双鞋：500
//1 2 3 4 5 6 ... 500肯定是不会那么猜的 因为那么猜的效率太低了
//250 375猜一下 被猜的范围就缩小一半
//查一次去掉一半的算法叫折半查找算法或者叫二分查找算法
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 10;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//右下标
//	int left = 0;//左下标
//	int num = 0;
//	while (left != right)//师：while(left<=right)
//	{
//		num = (left + right) / 2;
//		if (arr[num] == k)
//		{
//			printf("找到了，下标是:%d\n", num);
//			break;
//		}
//		else if (arr[num] < k)
//		{
//			left = num + 1;
//		}
//		else if (arr[num] > k)
//		{
//			right = num - 1;
//		}
//	}
//	//if (arr[num] != k && arr[left] != k)     //an：if(left>right)
//	//	printf("找不到\n");                    //    {
//	//else if (arr[num] != k && arr[left] == k)//		printf("找不到\n")；
//	//	printf("找到了，下标是:%d\n", left);   //    }
//	if (arr[num] != k)
//	{
//		if (arr[left] != k)
//			printf("找不到\n");
//		else
//			printf("找到了，下标是:%d\n", left);
//	}
//
//	//我（测试）
//	/*int a = 10/3;
//	printf("%d\n",a);*/
//	
//	return 0;
//}


//练习4
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";//arr1数组元素个数不给定 拿后面这个字符串来初始化他 这个字符串要求我们需要多少空间 这个数组就会计算他自己就会开辟多少空间出来
//	char arr2[] = "####################";
//	//char arr[] = "abc";
//	//[a b c \0] 其实你给这个数组里面放了四个元素 这个数组是四个元素的
//	// 0 1 2  3
//	//如果计算这个数组的元素个数的话 数组的元素个数会算出4
//	//4-2
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//易错 -1得到的其实是\0的下标
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒(每打印一次之后停留一秒)
//		Sleep(1000);//单位是毫秒 表示休息一千毫秒 想使用Sleep函数得引个头文件
//		system("cls");//这个函数是用来执行系统命令的 - cls - 清空屏幕  库函数得引头文件
//		left += 1;
//		right -= 1;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp 头文件是string.h 对于两个字符串比较相等绝对不能用等号
//		{                                   //如果相等会返回一个0 如果第一个字符串大于第二个字符串他会返回一个大于0的数字 如果小于他会返回一个小于0的数字
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//} 
