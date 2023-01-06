#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*********   1.play    ************\n");
	printf("*********   0.exit    ************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	init_board(show, ROWS, COLS,'*');
	init_board(mine, ROWS, COLS,'0');
	//布置雷
	set_mine(mine, ROW, COL);
	//打印棋盘
	display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	//排雷
	find_mine(mine,show,ROW,COL);
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
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
