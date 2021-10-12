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
//һ���˵���Ϣ
struct PeoInfo {
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

////��̬ͨѶ¼
//struct Contact {
//	//1000���˵����ݴ����date������
//	struct PeoInfo date[MAX];
//	//��¼��ǰͨѶ¼��Ч��Ϣ����
//	int sz;
//};



//��̬ͨѶ¼
struct Contact {
	struct PeoInfo* date;
	//��¼��ǰͨѶ¼��Ч��Ϣ����
	int sz;
	int ContactSize;
};


//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);
//������ϵ��
void AddContact(struct Contact* pc);
//չʾͨѶ¼
void ShowContact(struct Contact* pc);
//ɾ��ָ����ϵ��
void Delcontact(struct Contact* pc);
//������ϵ��
void SearchContact(const struct Contact* pc);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);
//������ϵ��
void SortContact(struct Contact* pc);
//����ͨѶ¼
void DestroyContact(struct Contact* pc);
//������Ϣ��ͨѶ¼
void SaveContanct(struct Contact* pc);
//�����ļ���Ϣ
void LoadContact(struct Contact* pc);
//�ռ䲻��������
void CheckContact(struct Contact* pc);


