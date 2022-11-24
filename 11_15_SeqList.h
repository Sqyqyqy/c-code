#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDateType;

typedef struct SeqList
{
	SLDateType* a;
	int size;//记录存储多少个有效数据
	int capacity;//空间容量大小
}SL;

//对数据的管理:增删查改 
void SLInit(SL*);
void SLDestory(SL*);
void SLPrint(SL*);

// 尾插尾删
void SLPushBack(SL*, SLDateType);
void SLPopBack(SL*);

// 头插头删
void SLPushFront(SL*, SLDateType);
void SLPopFront(SL*);

// 中间插入删除
// 在pos位置插入数据
void SLInsert(SL* ps, int pos, SLDateType x);
// 删除pos位置数据
void SLErase(SL* ps, int pos);
int SLFind(SL* ps, SLDateType x);
int SLFind2(SL* ps, SLDateType x, int begin);//SLFind改进
