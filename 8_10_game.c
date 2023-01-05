#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//(自测试)
//---------------------------------------------------------------
//int add(int x, int y)
//{
//	return 3;
//}
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	z = add(x, y);//情况3：Add和add都在game.c源文件里，在主函数调用Add，Add内调用add。即使不声明add，或即使add是静态函数，也不会有警告
//	return z;
//}
//
//int x = 3;

//----------------------------------------------------------------


void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
			{
				printf(" %c |", board[i][j]);
			}
			else if (j == col - 1)
			{
				printf(" %c ", board[i][j]);
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("请下棋:>");
	while (1)
	{
		scanf("%d %d", &i, &j);
		if (i<0 || j<0 || i>row || j>col)
		{
			printf("坐标非法，请重新输入:>");
		}
		else if (board[i - 1][j - 1] != ' ')
		{
			printf("该坐标已被占用，请重新输入:>");
		}
		else
		{
			board[i - 1][j - 1] = '*';
			break;
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] != ' ' || board[i][j] == '*')
		{
			continue;
		}
		else
		{
			board[i][j] = '#';
			break;
		}
	}
}

int is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}

	return 1;
}
