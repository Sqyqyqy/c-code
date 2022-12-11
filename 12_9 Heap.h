#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<time.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void HeapInit(HP* php);
void HeapDestroy(HP* php);
void HeapPrint(HP * php);

void HeapPush(HP* php, HPDataType x);

void HeapPop(HP* php);

bool HeapEmpty(HP* php);

HPDataType HeapTop(HP* php);

int HeapSize(HP* php);

void HeapCreate(HP* php, HPDataType* a, int n);
void AdjustDown(HPDataType* a, int size, int parent);
void Swap(HPDataType* a, HPDataType* b);
