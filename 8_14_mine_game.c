#include"game.h"

void init_board(char board[ROWS][COLS], int rows, int cols,char a)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = a;
		}
	}
}

void set_mine(char board[ROWS][COLS],int row, int col)
{
	int count = 0;
	while (count < EASY_COUNT)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
			count++;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf(" ");
	for (j = 1; j <= col;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

int get_mine_count(char mine[ROWS][COLS],int i,int j)
{
	return mine[i - 1][j - 1] + mine[i - 1][j] + mine[i - 1][j + 1] + 
		mine[i][j - 1] + mine[i][j + 1] + mine[i + 1][j - 1] + 
		mine[i + 1][j] + mine[i + 1][j + 1] - 8 * '0';
}

void auto_find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int i, int j);
int count = ROW * COL - EASY_COUNT;//或者更好的是把count地址传过去，然后count--
void auto_find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int i, int j)
{
	if (show[i][j] == '*' && i > 0 && j > 0 && i < row + 1 && j < col + 1)
	{
		show[i][j] = get_mine_count(mine, i, j) + '0';
		count--;//终结点
		if (get_mine_count(mine, i, j) == 0)
		{
			auto_find(mine, show, ROW, COL, i, j);
		}
	}
}

void auto_find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col,int i,int j)
{
	auto_find_mine(mine, show, ROW, COL, i - 1, j - 1);
	auto_find_mine(mine, show, ROW, COL, i - 1, j );
	auto_find_mine(mine, show, ROW, COL, i - 1, j + 1);
	auto_find_mine(mine, show, ROW, COL, i , j - 1);
	auto_find_mine(mine, show, ROW, COL, i , j + 1);
	auto_find_mine(mine, show, ROW, COL, i + 1, j - 1);
	auto_find_mine(mine, show, ROW, COL, i + 1, j );
	auto_find_mine(mine, show, ROW, COL, i + 1, j + 1);
}

void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	//int count = row * col - EASY_COUNT;
	while (count)
	{
		printf("请输入要排雷的位置:>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= 9 && j >= 1 && j <= 9 && show[i][j] == '*')
		{
			if (mine[i][j] == '1')
			{
				printf("踩雷，游戏失败!\n");
				display_board(mine, row, col);
				break;
			}
			else
			{
				show[i][j] = get_mine_count(mine,i,j)+'0';//(重点)
				if (get_mine_count(mine, i, j) == 0)
				{
					auto_find(mine, show, ROW, COL, i, j);
				}
				//auto_find(mine,show,ROW, COL,i,j);
				
				display_board(show,row,col);
				count--;
			}
		}
		else
		{
			printf("位置非法，请重新输入\n");
		}
	}
	if (count == 0)
	{
		printf("游戏胜利！\n");
		display_board(mine, row, col);
	}
}

