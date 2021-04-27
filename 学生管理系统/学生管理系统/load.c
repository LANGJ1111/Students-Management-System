#include "initial.h"

stu* stu_class1_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class1.txt", "a+");
	if(fp != NULL) {
		while (!feof(fp)) {
			front = (stu*)malloc(sizeof(stu));
			fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

stu* stu_class2_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class2.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (stu*)malloc(sizeof(stu));
			fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

stu* stu_class3_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class3.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (stu*)malloc(sizeof(stu));
			fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

stu* stu_class4_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class4.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (stu*)malloc(sizeof(stu));
			fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

stu* stu_class5_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class5.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (stu*)malloc(sizeof(stu));
			fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

stu_id* stu_id_load() {
	stu_id* head, * front, * back;
	FILE* fp;
	head = (stu_id*)malloc(sizeof(stu_id));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_id.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (stu_id*)malloc(sizeof(stu_id));
			fscanf(fp, "%s %s %d %d\n", front->id, front->pwd, &front->class, &front->stu_id);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

tch_id* tch_id_load() {
	tch_id* head, * front, * back;
	FILE* fp;
	head = (tch_id*)malloc(sizeof(tch_id));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\tch_id.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (tch_id*)malloc(sizeof(tch_id));
			fscanf(fp, "%s %s %d\n", front->id, front->pwd, &front->class);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

stu* stu_class1_temp_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class1_temp.txt", "a+");
	char ch = fgetc(fp);
	if (ch == EOF) {
		fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class1.txt", "a+");
	}
	while (!feof(fp)) {
		front = (stu*)malloc(sizeof(stu));
		fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
		front->next = NULL;
		back->next = front;
		back = front;
	}
	fclose(fp);
	return head;
}

stu* stu_class2_temp_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class2_temp.txt", "a+");
	char ch = fgetc(fp);
	if (ch == EOF) {
		fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class2.txt", "a+");
	}
	while (!feof(fp)) {
		front = (stu*)malloc(sizeof(stu));
		fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
		front->next = NULL;
		back->next = front;
		back = front;
	}
	fclose(fp);
	return head;
}

stu* stu_class3_temp_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class3_temp.txt", "a+");
	char ch = fgetc(fp);
	if (ch == EOF) {
		fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class3.txt", "a+");
	}
	while (!feof(fp)) {
		front = (stu*)malloc(sizeof(stu));
		fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
		front->next = NULL;
		back->next = front;
		back = front;
	}
	fclose(fp);
	return head;
}

stu* stu_class4_temp_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class4_temp.txt", "a+");
	char ch = fgetc(fp);
	if (ch == EOF) {
		fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class4.txt", "a+");
	}
	while (!feof(fp)) {
		front = (stu*)malloc(sizeof(stu));
		fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
		front->next = NULL;
		back->next = front;
		back = front;
	}
	fclose(fp);
	return head;
}

stu* stu_class5_temp_load() {
	stu* head, * front, * back;
	FILE* fp;
	head = (stu*)malloc(sizeof(stu));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class5_temp.txt", "a+");
	char ch = fgetc(fp);
	if (ch == EOF) {
		fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class5.txt", "a+");
	}
	while (!feof(fp)) {
		front = (stu*)malloc(sizeof(stu));
		fscanf(fp, "%s %d %s %d %d %d\n", front->name, &front->stu_id, front->class, &front->math, &front->cpp, &front->python);
		front->next = NULL;
		back->next = front;
		back = front;
	}
	fclose(fp);
	return head;
}

stu_id* stu_id_temp_load() {
	stu_id* head, * front, * back;
	FILE* fp;
	head = (stu_id*)malloc(sizeof(stu_id));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_id_temp.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (stu_id*)malloc(sizeof(stu_id));
			fscanf(fp, "%s %s %d %d\n", front->id, front->pwd, &front->class, &front->stu_id);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

tch_id* tch_id_temp_load() {
	tch_id* head, * front, * back;
	FILE* fp;
	head = (tch_id*)malloc(sizeof(tch_id));
	head->next = NULL;
	back = head;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\tch_id_temp.txt", "a+");
	if (fp != NULL) {
		while (!feof(fp)) {
			front = (tch_id*)malloc(sizeof(tch_id));
			fscanf(fp, "%s %s %d\n", front->id, front->pwd, &front->class);
			front->next = NULL;
			back->next = front;
			back = front;
		}
	}
	fclose(fp);
	return head;
}

char stu_grades_judge_load() {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_grades_judge.txt", "a+");
	char judge = fgetc(fp);
	if(judge == EOF) {
		fputc('0', fp);
		judge = '0';
	}
	fclose(fp);
	return judge;
}

char stu_id_judge_load() {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_id_judge.txt", "a+");
	char judge = fgetc(fp);
	if (judge == EOF) {
		fputc('0', fp);
		judge = '0';
	}
	fclose(fp);
	return judge;
}

char tch_id_judge_load() {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\tch_id_judge.txt", "a+");
	char judge = fgetc(fp);
	if (judge == EOF) {
		fputc('0', fp);
		judge = '0';
	}
	fclose(fp);
	return judge;
}

char update_warning_load() {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\update_warning.txt", "a+");
	char judge = fgetc(fp);
	if (judge == EOF) {
		fputc('0', fp);
		judge = '0';
	}
	fclose(fp);
	return judge;
}
