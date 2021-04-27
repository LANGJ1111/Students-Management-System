#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <WinBase.h>  
#include "unistd.h"
//学生数据
typedef struct Stu {
	char name[10];
	int stu_id;
	char class[10];
	int math;
	int cpp;
	int python;
	struct Stu* next;
}stu;
//学生账户
typedef struct Stu_id {
	char id[11];
	char pwd[20];
	int class;
	int stu_id;
	struct Stu_id* next;
}stu_id;
//教师账户
typedef struct Tch_id {
	char id[11];
	char pwd[20];
	int class;
	struct Tch_id* next;
}tch_id;