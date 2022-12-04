#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType val;
}LTNode;

LTNode* BuyLTNode(LTDataType x);

LTNode* LTInit();

void LTPushBack(LTNode* phead, LTDataType x);

void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);

void LTPopFront(LTNode* phead);

void LTPrint(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType data);

void LTInsert(LTNode* pos, LTDataType x);

void LTErase(LTNode* pos);

bool LTEmpty(LTNode* phead);

size_t LTSize(LTNode* phead);

void LTDestroy(LTNode* phead);
