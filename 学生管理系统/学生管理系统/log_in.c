#include "initial.h"
#include "load.h"
#include "save.h"
#include "log_in.h"
#include "admin.h"
#include "student.h"
#include "teacher.h"

//预登录界面
void no_log_in() {
	system("cls");
	printf("预登陆界面\n\n");
	printf("请选择功能\n\n");
	printf("1.登录\n");
	printf("2.账号注册\n");
	printf("3.密码修改\n");
	printf("4.密码找回\n");
	printf("0.退出系统\n");
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
			printf("感谢您的使用，再会！\n");
			Sleep(1000);
			exit(0);
		default: 
			printf("输入有误，请按回车重试！\n");
			getchar();
			getchar();
			no_log_in();
	}
}
//账号注册
void no_log_register() {
	system("cls");
	printf("预登陆界面->账号注册\n\n");
	printf("请选择您的身份：\n");
	printf("1.学生\n");
	printf("2.教师\n");
	printf("3.返回上一级\n");
	printf("0.退出系统\n");
	int a;
	scanf("%d", &a);
	switch (a) {
		//学生注册
		case 1: {
			system("cls");
			printf("预登陆界面->账号注册（学生）\n\n");
			stu_id* p, * pnew;
			pnew = (stu_id*)malloc(sizeof(stu_id));
			char a[20];
			printf("班级：\n");
			scanf("%d", &pnew->class);
			if(pnew->class <= 0 || pnew->class > 5) {
				printf("不存在该班级，请重新注册！");
				Sleep(1000);
				no_log_register();
			}
			printf("学号：\n");
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
				printf("不存在该学号学生，请重新注册！");
				Sleep(1000);
				no_log_register();
			}
			printf("账号：\n");
			scanf("%s", &pnew->id);
			printf("密码：\n");
			scanf("%s", &pnew->pwd);
			printf("再次输入密码：\n");
			scanf("%s", a);
			if (strcmp(pnew->pwd, a)) {
				system("cls");
				printf("两次输入的密码不一致，请重新注册！\n");
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
			printf("账号注册成功，请等待管理员处理！\n");
			Sleep(1000);
			no_log_in();
			break;
		}
		//教师注册
		case 2: {
			system("cls");
			printf("预登陆界面->账号注册（教师）\n\n");
			tch_id* p, * pnew;
			pnew = (tch_id*)malloc(sizeof(tch_id));
			char a[20];
			printf("班级：\n");
			scanf("%d", &pnew->class);
			if (pnew->class <= 0 || pnew->class > 5) {
				printf("不存在该班级，请重新注册！");
				Sleep(1000);
				no_log_register();
			}
			printf("账号：\n");
			scanf("%s", &pnew->id);
			printf("密码：\n");
			scanf("%s", &pnew->pwd);
			printf("再次输入密码：\n");
			scanf("%s", a);
			if (strcmp(pnew->pwd, a)) {
				system("cls");
				printf("两次输入的密码不一致，请重新注册！\n");
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
			printf("账号注册成功，请等待管理员处理！\n");
			Sleep(1000);
			no_log_in();
			break;
		};
		//返回上一级
		case 3: {
			no_log_in();
			break;
		}
		//退出系统
		case 0: {
			system("cls");
			printf("感谢您的使用，再会！\n");
			Sleep(1000);
			exit(0);
		}
		//错误输入
		default: {
			printf("输入有误，请按回车重试！\n");
			getchar();
			getchar();
			no_log_register();
		}
	}
}
//密码修改
void no_log_modify() {
	system("cls");
	printf("预登陆界面->密码修改\n\n");
	printf("请选择您的身份：\n");
	printf("1.学生\n");
	printf("2.教师\n");
	printf("3.返回上一级\n");
	printf("0.退出系统\n");
	int a;
	scanf("%d", &a);
	switch (a) {
		//学生修改
		case 1: {
			system("cls");
			printf("预登陆界面->密码修改（学生）\n\n");
			stu_id* data;
			data = (stu_id*)malloc(sizeof(stu_id));
			char a[20];
			printf("账号：\n");
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
					printf("密码：\n");
					scanf("%s", &data->pwd);
					if (!strcmp(front->pwd, data->pwd)) {
						printf("修改后的密码：\n");
						scanf("%s", &data->pwd);
						strcpy(front->pwd, data->pwd);
						stu_id_temp_save(head);
						stu_id_judge_save('1');
						printf("密码修改成功，请等待管理员处理！\n");
						Sleep(1000);
						no_log_in();
					}else {
						printf("密码错误，即将返回...\n");
						Sleep(1000);
						no_log_modify();
					}
				}
				front = front->next;
			}
			printf("不存在该用户！即将返回...\n");
			Sleep(1000);
			no_log_modify();
		}
		//教师修改
		case 2: {
			system("cls");
			printf("预登陆界面->密码修改（教师）\n\n");
			tch_id* data;
			data = (tch_id*)malloc(sizeof(tch_id));
			char a[20];
			printf("账号：\n");
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
					printf("密码：\n");
					scanf("%s", &data->pwd);
					if (!strcmp(front->pwd, data->pwd)) {
						printf("修改后的密码：\n");
						scanf("%s", &data->pwd);
						strcpy(front->pwd, data->pwd);
						tch_id_temp_save(head);
						tch_id_judge_save('1');
						printf("密码修改成功，请等待管理员处理！\n");
						Sleep(1000);
						no_log_in();
					}
					else {
						printf("密码错误！即将返回...\n");
						Sleep(1000);
						no_log_modify();
					}
				}
				front = front->next;
			}
			printf("不存在该用户！即将返回...\n");
			Sleep(1000);
			no_log_modify();
		};
		//返回上一级
		case 3: {
			no_log_in();
			break;
		}
		//退出系统
		case 0: {
			system("cls");
			printf("感谢您的使用，再会！\n");
			Sleep(1000);
			exit(0);
		}
		//错误输入
		default: {
			printf("输入有误，请按回车重试！\n");
			getchar();
			getchar();
			no_log_register();
		}
	}
}
//密码找回
void no_log_recovery() {
	system("cls");
	printf("预登陆界面->密码找回\n\n");
	printf("请选择您的身份：\n");
	printf("1.学生\n");
	printf("2.教师\n");
	printf("3.返回上一级\n");
	printf("0.退出系统\n");
	int a;
	scanf("%d", &a);
	switch (a) {
		//学生找回
		case 1: {
			system("cls");
			printf("预登陆界面->密码找回（学生）\n\n");
			stu_id* data;
			data = (stu_id*)malloc(sizeof(stu_id));
			printf("账号：\n");
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
					printf("\n密码将重置为123456，请等待管理员处理！\n");
					Sleep(2000);
					no_log_in();
				}
				front = front->next;
			}
			printf("不存在该用户，即将返回...\n");
			Sleep(1000);
			no_log_recovery();
		}
		//教师找回
		case 2: {
			system("cls");
			printf("预登陆界面->密码找回（教师）\n\n");
			tch_id* data;
			data = (tch_id*)malloc(sizeof(tch_id));
			printf("账号：\n");
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
					printf("\n密码将重置为123456，请等待管理员处理！\n");
					Sleep(2000);
					no_log_in();
				}
				front = front->next;
			}
			printf("不存在该用户，即将返回...\n");
			Sleep(1000);
			no_log_recovery();
		};
		//返回上一级
		case 3: {
			no_log_in();
			break;
		}
		//退出系统
		case 0: {
			system("cls");
			printf("感谢您的使用，再会！\n");
			Sleep(1000);
			exit(0);
		}
		//错误输入
		default: {
			printf("输入有误，请按回车重试！\n");
			getchar();
			getchar();
			no_log_recovery();
		}
	}
}
//登录界面
void log_in() {
	system("cls");
	printf("登陆界面\n\n");
	stu_id* stu_head = stu_id_load();
	tch_id* tch_head = tch_id_load();
	char id[11];
	char pwd[20];
	//temp用于表示用户身份
	int temp = 0;
	printf("请输入账号：\n");
	scanf("%s", id);
	//管理员身份
	if (!strcmp(id, "admin")) {
		printf("请输入密码：\n");
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
			printf("登录成功!即将进入管理员菜单...\n");
			Sleep(1000);
			admin_menu();
		}
		else {
			printf("密码错误,请重试！\n");
			Sleep(1000);
			log_in();
		}
	}
	//判断用户身份
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
	//学生身份
	if (temp == 1) {
		printf("请输入密码：\n");
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
			printf("密码错误，请重新登录！\n");
			Sleep(1000);
			log_in();
		}
		else {
			printf("登录成功!即将进入学生菜单...");
			Sleep(1000);
			stu_menu(stu_head->class, stu_head->stu_id);
		}
	}
	//教师身份
	if (temp == 2) {
		printf("请输入密码：\n");
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
			printf("密码错误，请重试！\n");
			Sleep(1000);
			log_in();
		}
		else {
			printf("登录成功!即将进入教师菜单...");
			Sleep(1000);
			tch_menu(tch_head->class);
		}
	}
	//错误身份
	if (temp == 0) {
		system("cls");
		printf("该用户不存在，请重试！\n");
		Sleep(1000);
		log_in();
	}
}
