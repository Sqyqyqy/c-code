#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include"game.h"

//int main()
//{
//	char arr[4] = { 'a','\0','b','c' };
//	printf("%s\n", arr);//已解决 这里的arr是数组首元素地址吗
//	return 0;
//}

//(自测试)
//------------------------------------------------------------

//#include"game.h"
//extern int Add(int x, int y);
//上面两个都没有 能运行但会警告

//int Add(int x, int y)
//{
//	int z = x + y;
//	z = add(x, y);//情况2：Add内部调用另一个源文件的add函数，没有声明add函数，能运行但会警告
//	return z;     //对情况2的补充：如果声明了add函数 但给add函数加了static 那也用不了add函数
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

/*int Add(int x, int y)
{
	int z = x + y;
	return z;
}*///情况1：Add在main后面定义 没有在main前面声明的话 能运行但会警告

//---------------------------------------------------------


//(自测试)
//----------------------------------------------------------
//(自写)两种方法
//extern int x;
//在game.h文件里声明x 然后在该源文件里包含game.h
//int main()
//{
//	printf("%d\n", x);//不声明x会报错
//	return 0;
//}
//extern对于函数是默认的，可写可不写，对于变量则必须写（实测确实是这样）
//----------------------------------------------------------


#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("**********   1.play     ***********\n");
	printf("**********   0.exit     ***********\n");
	printf("***********************************\n");
}

void game()
{
	char board[ROW][COL] = {' '};
	init_board(board,ROW,COL);
	display_board(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 0)
			break;
		//电脑下棋
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 0)
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if(ret == 1)
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		//(我)
		/*if (input == 1)
		{
			game();
		}
		else if (input == 0)
		{
			printf("退出游戏\n");
		}
		else
		{
			printf("请重新输入\n");
		}*/
		//(师)
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
