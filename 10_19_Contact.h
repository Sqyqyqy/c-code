#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

#include<errno.h>

#define MAX 100
#define MAX_name 10
#define MAX_sex 6
#define MAX_tele 12
#define MAX_addr 20

#define DEFAULT_SZ 3
#define Add_SZ 2


struct Peoinfo
{
	char name[MAX_name];
	char sex[MAX_sex];
	int age;
	char tele[MAX_tele];
	char addr[MAX_addr];
};

//静态版本
//struct Contact
//{
//	struct Peoinfo arr[MAX];
//	int sz;
//};

//动态版本
struct Contact
{
	struct Peoinfo* arr;
	int sz;
	int capacity;
};


//初始化通讯录
void initContact(struct Contact*);

//增加联系人信息
void AddContact(struct Contact*);

//显示通讯录中的信息
void ShowContact(const struct Contact*);

//删除指定联系人
void DelContact(struct Contact*);

//查找指定联系人
void SearchContact(const struct Contact*);

//修改联系人信息
void ModifyContact(struct Contact*);

//对通讯录排序 按年龄排序
void SortContact(const struct Contact*);

//销毁通讯录
void DestroyContact(struct Contact*);

//保存通讯录
void SaveContact(struct Contact*);
