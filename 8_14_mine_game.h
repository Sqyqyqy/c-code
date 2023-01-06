#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define EASY_COUNT 5 //测试的时候设置成80个雷测试

//初始化棋盘
void init_board(char board[ROWS][COLS], int rows, int cols,char a);

//布置雷
void set_mine(char board[ROWS][COLS], int row, int col);

//打印棋盘
void display_board(char board[ROWS][COLS], int row, int col);

//排雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);
