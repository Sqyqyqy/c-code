#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//&数组名 测试 (重要)
//int main()
//{
//	//int arr[3] = { 0 };
//	//int* p = &arr;//我:&arr值是首元素地址，但他是数组的地址，放到int*发生类型转换了
//	//printf("%p\n", p);
//	//printf("%p\n", p+1);
//
//	//int(*p1)[3] = &arr;
//	//printf("%p\n", p1);
//	//printf("%p\n", p1 + 1);
//
//	return 0;
//}
//测试2 我总结:推测arr是个地址值而不是指针常量(和&b一样) 不能对地址值取地址，而是先把地址值放入指针常量或变量中，再对这个指针常量或变量取地址，这才是二级指针;对地址值取地址不会产生原地址的地址，还是原地址本身，且会报警告，解引用和解引用原地址值效果一样;但对于数组名arr这个特殊的地址值，对他取地址，这时arr表示整个数组，取出的是数组的地址，这种情况可以对地址值取地址
//int main()
//{
//	//int arr[3] = {1,2,3};
//	//int** p = &arr;//我:&arr是数组的地址，放到int*发生类型转换了,值是首元素地址
//	//printf("%d\n",*p);//如果arr是指针常量，p存放指针常量arr的地址，p是二级指针，对p解引用，打印结果是1，而不是arr的值(1)
//	//                  //说明arr可能是个地址？(2)和(1)(2)对比推测arr是个地址值而不是指针常量
//	//printf("%d\n", arr);//以十进制打印出arr的值(地址值)
//
//	//测试(2)
//	int b = 1;
//	//printf("%d\n", *(&b));//对地址解引用，可以打印出1
//	//printf("%d\n", &(&b));//对地址取地址，打印出还是b的地址值(以十进制形式打印)
//	//int** p = &(&b);
//	//printf("%d\n", *p);//打印结果是1，而不是&b的值
//	//printf("%d\n", &b);
//
//	int* const p1 = &b;//指针常量作对比，情况完全不一样，推测arr不是指针常量，和&b是一类
//	int** p2 = &p1;
//	printf("%d\n", *p2);//打印b的地址
//
//	//测试(1)
//	//int a = 1;
//	//int* p1 = &a;
//	//int** p2 = &p1;//调试观察p1=0x009BFA8C
//	//printf("%d\n", *p2);//打印p1的十进制形式1022222(0x009BFA8C)
//	//printf("%d\n", *(*p2));//打印1
//
//	//总结
//	//int arr[3] = { 1,2,3 };
//	//int* p = arr;
//	//int** p1 = &p;
//	//printf("%d\n", *p1);//这样才是二级指针，才能打印arr的十进制形式
//	return 0;
//}


//测试 只要是放到int(*p)[3]里，不用写&arr，直接arr也行，但会警告
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int(*p)[3] = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);//相差12
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int(*p)[3] = arr;
//	printf("%d\n", *p);//打印出arr的地址值
//	return 0;
//}


//测试 实际上arr是指向第一行这个一维数组的地址（+1步长不是一个整型），值和首元素地址一样
//int main()
//{
//	int arr[3][5] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0][0]);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0][0]+1);
//	return 0;
//}

//测试
//void print(int(*p)[3][5]/*int* p*/, int r, int c)
//{
//	/*printf("%p\n", p);
//	printf("%p\n", p + 1);*/
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(&arr,3,5);
//	
//	//我测试
//	//int(*p)[5] = arr;//测试 无警告
//	//int arr1[3] = { 1,2,3 };
//	//int(*p1)[3] = arr1;//“初始化”:“int(*)[3]”与“int *”的间接级别不同
//	//int* p1 = arr;
//	return 0;
//}

//测试(重要) 二维数组名本质不是int*型的
//           而是int(*p)[5]型的
//int main()
//{
//	int arr[3][5] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//差20
//	return 0;
//}

//测试
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	printf("%d\n", *(*arr + 1));//打印2
//	printf("%d\n", *(*(arr+1) + 4));//打印6
//	return 0;
//}
//
//void a(int arr[][10])//第二个方框里必须写大小，我:且这个大小和数组指针指向的数组的大小有关
//{
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//差40
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	a(arr);
//	return 0;
//}

//测试 &arr确实是整个二维数组的地址
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//printf("%p\n", &(&arr[0][0]));//对地址取地址，没意义
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//相差60
//	return 0;
//}
