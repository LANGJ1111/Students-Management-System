#include "initial.h"
#include "load.h"
#include "save.h"
#include "log_in.h"
#include "admin.h"
#include "student.h"
#include "teacher.h"

//Ԥ��¼����
void no_log_in() {
	system("cls");
	printf("Ԥ��½����\n\n");
	printf("��ѡ����\n\n");
	printf("1.��¼\n");
	printf("2.�˺�ע��\n");
	printf("3.�����޸�\n");
	printf("4.�����һ�\n");
	printf("0.�˳�ϵͳ\n");
	int a;
	scanf("%d", &a);
	switch (a) {
		case 1: 
			log_in();
			break;
		case 2:
			no_log_register();
			break;
		case 3:
			no_log_modify();
			break;
		case 4:
			no_log_recovery();
			break;
		case 0:
			system("cls");
			printf("��л����ʹ�ã��ٻᣡ\n");
			Sleep(1000);
			exit(0);
		default: 
			printf("���������밴�س����ԣ�\n");
			getchar();
			getchar();
			no_log_in();
	}
}
//�˺�ע��
void no_log_register() {
	system("cls");
	printf("Ԥ��½����->�˺�ע��\n\n");
	printf("��ѡ��������ݣ�\n");
	printf("1.ѧ��\n");
	printf("2.��ʦ\n");
	printf("3.������һ��\n");
	printf("0.�˳�ϵͳ\n");
	int a;
	scanf("%d", &a);
	switch (a) {
		//ѧ��ע��
		case 1: {
			system("cls");
			printf("Ԥ��½����->�˺�ע�ᣨѧ����\n\n");
			stu_id* p, * pnew;
			pnew = (stu_id*)malloc(sizeof(stu_id));
			char a[20];
			printf("�༶��\n");
			scanf("%d", &pnew->class);
			if(pnew->class <= 0 || pnew->class > 5) {
				printf("�����ڸð༶��������ע�ᣡ");
				Sleep(1000);
				no_log_register();
			}
			printf("ѧ�ţ�\n");
			scanf("%d", &pnew->stu_id);
			stu *q = (stu*)malloc(sizeof(stu));
			if(pnew->class == 1) {
				q = stu_class1_load();
			}else if(pnew->class == 2) {
				q = stu_class2_load();
			}else if (pnew->class == 3) {
				q = stu_class3_load();
			}else if (pnew->class == 4) {
				q = stu_class4_load();
			}else {
				q = stu_class5_load();
			}
			q = q->next;
			int temp = 1;
			while(q) {
				if(q->stu_id == pnew->stu_id) {
					temp = 0;
					break;
				}
				q = q->next;
			}
			if (temp) {
				printf("�����ڸ�ѧ��ѧ����������ע�ᣡ");
				Sleep(1000);
				no_log_register();
			}
			printf("�˺ţ�\n");
			scanf("%s", &pnew->id);
			printf("���룺\n");
			scanf("%s", &pnew->pwd);
			printf("�ٴ��������룺\n");
			scanf("%s", a);
			if (strcmp(pnew->pwd, a)) {
				system("cls");
				printf("������������벻һ�£�������ע�ᣡ\n");
				Sleep(1000);
				no_log_register();
			}
			stu_id* head;
			if(stu_id_judge_load() == '1') {
				head = stu_id_temp_load();
			}else {
				head = stu_id_load();
			}
			p = head;
			while (p->next != NULL) {
				p = p->next;
			}
			p->next = pnew;
			pnew->next = NULL;
			stu_id_temp_save(head);
			stu_id_judge_save('1');
			system("cls");
			printf("�˺�ע��ɹ�����ȴ�����Ա����\n");
			Sleep(1000);
			no_log_in();
			break;
		}
		//��ʦע��
		case 2: {
			system("cls");
			printf("Ԥ��½����->�˺�ע�ᣨ��ʦ��\n\n");
			tch_id* p, * pnew;
			pnew = (tch_id*)malloc(sizeof(tch_id));
			char a[20];
			printf("�༶��\n");
			scanf("%d", &pnew->class);
			if (pnew->class <= 0 || pnew->class > 5) {
				printf("�����ڸð༶��������ע�ᣡ");
				Sleep(1000);
				no_log_register();
			}
			printf("�˺ţ�\n");
			scanf("%s", &pnew->id);
			printf("���룺\n");
			scanf("%s", &pnew->pwd);
			printf("�ٴ��������룺\n");
			scanf("%s", a);
			if (strcmp(pnew->pwd, a)) {
				system("cls");
				printf("������������벻һ�£�������ע�ᣡ\n");
				Sleep(1000);
				no_log_register();
			}
			tch_id* head;
			if (tch_id_judge_load() == '1') {
				head = tch_id_temp_load();
			}
			else {
				head = tch_id_load();
			}
			p = head;
			while (p->next != NULL) {
				p = p->next;
			}
			p->next = pnew;
			pnew->next = NULL;
			tch_id_temp_save(head);
			tch_id_judge_save('1');
			system("cls");
			printf("�˺�ע��ɹ�����ȴ�����Ա����\n");
			Sleep(1000);
			no_log_in();
			break;
		};
		//������һ��
		case 3: {
			no_log_in();
			break;
		}
		//�˳�ϵͳ
		case 0: {
			system("cls");
			printf("��л����ʹ�ã��ٻᣡ\n");
			Sleep(1000);
			exit(0);
		}
		//��������
		default: {
			printf("���������밴�س����ԣ�\n");
			getchar();
			getchar();
			no_log_register();
		}
	}
}
//�����޸�
void no_log_modify() {
	system("cls");
	printf("Ԥ��½����->�����޸�\n\n");
	printf("��ѡ��������ݣ�\n");
	printf("1.ѧ��\n");
	printf("2.��ʦ\n");
	printf("3.������һ��\n");
	printf("0.�˳�ϵͳ\n");
	int a;
	scanf("%d", &a);
	switch (a) {
		//ѧ���޸�
		case 1: {
			system("cls");
			printf("Ԥ��½����->�����޸ģ�ѧ����\n\n");
			stu_id* data;
			data = (stu_id*)malloc(sizeof(stu_id));
			char a[20];
			printf("�˺ţ�\n");
			scanf("%s", &data->id);
			stu_id* head;
			if (stu_id_judge_load() == '1') {
				head = stu_id_temp_load();
			}
			else {
				head = stu_id_load();
			}
			stu_id* front = head->next;
			while(front) {
				if (!strcmp(front->id, data->id)) {
					printf("���룺\n");
					scanf("%s", &data->pwd);
					if (!strcmp(front->pwd, data->pwd)) {
						printf("�޸ĺ�����룺\n");
						scanf("%s", &data->pwd);
						strcpy(front->pwd, data->pwd);
						stu_id_temp_save(head);
						stu_id_judge_save('1');
						printf("�����޸ĳɹ�����ȴ�����Ա����\n");
						Sleep(1000);
						no_log_in();
					}else {
						printf("������󣬼�������...\n");
						Sleep(1000);
						no_log_modify();
					}
				}
				front = front->next;
			}
			printf("�����ڸ��û�����������...\n");
			Sleep(1000);
			no_log_modify();
		}
		//��ʦ�޸�
		case 2: {
			system("cls");
			printf("Ԥ��½����->�����޸ģ���ʦ��\n\n");
			tch_id* data;
			data = (tch_id*)malloc(sizeof(tch_id));
			char a[20];
			printf("�˺ţ�\n");
			scanf("%s", &data->id);
			tch_id* head;
			if (tch_id_judge_load() == '1') {
				head = tch_id_temp_load();
			}
			else {
				head = tch_id_load();
			}
			tch_id* front = head->next;
			while (front) {
				if (!strcmp(front->id, data->id)) {
					printf("���룺\n");
					scanf("%s", &data->pwd);
					if (!strcmp(front->pwd, data->pwd)) {
						printf("�޸ĺ�����룺\n");
						scanf("%s", &data->pwd);
						strcpy(front->pwd, data->pwd);
						tch_id_temp_save(head);
						tch_id_judge_save('1');
						printf("�����޸ĳɹ�����ȴ�����Ա����\n");
						Sleep(1000);
						no_log_in();
					}
					else {
						printf("������󣡼�������...\n");
						Sleep(1000);
						no_log_modify();
					}
				}
				front = front->next;
			}
			printf("�����ڸ��û�����������...\n");
			Sleep(1000);
			no_log_modify();
		};
		//������һ��
		case 3: {
			no_log_in();
			break;
		}
		//�˳�ϵͳ
		case 0: {
			system("cls");
			printf("��л����ʹ�ã��ٻᣡ\n");
			Sleep(1000);
			exit(0);
		}
		//��������
		default: {
			printf("���������밴�س����ԣ�\n");
			getchar();
			getchar();
			no_log_register();
		}
	}
}
//�����һ�
void no_log_recovery() {
	system("cls");
	printf("Ԥ��½����->�����һ�\n\n");
	printf("��ѡ��������ݣ�\n");
	printf("1.ѧ��\n");
	printf("2.��ʦ\n");
	printf("3.������һ��\n");
	printf("0.�˳�ϵͳ\n");
	int a;
	scanf("%d", &a);
	switch (a) {
		//ѧ���һ�
		case 1: {
			system("cls");
			printf("Ԥ��½����->�����һأ�ѧ����\n\n");
			stu_id* data;
			data = (stu_id*)malloc(sizeof(stu_id));
			printf("�˺ţ�\n");
			scanf("%s", &data->id);
			stu_id* head;
			if (stu_id_judge_load() == '1') {
				head = stu_id_temp_load();
			}
			else {
				head = stu_id_load();
			}
			stu_id* front = head->next;
			while (front) {
				if (!strcmp(front->id, data->id)) {
					strcpy(front->pwd, "123456");
					stu_id_temp_save(head);
					stu_id_judge_save('1');
					printf("\n���뽫����Ϊ123456����ȴ�����Ա����\n");
					Sleep(2000);
					no_log_in();
				}
				front = front->next;
			}
			printf("�����ڸ��û�����������...\n");
			Sleep(1000);
			no_log_recovery();
		}
		//��ʦ�һ�
		case 2: {
			system("cls");
			printf("Ԥ��½����->�����һأ���ʦ��\n\n");
			tch_id* data;
			data = (tch_id*)malloc(sizeof(tch_id));
			printf("�˺ţ�\n");
			scanf("%s", &data->id);
			tch_id* head;
			if (tch_id_judge_load() == '1') {
				head = tch_id_temp_load();
			}
			else {
				head = tch_id_load();
			}
			tch_id* front = head->next;
			while (front) {
				if (!strcmp(front->id, data->id)) {
					strcpy(front->pwd, "123456");
					tch_id_temp_save(head);
					tch_id_judge_save('1');
					printf("\n���뽫����Ϊ123456����ȴ�����Ա����\n");
					Sleep(2000);
					no_log_in();
				}
				front = front->next;
			}
			printf("�����ڸ��û�����������...\n");
			Sleep(1000);
			no_log_recovery();
		};
		//������һ��
		case 3: {
			no_log_in();
			break;
		}
		//�˳�ϵͳ
		case 0: {
			system("cls");
			printf("��л����ʹ�ã��ٻᣡ\n");
			Sleep(1000);
			exit(0);
		}
		//��������
		default: {
			printf("���������밴�س����ԣ�\n");
			getchar();
			getchar();
			no_log_recovery();
		}
	}
}
//��¼����
void log_in() {
	system("cls");
	printf("��½����\n\n");
	stu_id* stu_head = stu_id_load();
	tch_id* tch_head = tch_id_load();
	char id[11];
	char pwd[20];
	//temp���ڱ�ʾ�û����
	int temp = 0;
	printf("�������˺ţ�\n");
	scanf("%s", id);
	//����Ա���
	if (!strcmp(id, "admin")) {
		printf("���������룺\n");
		int i = 0;
		char c;
		while (1) {
			c = _getch();
			if (c == '\r') {
				break;
			}
			else if (c == '\b') {
				printf("\b \b");
				i--;
			}
			else {
				pwd[i++] = c;
				printf("*");
			}
		}
		pwd[i] = '\0';
		printf("\n");
		if (!strcmp(pwd, "7355608")) {
			printf("��¼�ɹ�!�����������Ա�˵�...\n");
			Sleep(1000);
			admin_menu();
		}
		else {
			printf("�������,�����ԣ�\n");
			Sleep(1000);
			log_in();
		}
	}
	//�ж��û����
	while (stu_head) {
		if (!strcmp(id, stu_head->id)) {
			temp = 1;
			break;
		}
		else {
			stu_head = stu_head->next;
		}
	}
	while (tch_head) {
		if (!strcmp(id, tch_head->id)) {
			temp = 2;
			break;
		}
		else {
			tch_head = tch_head->next;
		}
	}
	//ѧ�����
	if (temp == 1) {
		printf("���������룺\n");
		int i = 0;
		char c;
		while (1) {
			c = _getch();
			if (c == '\r') {
				break;
			}
			else if (c == '\b') {
				printf("\b \b");
				i--;
			}
			else {
				pwd[i++] = c;
				printf("*");
			}
		}
		pwd[i] = '\0';
		printf("\n");
		if (strcmp(pwd, stu_head->pwd)) {
			printf("������������µ�¼��\n");
			Sleep(1000);
			log_in();
		}
		else {
			printf("��¼�ɹ�!��������ѧ���˵�...");
			Sleep(1000);
			stu_menu(stu_head->class, stu_head->stu_id);
		}
	}
	//��ʦ���
	if (temp == 2) {
		printf("���������룺\n");
		int i = 0;
		char c;
		while (1) {
			c = _getch();
			if (c == '\r')
				break;
			else if (c == '\b') {
				printf("\b \b");
				i--;
			}
			else {
				pwd[i++] = c;
				printf("*");
			}
		}
		pwd[i] = '\0';
		printf("\n");
		if (strcmp(pwd, tch_head->pwd)) {
			printf("������������ԣ�\n");
			Sleep(1000);
			log_in();
		}
		else {
			printf("��¼�ɹ�!���������ʦ�˵�...");
			Sleep(1000);
			tch_menu(tch_head->class);
		}
	}
	//�������
	if (temp == 0) {
		system("cls");
		printf("���û������ڣ������ԣ�\n");
		Sleep(1000);
		log_in();
	}
}
