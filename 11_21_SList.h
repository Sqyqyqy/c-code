#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDatatype;

typedef struct SListNode
{
	SLTDatatype data;
	struct SListNode* next;
}SLTNode;

//动态申请一个结点
SLTNode* BuySLTNode(SLTDatatype x);

SLTNode* CreateSList(int n);

//单链表打印
void SLTPrint(SLTNode* phead);

//尾插
void SLTPushBack(SLTNode** phead,SLTDatatype x);

//尾删
void SLTPopBack(SLTNode** pphead);
void SLTPopBack2(SLTNode** pphead);

//头插
void SLTPushFront(SLTNode** pphead,SLTDatatype x);

//头删
void SLTPopFront(SLTNode** phead);

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDatatype x);

//在pos位置之后插入x
void SLTInsertAfter(SLTNode* pos, SLTDatatype x);

//删除pos位置之后的值
void SLTEraseAfter(SLTNode* pos);

//在pos位置之前插入x
void SLTInsertFront(SLTNode** pphead,SLTNode* pos, SLTDatatype x);

//删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos);

//释放
void SLTDestroy(SLTNode** pphead);
