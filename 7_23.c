#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//我（测试）
//#include<time.h>
//int main()
//{
//	int a = (time(NULL));
//	printf("%d\n", a);
//	return 0;
//}


#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	//               bit\0######
//	//(重要)\0是字符串的结束标志 打印遇到\0会认为结束 停止打印 但凡有用到字符串的地方 \0都是这个字符串的结束标志 比如说求字符串长度的时候\0就是结束标志 打印的时候\0也是字符串的结束标志 什么时候结束就看\0
//	strcpy(arr2, arr1);//指针变量不应该用取地址符吗：数组本身就是一个地址
//	printf("%s\n", arr2);
//
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 跟字符串长度有关的

//  //我们必须要保证源头的数据没有目的地空间那么长 或者你要保证目的地空间足够大 能放得下源头拷过来的数据 否则必然会溢出(bug)
//
//	//我（测试）
//	/*char arr3[] = "abc\0abc";
//	printf("%s\n", arr3);*/
//
//	return 0;
//}


//memset
//memory - 内存 set - 设置

#include<stddef.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*' , 5);//数组名是第一个元素的地址
//	//memset(arr, 42, 5);  //按照函数说明这里应该是写入int型的值，直接放字符不行，所以单引号*输入它对应的阿斯克码值
//	                       //这样任何一个字符最终存储的时候其实在内存里存的是他的ASCII码值
//	printf("%s\n", arr);
//	//(我)测试
//	//size_t;
//	return 0;
//}



//定义函数
//xy叫形参-形式参数-形式上的参数(他是不是真实的参数? 他一般情况下是不存在的 假设我下面就没有去调用这些函数 那这个时候的xy是不存在的 他们就是代码就是一些符号而已 他们没有实际的变量空间)
//形式上的参数有实例化的过程 当这个函数去调用的时候 我要把a传过去了 这个时候才为x开辟一块空间
//int get_max(int x, int y)//x,y这两个值进入函数内部可以使用，但一旦出了这个函数就销毁不能使用了
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);//函数的实参部分写的是变量
//	printf("max = %d\n", max);
//	max = get_max(100, 300);//函数的实参部分是常量
//	max = get_max(100, 300+1);//如果传个"300+1"(表达式)，那这个表达式一定要能够算出一个确切的结果确切的值
//  printf("max = %d\n", max);
//  max = get_max(100,get_max(3,7));//第二个参数是一个函数
//	return 0;
//}



//写一个函数可以交换两个整型变量的内容

//不能完成任务
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝（xy具有了自己独立的空间，我是拷贝出来一份新的数据，因为x具有了外面a的值，我把他值给拷贝过来了）
//（那这个时候）对形参的修改是不会改变实参的
//void Swap1(int x,int y)//这个函数不需要他写返回值类型 那写成void viod表示没有返回值
//{                      //这个地方的xy接受了a和b的值 但是xy有自己独立的空间 他们跟外边的a和b之间并没有一个直接的联系 也就是说改变xy不会影响到外边的a和b
//	int tmp = 0;
//	tmp = x;//x的地址和a的地址不一样 y的地址和b的地址不一样 说明这个地方的a和b有自己独立的空间 x,y也有自己独立的空间
//	x = y;//借助于tmp 把这个地方的xy交换一下 不能交换ab 因为x和y和a和b压根就不是同一个空间
//	y = tmp;
//	//return x,y;//在这地方只要帮我交换了就可以了，没什么可返回的
//}
////
//void Swap2(int* pa,int* pb)//地址传过去 指针变量接收 pa、pb也有自己独立的变量空间 但是他们里面存的是a和b的地址 通过pa远程就能找回来找到a和b
//{
//	int tmp = 0;
//	tmp = *pa;//把a备份到tmp里边去
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//  //调用Swap1函数-传值调用
//	//Swap1(a, b);
//  //调用Swap2函数
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;//创建a变量的话，一定在内存里面为他开辟了四个字节的空间 让我们很好的去使用他 那这四个字节开辟到哪里去了 我们要拿到他的地址也有方法
//	int* pa = &a;//a的地址如果拿出来之后呢他其实是一个16进制的数字 那这个数字如果要存起来 我得给一个变量 pa是用来存放a的地址的 那我们说pa就是指针变量
//	*pa = 20;//当你要操作这个a的时候，可能并不需要a亲自动手，指针变量也可以有办法找到a
//	printf("%d\n", a);
//	return 0;
//}

//练习1
#include<math.h>
//是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int a = 2;
//	while (a <= sqrt(n/1.0))
//	{
//		if (n%a == 0)
//		{
//			return 0;
//			//break;//break多余了 return 0的功能比break要强大 return 0只要返回之后break是没有机会执行的 就是让这个代码这个is_prime函数彻底就调用结束了 就返回了
//		}
//		a++;
//		if (a > sqrt(n / 1.0))
//			return 1;
//	}
//	/*if (n%a != 0)
//		return 1;*/
//	/*if (n%a == 0)
//		return 0;*/
//}
////写一个函数可以判断一个数是不是素数

//int is_prime(int n)
//{
//	int a = 2;
//	while (a <= sqrt(n))//(未解决)不应该是sqrt(n/1.0)?
//	{
//		if (n%a == 0)
//			return 0;
//		a++;
//	}
//	//if (a > sqrt(n/1.0))
//	return 1;//重点
//}
//
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	
//
//	//(我)测试
//	//printf("%f\n", sqrt(101.0));
//	return 0;
//}
