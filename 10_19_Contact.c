#include "Contact.h"

//静态版本
//void initContact(struct Contact* p)
//{
//	assert(p);
//	//w
//	//memset(p, 0, sizeof(struct Contact));//我测试:Peoinfo的大小是52，总大小是5204(100*52+4) 
//	//a                                      
//	p->sz = 0;
//	memset(p->arr, 0, MAX * sizeof(struct Peoinfo));
//}

static int Check_capacity(struct Contact* p);

void LoadContact(struct Contact* pc)
{
	//打开文件
	FILE* pfR = fopen("data.txt", "rb");
	if (NULL == pfR)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件
	struct Peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct Peoinfo), 1, pfR))
	{
		//考虑增加容量的问题
		Check_capacity(pc);
		pc->arr[pc->sz] = tmp;
		pc->sz++;
	}
	//w
	/*int i = 0;
	while (fread(pc->arr + i, sizeof(struct Peoinfo), 1, pfR))
	{
		Check_capacity(pc);
		i++;
		pc->sz++;
	}*/

	//关闭文件
	fclose(pfR);
	pfR = NULL;
}

//动态版本
void initContact(struct Contact* pc)
{
	assert(pc);
	pc->arr = (struct Peoinfo*)malloc(sizeof(struct Peoinfo) * DEFAULT_SZ);
	if (pc->arr == NULL)
	{
		perror("InitContact()");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;

	//加载文件中的信息，到通讯录中
	LoadContact(pc);
}

static int Check_capacity(struct Contact* p)
{
	if (p->sz == p->capacity)
	{
		struct Peoinfo* ptr = (struct Peoinfo*)realloc(p->arr, sizeof(struct Peoinfo)*(Add_SZ+p->capacity));
		if (ptr != NULL)
		{
			p->arr = ptr;
			ptr = NULL;
			printf("增容成功\n");
			p->capacity += Add_SZ;
			return 1;
		}
		else
		{
			perror("AddContact()");
			return 0;
		}
	}
	else
		return 1;
}

void AddContact(struct Contact* p)
{
	assert(p);

	//静态版本
	/*if (p->sz == MAX)
	{
		printf("通讯录已满，无法添加数据\n");
		return;
	}*/

	//动态版本
	if (0 == Check_capacity(p))
	{
		return;
	}
	
	//添加联系人信息
	printf("请输入要增加联系人的姓名:>");
	scanf("%s", p->arr[p->sz].name);
	printf("请输入要增加联系人的性别:>");
	scanf("%s", p->arr[p->sz].sex);
	printf("请输入要增加联系人的年龄:>");
	scanf("%d", &(p->arr[p->sz].age));//容易漏掉&
	printf("请输入要增加联系人的电话:>");
	scanf("%s", p->arr[p->sz].tele);
	printf("请输入要增加联系人的住址:>");
	scanf("%s", p->arr[p->sz].addr);
	p->sz++;
	printf("成功增加联系人\n");
}

void ShowContact(const struct Contact* p)
{
	printf("%-10s\t%-6s\t%-3s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话号", "住址");
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		printf("%-10s\t%-6s\t%-3d\t%-12s\t%-20s\n", p->arr[i].name, p->arr[i].sex, p->arr[i].age, p->arr[i].tele, p->arr[i].addr);
	}
}

static int FindByName(const struct Contact* p, char name[])
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(name, p->arr[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* p)
{
	printf("请输入要删除联系人的姓名:>");
	char name[MAX_name];
	scanf("%s", name);
	int ret = FindByName(p,name);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		//return;
	}
	else
	{
		//删除联系人操作
		//可以用memmove，这里用循环实现逐个覆盖
		//如果可以改变顺序，也可直接将最后一个联系人赋值给下标为ret的联系人
		int i = 0;
		for (i = ret; i < p->sz - 1; i++)//i最大值是多少（从这个角度考虑更快，而不是考虑总共赋值多少次）
		{
			p->arr[i] = p->arr[i + 1];
		}
		p->sz--;
		printf("删除联系人成功\n");
	}
}

void SearchContact(const struct Contact* p)
{
	printf("请输入要查找联系人的姓名:>");
	char name[MAX_name];
	scanf("%s", name);
	int ret = FindByName(p, name);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		return;
	}
	else
	{
		printf("%-10s\t%-6s\t%-3s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话号", "住址");
		printf("%-10s\t%-6s\t%-3d\t%-12s\t%-20s\n", p->arr[ret].name, p->arr[ret].sex, p->arr[ret].age, p->arr[ret].tele, p->arr[ret].addr);
	}
}

void ModifyContact(struct Contact* p)
{
	printf("请输入要修改联系人的姓名:>");
	char name[10];
	scanf("%s", name);
	int ret = FindByName(p, name);
	if (ret == -1)
	{
		printf("通讯录中无此人\n");
		//return;
	}
	else
	{
		//修改联系人操作
		printf("请输入修改后的性别:>");
		scanf("%s", p->arr[ret].sex);
		printf("请输入修改后的年龄:>");
		scanf("%d", &(p->arr[ret].age));//容易漏掉&
		printf("请输入修改后的电话:>");
		scanf("%s", p->arr[ret].tele);
		printf("请输入修改后的住址:>");
		scanf("%s", p->arr[ret].addr);
		
		printf("修改联系人成功\n");
	}
}

int compar_by_age(const void* p1, const void* p2)
{
	return ((struct Peoinfo*)p1)->age - ((struct Peoinfo*)p2)->age;
}

int compar_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Peoinfo*)p1)->name, ((struct Peoinfo*)p2)->name);
}

void SortContact(struct Contact* p)
{
	//qsort(p->arr, p->sz, sizeof(struct Peoinfo), compar_by_age);
	qsort(p->arr, p->sz, sizeof(struct Peoinfo), compar_by_name);
}

void DestroyContact(struct Contact* p)
{
	free(p->arr);
	p->arr = NULL;
	p->capacity = 0;
	p->sz = 0;
}


void SaveContact(struct Contact* pc)
{
	//打开文件
	FILE* pfW = fopen("data.txt", "wb");
	if (NULL == pfW)
	{
		perror("SaveContact::fopen");
		return;
	}

	//写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->arr + i, sizeof(struct Peoinfo), 1, pfW);
	}

	//关闭文件
	fclose(pfW);
	pfW = NULL;
}



