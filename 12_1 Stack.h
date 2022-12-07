#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;
}ST;

void StackInit(ST*);
void StackDestroy(ST*);
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
STDataType StackTop(ST* ps);

bool StackEmpty(ST* ps);
int StackSize(ST* ps);
