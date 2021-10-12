#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//静态版本
//void InitContact(struct Contact* pc) {
//	pc->sz = 0;
//	memset(pc->date, 0,sizeof(pc->date));
//}

//动态版本
void InitContact(struct Contact* pc) {
	pc->sz = 0;
	pc->date = (struct PeoInfo*)malloc(DEFALT_SIZE * sizeof(struct PeoInfo));
	pc->ContactSize = DEFALT_SIZE;
	//加载文件信息
	LoadContact(pc);
}
void LoadContact(struct Contact* pc) {
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf) {
		perror("savecontact::fopen");
	}
	//读文件
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pf)) {
		//空间不够，增容
		CheckContact(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}

//静态版本
//void AddContact(struct Contact* pc) {
//	if (pc->sz == MAX) {
//		printf("通讯录满了\n");
//	}
//	else {
//		printf("请输入名字:>\n");
//		scanf("%s", &pc->date[pc->sz].name);
//		printf("请输入年龄:>\n");
//		scanf("%d", &pc->date[pc->sz].age);
//		printf("请输入性别:>\n");
//		scanf("%s", &pc->date[pc->sz].sex);
//		printf("请输入电话:>\n");
//		scanf("%s", &pc->date[pc->sz].tele);
//		printf("请输入地址:>\n");
//		scanf("%s", &pc->date[pc->sz].addr);
//
//		printf("增加成功\n");
//		pc->sz++;
//	}
//}

void CheckContact(struct Contact* pc) {
	if (pc->sz == pc->ContactSize) {
		//增加容量
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->date, (pc->ContactSize + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL) {
			pc->date = ptr;
			printf("增容成功\n");
		}
		else {
			return;
		}
	}
}

//动态版本
void AddContact(struct Contact* pc) {

	CheckContact(pc);

	printf("请输入名字:>\n");
	scanf("%s", &pc->date[pc->sz].name);
	printf("请输入年龄:>\n");
	scanf("%d", &pc->date[pc->sz].age);
	printf("请输入性别:>\n");
	scanf("%s", &pc->date[pc->sz].sex);
	printf("请输入电话:>\n");
	scanf("%s", &pc->date[pc->sz].tele);
	printf("请输入地址:>\n");
	scanf("%s", &pc->date[pc->sz].addr);

	printf("增加成功\n");
	pc->sz++;
	
}


void ShowContact(struct Contact* pc) {
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (int i = 0;i < pc->sz;i++) {
		//打印数据
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
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("请输入你要删除的名字>:");
	scanf("%s", name);
	int pos=FindContactByName(pc,name);
	if (pos == -1) {
		printf("联系人不存在\n");
	}
	else {
		for (int i = pos + 1;i < pc->sz;i++) {
			pc->date[i - 1] = pc->date[i];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* pc) {
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找人名字\n");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1) {
		printf("联系人不存在\n");
	}
	else {
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->date[pos].name,
			pc->date[pos].age, pc->date[pos].sex, pc->date[pos].tele, pc->date[pos].addr);
	}
}

void ModifyContact(struct Contact* pc) {
	char name[NAME_MAX] = { 0 };
	printf("请输入要修改人名字\n");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1) {
		printf("修改的联系人不存在\n");
	}
	else {
		printf("请输入新的名字:>\n");
		scanf("%s", &pc->date[pos].name);
		printf("请输入新的年龄:>\n");
		scanf("%d", &pc->date[pos].age);
		printf("请输入新的性别:>\n");
		scanf("%s", &pc->date[pos].sex);
		printf("请输入新的电话:>\n");
		scanf("%s", &pc->date[pos].tele);
		printf("请输入新的地址:>\n");
		scanf("%s", &pc->date[pos].addr);

		printf("修改成功\n");
	}
}

int cmp(const void* e1, const void* e2) {
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
void SortContact(struct Contact* pc) {
	qsort(pc->date, pc->sz, sizeof(pc->date[0]), cmp);
	printf("排序成功\n");
	
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
	//写数据
	for (int i = 0;i < pc->sz;i++) {
		fwrite(pc->date + i, sizeof(struct PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}