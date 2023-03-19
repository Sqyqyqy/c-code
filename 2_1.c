//#include <iostream>
//#include "Queue.h"
//#include "List.h"
#include"Date.h"
using namespace std;
//using namespace Queue;
using std::cout;
using std::endl;

//int main()
//{
//	std::cout << "hello world" << std::endl;
//	//struct Node q;
//	//int i = 0;
//	//std::cin >> i;
//	//cout << "i = " << i << endl;
//
//	//int arr[5];
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	std::cin >> arr[i];
//	//}
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//	//cout << "\n";
//
//	char name[10] = "zhangsan";
//	cout << name << endl;
//	return 0;
//}


//缺省参数
void test(int a = 0)
{
	cout << a << endl;
}

//全缺省
void test1(int a = 1, int b = 2, int c = 3)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << endl;
}

//半缺省
void test2(int a, int b = 1, int c = 2)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << endl;
}

//int main()
//{
//	/*test(3);
//	test();*/
//
//	/*test1(4,5,6);
//	test1(4,5);
//	test1(4);
//	test1();*/
//
//	/*test2(4,5,6);
//	test2(4,5);
//	test2(4);*/
//	//test2();
//
//	return 0;
//}


//#include"Test.h"
//int main()
//{
//	//func();
//	return 0;
//}


//void f(int a = 10);
//void f(int a)
//{
//	cout << a << endl;
//}
//int main()
//{
//	f();
//	return 0;
//}


//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		
//	}
//
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	d.Init(2022, 2, 3);
//	return 0;
//}

//#include"Test.h"
//int main()
//{
//	//func();
//
//	Date d;
//	d.Init(2022, 2, 3);
//	return 0;
//}



//class Date
//{
//public:
//	Date(int year = 2023, int month = 2, int day = 3)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	return 0;
//}
