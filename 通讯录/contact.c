#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//��̬�汾
//void InitContact(struct Contact* pc) {
//	pc->sz = 0;
//	memset(pc->date, 0,sizeof(pc->date));
//}

//��̬�汾
void InitContact(struct Contact* pc) {
	pc->sz = 0;
	pc->date = (struct PeoInfo*)malloc(DEFALT_SIZE * sizeof(struct PeoInfo));
	pc->ContactSize = DEFALT_SIZE;
	//�����ļ���Ϣ
	LoadContact(pc);
}
void LoadContact(struct Contact* pc) {
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf) {
		perror("savecontact::fopen");
	}
	//���ļ�
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pf)) {
		//�ռ䲻��������
		CheckContact(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//��̬�汾
//void AddContact(struct Contact* pc) {
//	if (pc->sz == MAX) {
//		printf("ͨѶ¼����\n");
//	}
//	else {
//		printf("����������:>\n");
//		scanf("%s", &pc->date[pc->sz].name);
//		printf("����������:>\n");
//		scanf("%d", &pc->date[pc->sz].age);
//		printf("�������Ա�:>\n");
//		scanf("%s", &pc->date[pc->sz].sex);
//		printf("������绰:>\n");
//		scanf("%s", &pc->date[pc->sz].tele);
//		printf("�������ַ:>\n");
//		scanf("%s", &pc->date[pc->sz].addr);
//
//		printf("���ӳɹ�\n");
//		pc->sz++;
//	}
//}

void CheckContact(struct Contact* pc) {
	if (pc->sz == pc->ContactSize) {
		//��������
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->date, (pc->ContactSize + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL) {
			pc->date = ptr;
			printf("���ݳɹ�\n");
		}
		else {
			return;
		}
	}
}

//��̬�汾
void AddContact(struct Contact* pc) {

	CheckContact(pc);

	printf("����������:>\n");
	scanf("%s", &pc->date[pc->sz].name);
	printf("����������:>\n");
	scanf("%d", &pc->date[pc->sz].age);
	printf("�������Ա�:>\n");
	scanf("%s", &pc->date[pc->sz].sex);
	printf("������绰:>\n");
	scanf("%s", &pc->date[pc->sz].tele);
	printf("�������ַ:>\n");
	scanf("%s", &pc->date[pc->sz].addr);

	printf("���ӳɹ�\n");
	pc->sz++;
	
}


void ShowContact(struct Contact* pc) {
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (int i = 0;i < pc->sz;i++) {
		//��ӡ����
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->date[i].name, 
			pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);

	}
}

int FindContactByName(struct Contact* pc, char name[]) {
	for (int i = 0;i < pc->sz;i++) {
		if (!strcmp(pc->date[i].name, name)) {
			return i;
		}
	}
	return -1;
}
void Delcontact(struct Contact* pc) {
	if (pc->sz == 0) {
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("��������Ҫɾ��������>:");
	scanf("%s", name);
	int pos=FindContactByName(pc,name);
	if (pos == -1) {
		printf("��ϵ�˲�����\n");
	}
	else {
		for (int i = pos + 1;i < pc->sz;i++) {
			pc->date[i - 1] = pc->date[i];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* pc) {
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ����������\n");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1) {
		printf("��ϵ�˲�����\n");
	}
	else {
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->date[pos].name,
			pc->date[pos].age, pc->date[pos].sex, pc->date[pos].tele, pc->date[pos].addr);
	}
}

void ModifyContact(struct Contact* pc) {
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸�������\n");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1) {
		printf("�޸ĵ���ϵ�˲�����\n");
	}
	else {
		printf("�������µ�����:>\n");
		scanf("%s", &pc->date[pos].name);
		printf("�������µ�����:>\n");
		scanf("%d", &pc->date[pos].age);
		printf("�������µ��Ա�:>\n");
		scanf("%s", &pc->date[pos].sex);
		printf("�������µĵ绰:>\n");
		scanf("%s", &pc->date[pos].tele);
		printf("�������µĵ�ַ:>\n");
		scanf("%s", &pc->date[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

int cmp(const void* e1, const void* e2) {
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
void SortContact(struct Contact* pc) {
	qsort(pc->date, pc->sz, sizeof(pc->date[0]), cmp);
	printf("����ɹ�\n");
	
}

void DestroyContact(struct Contact* pc) {
	free(pc->date);
	pc->date = NULL;
	pc->sz = 0;
	pc->ContactSize = 0;
}

void SaveContanct(struct Contact* pc) {
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf) {
		perror("savecontact::fopen");
	}
	//д����
	for (int i = 0;i < pc->sz;i++) {
		fwrite(pc->date + i, sizeof(struct PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}