//包含一个叫stdio.h的文件
//std-标准 standard input output
//#include<stdio.h>
//int是整型的意思
//main前面的int表示main函数调用之后返回一个整型值
//int main()//主函数—程序的入口—main函数有且仅有一个
//{
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数—print function—printf—打印函数
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西-打招呼
//	//#include
//	printf("hello world\n");
//	return 0;//返回0 （整型）
//} 
//这种写法是过时的写法
//void main()
//{

//}
#include <stdio.h>

//char-字符类型
//int main()
//{
//	//char ch = 'A';//内存 ch其实就是向内存申请了一块空间 这个空间的名字我们起了一个名字叫ch 
//	//printf("%c\n", ch);//%c——打印字符格式的数据
//	//return 0;
//	
//	//int age = 20;
//	//printf("%d\n", age);//%d——打印整型十进制数据 打印age这个变量的值
//	//return 0;
//
//	//long 长整型
//	//long num = 100;
//	//printf("%d\n", num);
//	//return 0;
//
//	//float f = 5.0;
//	//printf("%f\n", f);
//	//return 0;
//
//	double d = 3.14;
//	printf("%lf\n", d);//可以用%f 但最准确的形式是%lf
//	return 0;
//}
//int  main()
//{
//	printf("%d\n", sizeof(char));//char 这种类型向内存申请空间的话 能够申请多大的空间 //1 1个字节
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4(4/8)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//int main()
//{
//	//年龄 20
//	short age = 20;//向内存申请2个字节=16个bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//	                     //95.6默认编译器会认为他是double类型，你要把double类型的这样一个小数放到float里面去这个时候会发生一个精度的丢失
//}                        //如果你只想让95.6是一个单精度浮点型的话你在他的后面加个f就可以了，这就我明确的指定95.6是个float类型了

//int num2 = 20;//全局变量-定义在代码块({})之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块(代码块指的就是一对{})内部的变量
//	return 0;
//}

//int a = 100;//全局变量
//int main()
//{
//	int a = 10;//局部变量
//	//局部变量和全局变量的名字建议不要相同—容易误会，产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}
////打印出来是10 说明局部变量和全局变量可以同时存在

//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}
////a不能在范围之外使用

//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf_s("%d%d", &num1, &num2);//取地址符号&
//	//int sum = num1 + num2;//或者下面这样写也没问题d
//	//int sum = 0;错误的定义位置
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num 1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//变量的作用域
//int num = 0;
//int main()
//{
//	{
//		int num = 0;//这个num的作用域就是他的大括号 局部变量的作用域就是他所在的这个局部的代码块内部
//	}
//	//int num = 0;
//	printf("num = %d\n", num); 
//	//局部变量的作用域
//	int mun = 0;
//	{
//		printf("num = %d\n", num);
//	}
//	return 0;
//}//这个num当前是定义在这个大括号内部 那就是这个大括号内部的任意位置都可以使用
//
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test()
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//g_val是未声明的标识符
//	//那我们为了解决这个问题未声明的标识符 那我是不是就声明一下 extern这个关键字就是用来声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
 
//局部变量的生命周期
int main()
{
	{//所以他的生命周期是从这进去生命周期开始
		int a = 10;
		printf("a = %d\n", a);//ok
	}//从这出去的时候生命周期结束
	printf("a = %d\n", a);//error
	return 0;
}

