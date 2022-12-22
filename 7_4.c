#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0; 
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//常量
//int main()
//{
//	int num = 4;//变量
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	//3;//字面常量
//	//100;
//	//3.14;
//	return 0;
//}

//const修饰的常变量 具有常属性的变量
//int main()
//{
//	const int n = 10;// n是变量，但是又有常属性，所以我们说n是常变量
//	int arr[n] = { 0 };
//	//////int n = 10;
//	//////int arr[n] = { 0 };//错误 应输入常量表达式
//	////int arr[10] = {0}//创建数组
//	//const - 常属性
//	//(num是)const修饰的常变量
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	return 0;
//}
////输出：左值指定const对象

//#define定义的标识符常量
//#define MAX 10

//int main()
//{
//	//能不能放在定义数组的地方呢
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//枚举常量
//枚举-一一列举
//
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1，2，3，4，5，6，7

//枚举关键字 - enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", s);
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;//可以改
//	BLUE = 6;//错误 枚举常量是不能改的 大括号里面给定的这种枚举常量 他们是不能改的 但是通过这种枚举类型所创建的出来的这种变量 这是可以改的
//	return 0; 
//}


////字符串
//学那个char类型叫字符类型 但是我们并没有一个字符串类型
//int main()
//{
//	//字符串
//	"abcdef";
//	"hello bit";
//	"";//空字符串
//		return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//如果我要把这个字符串给存起来 这是一个字符串 是一串字符 如果我要把他存起来 那我应该放哪里去呢 如果有一块空间里面能够放很多个字符的话 那是不是就可以了 所以这个地方呢我们就想到了一个叫数组的概念啊 数组 数组其实就是一组数 那这个地方呢我们想说 那给个char类型的数组吧 名字叫arr1
//	                    //数组(一组数)
//	                    //那给个char类型的数组吧 名字叫arr1 方括号 他呢把我的"abc"这样一个字符串存起来 语法是支持的 你可以把一个字符串放到一个字符数组里面去
//	char arr2[] = { 'a','b','c',48,'\0'};//由单引号引起的’a’这叫一个字符’a’ 多个字符放到双引号里面这叫字符串
//	printf("%s\n", arr1);//打印字符串用的是%s
//	printf("%s\n", arr2);
//	return 0; 
//}  
////提取上端代码
//char arr1[] = "abc";
////"abc"--'a' 'b' 'c' '\0'--'\0'是字符串的结束标志 '\0'也是一个字符只不过这个字符的值是0(所以我放个\0也可以放个0也可以啊)
//char arr2[] = { 'a','b','c' };
////'\0' - 0
////'a' - 97
////每个这样的字符呢都有一个值
////数据在计算机上存储的时候，存储的是2进制
////#av$
////a - 97
////A - 65
////...
////ASCII 编码
////ASCII 码值 (这个字符所对的这个值)

#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//char arr2[] = {'a','b','c'};此时用strlen计算字符串长度是一个随机值

//转义字符
//int main()
//{
//	//printf("abc\n");
//	//printf("c:\\test\\32\\test.c");
//	//\t - 水平制表符
//	//printf("%c\n",''');
//	//我们应该让中间这个单引号不再是一对单引号里的单引号 而是一个普通的字符单引号 那怎么办呢 他的前面我加上斜杠 让他转义
//	printf("%c\n", '\'');
//
//	printf("%s\n", "\"");//让中间这个双引号其实是一个普通的双引号的字符
//	return 0;
//}

//\ddd
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//\t组合起来叫转义字符 他是一个(转义)字符
//	//\32 -- 32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的那个字符
//	//32 --> 10进制 26 ->作为ASCII码值代表的字符
//	printf("%c\n", '\32');
//	return 0;
//}

//\xdd
//int main()
//{
//	printf("%c\n", '\x61');//\x后面跟两个十六进制数字
//	//61 --> 97 - 'a'
//	//\x61是一个字符 他是个转义字符
//	return 0;
//}


//选择语句
//int main()
//{
//	int input = 0;
//	printf("你选择好好学习吗?(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//问题：scanf("%d\n",&input); 运行时输入有问题 CSDN上可查原因(未解决) 得结论：使用scanf函数是不需要加\n的，加了反而会出错


//循环语句 while语句
//int main()
//{
//	int line = 0;
//	while (line <20000)
//	{ 
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}



//函数 
//int Add(int x, int y)//Add叫函数名 写个int y来接收你传过来的b 后面的括号里面叫函数的参数
//{//当进到这个大括号这叫函数体 进到函数体
//	int z = x + y;
//	return z;//return z叫返回z 而返回的z是整型 那这个函数的返回类型这个地方呢我就要写成int
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0; 
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2; 
//	sum = Add(num1, num2); 
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	//以下是自己输的 可能和字符串的字符数有关 见笔记
//	//printf("%d\n",strlen("sum = %d\n", sum));
//	//printf("%d\n", 1);
//	return 0;
//}
//自定义函数 - 设计
//库函数


//数组
//int main()
//{
////	int a = 1;
////	int b = 2;
////	int c = 3;
////	int d = 4;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整型数字的数组
//	//char ch[20];//存20个字符
//	//float arr2[5];
//	printf("%d\n", arr[4]);//用下标的形式访问元素
//						   //arr[下标]; 
//	//0-9
//	int i = 0;//我怎么产生这个0-9的下标呢 我们这个地方给个循环变量 叫int i = 0
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}



//int main()
//{
//	//移(2进制)位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//0000000000000000000000000000001 a里面放的是1这样一个值 他放的2进制序列其实是这样一个2进制序列
//	int b = a << 1;
//	printf("%d\n", b);
//	printf("%d\n", a);//输出1 当我们对a进行左移或右移操作的时候 a本身是不变的啊 除非移完之后再赋给a本身 例如:b = a+1;
//	return 0;
//} 


//int main()
//{
//	//(2进制)位操作
//	//&按位与
//	//|按位或
//	//^按位异或
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//	
//	/*int a = 3;
//	int b = 5;
//	int c = a | b;*/
//
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//^不是次方的意思 - 是异或
//	//异或的计算规律：
//	//对应的二进制位相同，则为0
//	//对应的二进制位相异，则为1
//	//011
//	//101
//	//按位与
//	//001
//	//按位或
//	//111
//	//按位异或
//	//110
//	printf("%d\n", c);
//	return 0;
//}


//单目操作符 size of 用来计算一个变量或者类型的大小
//int main()
//{   //sizeof能算一个数组大小
//	int arr[10] = { 0 };//10个整型元素的数组
//	int sz = 0;
//	//10*sizeof(int) = 40
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数 的方式
//	//个数 = 数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	
//	//int a = 10;
//	////sizeof计算的是变量/类型所占空间的大小 单位是字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//等价
//	//printf("%d\n", sizeof a);//等价
//	////printf("%d\n", sizeof int);//错误写法 注意他使用上的一些习惯
//	return 0;
//}
