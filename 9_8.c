//8_02刷题8 字符串逆序 (重要)如何读入一个字符串
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* p, int sz)
//{
//	char* right = p + sz - 1;
//	char* left = p;
//	while (left < right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = {0};//我:这里应该必须初始化 否则里面放的是随机值而不是'\0' strlen统计时可能出问题
//	//scanf("%s", arr);//csdn:scanf遇到空格后就会停止扫描 这里使用gets这个函数获得标准输入流(键盘)上的字符串就不会出现这种问题
//	//法一
//	//gets(arr);//cplusplus:C标准在2011年从其规范中明确删除了此功能
//	int i = 0;
//	char tmp;
//	//法二
//	while ((tmp = getchar())!= 10)//scanf,gets都解决不了，这样写可以解决
//	{                             //while ((arr[i]= getchar())!= 10)这个代码有问题 会把换行也放到字符数组里
//		arr[i] = tmp;
//		i++;
//	}
//  //法三
//	scanf("%[^\n]", arr);//读到直到\n就停止(重要) 这种方法输入格式要求是字符串
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s", arr);
//	return 0; 
//}

//a
//int main()
//{
//	char arr[10001] = { 0 };//保证最后能放得下\0,\0才能截至
//	//scanf输入字符串，遇到空格默认认为结束了
//}

//8_02刷题9 打印菱形
//int main()
//{
//	//char arr1[] = "*************";//13
//	//char arr2[] = "             ";
//	int i = 0;
//	int z = 0;
//	for (i = 1; i <= 6; i++)
//	{
//		for (z = 1; z <= 7 - i; z++)
//		{
//			printf(" ");
//		}
//		for (z = 1; z <= 1 + 2 * (i - 1); z++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("*************\n");
//	for (i = 1; i <= 6; i++)
//	{
//		for (z = 1; z <= i; z++)
//		{
//			printf(" ");
//		}
//		for (z = 1; z <= 13 - 2 * i; z++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印任意大小的菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < line * 2 - 1 - (i + 1) * 2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8_02刷题10 求出0～100000之间的所有“水仙花数”并输出 (“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”)
#include<math.h>
#include<limits.h>
//INT_MAX

//int main()
//{
//	int num = 0;
//	for (num = 0; num <= 100000; num++)
//	{
//		int rem = num;
//		int n = 1;//考虑到0，n要初始化为1
//		while (num /= 10)//0一次都不进来，0还是1位数（出错点）
//		{                //num是循环变量，不要改变num（出错点）给个临时变量
//			n++;
//		}
//		int sum = 0;
//		num = rem;//出错点 前面对num的值做改变了 a:给个临时变量
//		while (num)
//		{
//			sum += (int)pow(num % 10, n);
//			num /= 10;
//		}
//		num = rem;//出错点 前面对num的值做改变了
//		if (sum == num)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
