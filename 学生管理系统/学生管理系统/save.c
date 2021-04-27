#include "initial.h"

void stu_class1_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class1.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class2_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class2.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class3_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class3.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class4_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class4.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class5_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class5.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_id_save(stu_id* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_id.txt", "w");
	stu_id* arr = (stu_id*)malloc(sizeof(stu_id));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %s %d %d\n", arr->id, arr->pwd, arr->class, arr->stu_id);
		arr = arr->next;
	}
	fclose(fp);
}

void tch_id_save(tch_id* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\tch_id.txt", "w");
	tch_id* arr = (tch_id*)malloc(sizeof(tch_id));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %s %d\n", arr->id, arr->pwd, arr->class);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class1_temp_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class1_temp.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class2_temp_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class2_temp.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class3_temp_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class3_temp.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class4_temp_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class4_temp.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_class5_temp_save(stu* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\class5_temp.txt", "w");
	stu* arr = (stu*)malloc(sizeof(stu));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %d %s %d %d %d\n", arr->name, arr->stu_id, arr->class, arr->math, arr->cpp, arr->python);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_id_temp_save(stu_id* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_id_temp.txt", "w");
	stu_id* arr = (stu_id*)malloc(sizeof(stu_id));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %s %d %d\n", arr->id, arr->pwd, arr->class, arr->stu_id);
		arr = arr->next;
	}
	fclose(fp);
}

void tch_id_temp_save(tch_id* head) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\tch_id_temp.txt", "w");
	tch_id* arr = (tch_id*)malloc(sizeof(tch_id));
	arr = head->next;
	while (arr) {
		fprintf(fp, "%s %s %d\n", arr->id, arr->pwd, arr->class);
		arr = arr->next;
	}
	fclose(fp);
}

void stu_grades_judge_save(char judge) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_grades_judge.txt", "w");
	fputc(judge, fp);
	fclose(fp);
}

void stu_id_judge_save(char judge) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\stu_id_judge.txt", "w");
	fputc(judge, fp);
	fclose(fp);
}

void tch_id_judge_save(char judge) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\tch_id_judge.txt", "w");
	fputc(judge, fp);
	fclose(fp);
}

void update_warning_save(char judge) {
	FILE* fp;
	fp = fopen("C:\\Users\\lenovo\\Desktop\\ѧ������ϵͳ\\ѧ������ϵͳ\\update_warning.txt", "w");
	fputc(judge, fp);
	fclose(fp);
}
