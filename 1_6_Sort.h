#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void InsertSort(int* a, int n);
void ShellSort(int* a, int n);
void PrintArray(int* a, int n);
void SelectSort(int* a, int n);
void BubbleSort(int* a, int n);
void QuickSort(int* a, int begin, int end);
void QuickSortNotR(int* a, int begin, int end);
void QuickSort_PS4(int* a, int begin, int end);
void MergeSort(int* a, int n);
void MergeSortNonR(int* a, int n);
void CountSort(int* a, int n);

