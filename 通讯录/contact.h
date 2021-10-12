#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define DEFALT_SIZE 3
#define MAX 1000
//一个人的信息
struct PeoInfo {
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

////静态通讯录
//struct Contact {
//	//1000个人的数据存放在date数组中
//	struct PeoInfo date[MAX];
//	//记录当前通讯录有效信息个数
//	int sz;
//};



//动态通讯录
struct Contact {
	struct PeoInfo* date;
	//记录当前通讯录有效信息个数
	int sz;
	int ContactSize;
};


//初始化通讯录
void InitContact(struct Contact* pc);
//增加联系人
void AddContact(struct Contact* pc);
//展示通讯录
void ShowContact(struct Contact* pc);
//删除指定联系人
void Delcontact(struct Contact* pc);
//查找联系人
void SearchContact(const struct Contact* pc);
//修改指定联系人
void ModifyContact(struct Contact* pc);
//排序联系人
void SortContact(struct Contact* pc);
//销毁通讯录
void DestroyContact(struct Contact* pc);
//保存信息到通讯录
void SaveContanct(struct Contact* pc);
//加载文件信息
void LoadContact(struct Contact* pc);
//空间不够，增容
void CheckContact(struct Contact* pc);


