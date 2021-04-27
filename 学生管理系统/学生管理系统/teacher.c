#include "initial.h"
#include "teacher.h"
#include "log_in.h"
#include "load.h"
#include "save.h"
#include "admin.h"
#include "student.h"

//教师菜单
void tch_menu(int class) {
    system("cls");
    printf("欢迎使用学生管理系统V1.0\n\n");
    printf("你好，网络%d班教师\n\n", class);
    printf("请选择功能\n\n");
    printf("1.增添学生信息\n");
    printf("2.删除学生信息\n");
    printf("3.修改学生信息\n");
    printf("4.查询学生信息\n");
    printf("5.输出本班成绩\n");
    printf("6.成绩分析\n");
    printf("7.返回上一层\n");
    printf("0.退出系统\n");
    int a;
    scanf("%d", &a);
    switch (a) {
    case 1:
        stu_add(class);
        break;
    case 2:
        stu_delete(class);
        break;
    case 3:
        stu_modify(class);
        break;
    case 4:
        stu_search(class);
        break;
    case 5:
        stu_print(class);
        break;
    case 6:
        stu_analyse(class);
        break;
    case 7:
        no_log_in();
    case 0:
        system("cls");
        printf("感谢您的使用，再会！\n");
        Sleep(1000);
        exit(0);
    default:
        printf("输入有误，请按回车重试！\n");
        getchar();
        getchar();
        tch_menu(class);
    }
}

//增添学生信息
void stu_add(class) {
    switch (class) {
        //增添学生信息（网络1班）
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->增添学生信息（网络1班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->增添学生信息（网络1班）\n\n");
                int cnt;
                printf("请输入添加的学生个数：\n");
                scanf("%d", &cnt);
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = stu_class1_load();
                p = head;
                while(p->next) {
                    p = p->next;
                }
                while(cnt--) {
                    pnew = (stu*)malloc(sizeof(stu));
                    scanf("%s", &pnew->name);
                    scanf("%d", &pnew->stu_id);
                    strcpy(pnew->class, "网络1班");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class1_save(head);
                printf("学生信息录入成功！即将返回上一级...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //增添学生信息（网络2班）
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->增添学生信息（网络2班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->增添学生信息（网络2班）\n\n");
                int cnt;
                printf("请输入添加的学生个数：\n");
                scanf("%d", &cnt);
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = stu_class2_load();
                p = head;
                while (p->next) {
                    p = p->next;
                }
                while (cnt--) {
                    pnew = (stu*)malloc(sizeof(stu));
                    scanf("%s", &pnew->name);
                    scanf("%d", &pnew->stu_id);
                    strcpy(pnew->class, "网络2班");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class2_save(head);
                printf("学生信息录入成功！即将返回上一级...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //增添学生信息（网络3班）
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->增添学生信息（网络3班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->增添学生信息（网络3班）\n\n");
                int cnt;
                printf("请输入添加的学生个数：\n");
                scanf("%d", &cnt);
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = stu_class3_load();
                p = head;
                while (p->next) {
                    p = p->next;
                }
                while (cnt--) {
                    pnew = (stu*)malloc(sizeof(stu));
                    scanf("%s", &pnew->name);
                    scanf("%d", &pnew->stu_id);
                    strcpy(pnew->class, "网络3班");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class3_save(head);
                printf("学生信息录入成功！即将返回上一级...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //增添学生信息（网络4班）
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->增添学生信息（网络4班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->增添学生信息（网络4班）\n\n");
                int cnt;
                printf("请输入添加的学生个数：\n");
                scanf("%d", &cnt);
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = stu_class4_load();
                p = head;
                while (p->next) {
                    p = p->next;
                }
                while (cnt--) {
                    pnew = (stu*)malloc(sizeof(stu));
                    scanf("%s", &pnew->name);
                    scanf("%d", &pnew->stu_id);
                    strcpy(pnew->class, "网络4班");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class4_save(head);
                printf("学生信息录入成功！即将返回上一级...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //增添学生信息（网络5班）
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->增添学生信息（网络5班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }
            else {
                system("cls");
                printf("教师菜单->增添学生信息（网络5班）\n\n");
                int cnt;
                printf("请输入添加的学生个数：\n");
                scanf("%d", &cnt);
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = stu_class5_load();
                p = head;
                while (p->next) {
                    p = p->next;
                }
                while (cnt--) {
                    pnew = (stu*)malloc(sizeof(stu));
                    scanf("%s", &pnew->name);
                    scanf("%d", &pnew->stu_id);
                    strcpy(pnew->class, "网络5班");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class5_save(head);
                printf("学生信息录入成功！即将返回上一级...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
    }
}

//删除学生信息
void stu_delete(class) {
    switch(class) {
        //删除学生信息（网络1班）
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->删除学生信息（网络1班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->删除学生信息（网络1班）\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class1_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class1_save(head);
                        printf("学生信息删除成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //删除学生信息（网络2班）
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->删除学生信息（网络2班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->删除学生信息（网络2班）\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class2_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class2_save(head);
                        printf("学生信息删除成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //删除学生信息（网络3班）
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->删除学生信息（网络3班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->删除学生信息（网络3班）\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class3_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class3_save(head);
                        printf("学生信息删除成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //删除学生信息（网络4班）
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->删除学生信息（网络4班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->删除学生信息（网络4班）\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class4_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class4_save(head);
                        printf("学生信息删除成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //删除学生信息（网络5班）
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->删除学生信息（网络5班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }
            else {
                system("cls");
                printf("教师菜单->删除学生信息（网络5班）\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class5_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class5_save(head);
                        printf("学生信息删除成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
    }
}

//修改学生信息
void stu_modify(class) {
    switch (class) {
        //修改学生信息（网络1班）
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->修改学生信息（网络1班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->修改学生信息（网络1班）\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class1_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("教师菜单->修改学生信息（网络1班）\n\n");
                        printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("您要修改的是：\n");
                        printf("1.姓名\n");
                        printf("2.学号\n");
                        printf("3.高数成绩\n");
                        printf("4.C++成绩\n");
                        printf("5.Python成绩\n");
                        int a;
                        scanf("%d", &a);
                        switch(a) {
                            case 1: {
                                printf("您想要修改成：\n");
                                scanf("%s", arr->name);
                                break;
                            }
                            case 2: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->stu_id);
                                break;
                            }
                            case 3: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->math);
                                break;
                            }
                            case 4: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->cpp);
                                break;
                            }
                            case 5: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->python);
                                break;
                            }
                            default: {
                                printf("输入错误！即将返回...\n");
                                Sleep(1000);
                                tch_menu(class);
                            }
                        }
                        stu_class1_save(head);
                        printf("学生信息修改成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //修改学生信息（网络2班）
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->修改学生信息（网络2班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->修改学生信息（网络2班）\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class2_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("教师菜单->修改学生信息（网络2班）\n\n");
                        printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("您要修改的是：\n");
                        printf("1.姓名\n");
                        printf("2.学号\n");
                        printf("3.高数成绩\n");
                        printf("4.C++成绩\n");
                        printf("5.Python成绩\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                            case 1: {
                                printf("您想要修改成：\n");
                                scanf("%s", arr->name);
                                break;
                            }
                            case 2: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->stu_id);
                                break;
                            }
                            case 3: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->math);
                                break;
                            }
                            case 4: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->cpp);
                                break;
                            }
                            case 5: {
                                printf("您想要修改成：\n");
                                scanf("%d", &arr->python);
                                break;
                            }
                            default: {
                                printf("输入错误！即将返回...\n");
                                Sleep(1000);
                                tch_menu(class);
                            }
                        }
                        stu_class2_save(head);
                        printf("学生信息修改成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //修改学生信息（网络3班）
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->修改学生信息（网络3班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->修改学生信息（网络3班）\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class3_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("教师菜单->修改学生信息（网络3班）\n\n");
                        printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("您要修改的是：\n");
                        printf("1.姓名\n");
                        printf("2.学号\n");
                        printf("3.高数成绩\n");
                        printf("4.C++成绩\n");
                        printf("5.Python成绩\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                        case 1: {
                            printf("您想要修改成：\n");
                            scanf("%s", arr->name);
                            break;
                        }
                        case 2: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->stu_id);
                            break;
                        }
                        case 3: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->math);
                            break;
                        }
                        case 4: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->cpp);
                            break;
                        }
                        case 5: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->python);
                            break;
                        }
                        default: {
                            printf("输入错误！即将返回...\n");
                            Sleep(1000);
                            tch_menu(class);
                        }
                        }
                        stu_class3_save(head);
                        printf("学生信息修改成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //修改学生信息（网络4班）
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->修改学生信息（网络4班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->修改学生信息（网络4班）\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class4_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("教师菜单->修改学生信息（网络4班）\n\n");
                        printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("您要修改的是：\n");
                        printf("1.姓名\n");
                        printf("2.学号\n");
                        printf("3.高数成绩\n");
                        printf("4.C++成绩\n");
                        printf("5.Python成绩\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                        case 1: {
                            printf("您想要修改成：\n");
                            scanf("%s", arr->name);
                            break;
                        }
                        case 2: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->stu_id);
                            break;
                        }
                        case 3: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->math);
                            break;
                        }
                        case 4: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->cpp);
                            break;
                        }
                        case 5: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->python);
                            break;
                        }
                        default: {
                            printf("输入错误！即将返回...\n");
                            Sleep(1000);
                            tch_menu(class);
                        }
                        }
                        stu_class4_save(head);
                        printf("学生信息修改成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //修改学生信息（网络5班）
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("教师菜单->修改学生信息（网络5班）\n\n");
                printf("成绩库未更新，请提醒管理员更新成绩库！\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("教师菜单->修改学生信息（网络5班）\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("学号：\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class5_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("教师菜单->修改学生信息（网络5班）\n\n");
                        printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("您要修改的是：\n");
                        printf("1.姓名\n");
                        printf("2.学号\n");
                        printf("3.高数成绩\n");
                        printf("4.C++成绩\n");
                        printf("5.Python成绩\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                        case 1: {
                            printf("您想要修改成：\n");
                            scanf("%s", arr->name);
                            break;
                        }
                        case 2: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->stu_id);
                            break;
                        }
                        case 3: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->math);
                            break;
                        }
                        case 4: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->cpp);
                            break;
                        }
                        case 5: {
                            printf("您想要修改成：\n");
                            scanf("%d", &arr->python);
                            break;
                        }
                        default: {
                            printf("输入错误！即将返回...\n");
                            Sleep(1000);
                            tch_menu(class);
                        }
                        }
                        stu_class5_save(head);
                        printf("学生信息修改成功！\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("不存在该学生！即将返回...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
    }
}

//查询学生信息
void stu_search(class) {
    switch (class) {
        //查询学生信息（网络1班）
        case 1: {
            system("cls");
            printf("教师菜单->查询学生信息（网络1班）\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("学号：\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class1_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("教师菜单->查询学生信息（网络1班）\n\n");
                    printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("按下回车键返回...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("不存在该学生！即将返回...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //查询学生信息（网络2班）
        case 2: {
            system("cls");
            printf("教师菜单->查询学生信息（网络2班）\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("学号：\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class2_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("教师菜单->查询学生信息（网络2班）\n\n");
                    printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("按下回车键返回...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("不存在该学生！即将返回...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //查询学生信息（网络3班）
        case 3: {
            system("cls");
            printf("教师菜单->查询学生信息（网络3班）\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("学号：\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class3_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("教师菜单->查询学生信息（网络3班）\n\n");
                    printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("按下回车键返回...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("不存在该学生！即将返回...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //查询学生信息（网络4班）
        case 4: {
            system("cls");
            printf("教师菜单->查询学生信息（网络4班）\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("学号：\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class4_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("教师菜单->查询学生信息（网络4班）\n\n");
                    printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("按下回车键返回...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("不存在该学生！即将返回...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //查询学生信息（网络5班）
        case 5: {
            system("cls");
            printf("教师菜单->查询学生信息（网络5班）\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("学号：\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class5_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("教师菜单->查询学生信息（网络5班）\n\n");
                    printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("按下回车键返回...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("不存在该学生！即将返回...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
    }
}

//输出本班成绩
void stu_print(class) {
    system("cls");
    printf("教师菜单->输出本班成绩\n\n");
    stu* head, * p;
    head = (stu*)malloc(sizeof(stu));
    p = (stu*)malloc(sizeof(stu));
    stu grade[40];
    memset(grade, 0, sizeof(stu) * 40);
    //确定班级
    if (class == 1) {
        head = stu_class1_load();
        p = head->next;
	}
	else if (class == 2) {
		head = stu_class2_load();
		p = head->next;
	}
	else if (class == 3) {
		head = stu_class3_load();
		p = head->next;
	}
	else if (class == 4) {
		head = stu_class4_load();
		p = head->next;
	}
	else {
		head = stu_class5_load();
		p = head->next;
	}
    int num = 0;
    while (p) {
        printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", p->name, p->stu_id, p->math, p->cpp, p->python);
        strcpy(grade[num].name, p->name);
        grade[num].stu_id = p->stu_id;
        strcpy(grade[num].class, p->class);
        grade[num].math = p->math;
        grade[num].cpp = p->cpp;
        grade[num].python = p->python;
        num++;
        p = p->next;
    }
    printf("\n按下回车键继续...\n");
    getchar();
    getchar();
    system("cls");
    printf("教师菜单->输出本班成绩->排序\n\n");
    printf("是否进行排序？\n");
    printf("1.是\n");
    printf("2.否\n");
    int a;
    scanf("%d", &a);
    //进行排序
    if (a == 1) {
        system("cls");
        printf("教师菜单->输出本班成绩->排序\n\n");
        printf("请选择排序方式：\n");
        printf("1.按姓名排序\n");
        printf("2.按学号排序\n");
        printf("3.按高数成绩排序\n");
        printf("4.按C++成绩排序\n");
        printf("5.按Python成绩排序\n");
        int b;
		scanf("%d", &b);
        //按姓名排序
		if (b == 1) {
            system("cls");
            printf("教师菜单->输出本班成绩->按姓名排序\n\n");
			printf("\n升序还是降序？\n");
			printf("1.升序\n");
			printf("2.降序\n");
			int c;
			scanf("%d", &c);
			if (c == 1) {
				for (int i = 0; i < num - 1; i++) {
					int k = i;
					for (int j = i + 1; j < num; j++) {
						if (strcmp(grade[j].name, grade[k].name) < 0) {
							k = j;
						}
                    }
					swap(&grade[i], &grade[k]);
				}
			}
			else if (c == 2) {
				for (int i = 0; i < num - 1; i++) {
					int k = i;
					for (int j = i + 1; j < num; j++) {
						if (strcmp(grade[j].name, grade[k].name) > 0) {
							k = j;
						}
                    }
					swap(&grade[i], &grade[k]);
				}
			}
			else {
				printf("输入有误！即将返回上一级...\n");
				Sleep(1000);
				tch_menu(class);
			}
            p = head->next;
            int i = 0;
            system("cls");
            printf("教师菜单->输出本班成绩->按姓名排序\n\n");
            while (p) {
                printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n按下回车键返回上一级...\n");
            getchar();
            getchar();
            tch_menu(class);
		}
        //按学号排序
		else if (b == 2) {
            system("cls");
            printf("教师菜单->输出本班成绩->按学号排序\n\n");
			printf("\n升序还是降序？\n");
			printf("1.升序\n");
			printf("2.降序\n");
			int c;
			scanf("%d", &c);
			if (c == 1) {
				for (int i = 0; i < num - 1; i++) {
					int k = i;
					for (int j = i + 1; j < num; j++) {
						if (grade[j].stu_id < grade[k].stu_id) {
							k = j;
						}
                    }
					swap(&grade[i], &grade[k]);
				}
			}
			else if (c == 2) {
				for (int i = 0; i < num - 1; i++) {
					int k = i;
					for (int j = i + 1; j < num; j++) {
						if (grade[j].stu_id > grade[k].stu_id) {
							k = j;
						}
                    }
					swap(&grade[i], &grade[k]);
				}
			}
			else {
				printf("输入有误！即将返回上一级...\n");
				Sleep(1000);
				tch_menu(class);
			}
            p = head->next;
            int i = 0;
            system("cls");
            printf("教师菜单->输出本班成绩->按学号排序\n\n");
            while (p) {
                printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n按下回车键返回上一级...\n");
            getchar();
            getchar();
            tch_menu(class);
		}
        //按高数成绩排序
		else if (b == 3) {
            system("cls");
            printf("教师菜单->输出本班成绩->按高数成绩排序\n\n");
			printf("\n升序还是降序？\n");
			printf("1.升序\n");
			printf("2.降序\n");
			int c;
			scanf("%d", &c);
			if (c == 1) {
				for (int i = 0; i < num - 1; i++) {
					int k = i;
					for (int j = i + 1; j < num; j++) {
						if (grade[j].math < grade[k].math) {
							k = j;
						}
                    }
					swap(&grade[i], &grade[k]);
				}
			}
			else if (c == 2) {
				for (int i = 0; i < num - 1; i++) {
					int k = i;
					for (int j = i + 1; j < num; j++) {
						if (grade[j].math > grade[k].math) {
							k = j;
						}
                    }
					swap(&grade[i], &grade[k]);
				}
			}
			else {
				printf("输入有误！即将返回上一级...\n");
				Sleep(1000);
				tch_menu(class);
			}
            p = head->next;
            int i = 0;
            system("cls");
            printf("教师菜单->输出本班成绩->按高数成绩排序\n\n");
            while (p) {
                printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n按下回车键返回上一级...\n");
            getchar();
            getchar();
            tch_menu(class);
		}
        //按C++成绩排序
		else if (b == 4) {
            system("cls");
            printf("教师菜单->输出本班成绩->按C++成绩排序\n\n");
		    printf("\n升序还是降序？\n");
		    printf("1.升序\n");
		    printf("2.降序\n");
		    int c;
		    scanf("%d", &c);
		    if (c == 1) {
			    for (int i = 0; i < num - 1; i++) {
				    int k = i;
				    for (int j = i + 1; j < num; j++) {
					    if (grade[j].cpp < grade[k].cpp) {
						    k = j;
					    }
				    }
				    swap(&grade[i], &grade[k]);
			    }
		    }
		    else if (c == 2) {
			    for (int i = 0; i < num - 1; i++) {
				    int k = i;
				    for (int j = i + 1; j < num; j++) {
					    if (grade[j].cpp  > grade[k].cpp) {
						    k = j;
					    }
				    }
				    swap(&grade[i], &grade[k]);
			    }
		    }
		    else {
			    printf("输入有误！即将返回上一级...\n");
			    Sleep(1000);
			    tch_menu(class);
		    }
		    p = head->next;
            int i = 0;
            system("cls");
            printf("教师菜单->输出本班成绩->按C++成绩排序\n\n");
		    while (p) {
                printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
		    }
		    printf("\n按下回车键返回上一级...\n");
		    getchar();
		    getchar();
		    tch_menu(class);
		}
        //按Python成绩排序
		else if (b == 5) {
            system("cls");
            printf("教师菜单->输出本班成绩->按Python成绩排序\n\n");
		    printf("\n升序还是降序？\n");
		    printf("1.升序\n");
            printf("2.降序\n");
            int c;
            scanf("%d", &c);
            if (c == 1) {
                for (int i = 0; i < num - 1; i++) {
                    int k = i;
                    for (int j = i + 1; j < num; j++) {
                        if (grade[j].python < grade[k].python) {
                            k = j;
                        }
                    }
                    swap(&grade[i], &grade[k]);
                }
            }
            else if (c == 2) {
                for (int i = 0; i < num - 1; i++) {
                    int k = i;
                    for (int j = i + 1; j < num; j++) {
                        if (grade[j].python < grade[k].python) {
                            k = j;
                        }
                    }
                    swap(&grade[i], &grade[k]);
                }
            }
            else {
                printf("输入有误！即将返回上一级...\n");
                Sleep(1000);
                tch_menu(class);
            }
            p = head->next;
            int i = 0;
            system("cls");
            printf("教师菜单->输出本班成绩->按Python成绩排序\n\n");
            while (p) {
                printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n按下回车键返回上一级...\n");
            getchar();
            getchar();
            tch_menu(class);
        }
        //错误输入
		else {
			printf("输入有误！即将返回上一级...\n");
			Sleep(1000);
			tch_menu(class);
        }
    }
    //不进行排序
    else if (a == 2) {
        printf("即将返回上一级...\n");
        Sleep(1000);
        tch_menu(class);
    }
    //错误输入
    else {
        printf("输入有误！即将返回上一级...\n");
        Sleep(1000);
        tch_menu(class);
    }
}
void swap(stu* x, stu* y)
{
    stu a;
    strcpy(a.name, x->name);
    a.stu_id = x->stu_id;
    strcpy(a.class, x->class);
    a.math = x->math;
    a.cpp = x->cpp;
    a.python = x->python;

    strcpy(x->name, y->name);
    x->stu_id = y->stu_id;
    strcpy(x->class, y->class);
    x->math = y->math;
    x->cpp = y->cpp;
    x->python = y->python;

    strcpy(y->name, a.name);
    y->stu_id = a.stu_id;
    strcpy(y->class, a.class);
    y->math = a.math;
    y->cpp = a.cpp;
    y->python = a.python;
}

//成绩分析
void stu_analyse(class) {
    system("cls");
    printf("教师菜单->成绩分析\n\n");
    stu* head, * p;
    head = (stu*)malloc(sizeof(stu));
    p = (stu*)malloc(sizeof(stu));
    stu grade[40];
    memset(grade, 0, sizeof(stu) * 40);
    //确定班级
    if (class == 1) {
        head = stu_class1_load();
        p = head->next;
    }
    else if (class == 2) {
        head = stu_class2_load();
        p = head->next;
    }
    else if (class == 3) {
        head = stu_class3_load();
        p = head->next;
    }
    else if (class == 4) {
        head = stu_class4_load();
        p = head->next;
    }
    else {
        head = stu_class5_load();
        p = head->next;
    }
    //计算当前班级数据
    int num = 0, math_sum = 0, cpp_sum = 0, python_sum = 0, math_pass = 0, cpp_pass = 0, python_pass = 0;
    float math_average, cpp_average, python_average;
    {
        while (p) {
            math_sum += p->math;
            cpp_sum += p->cpp;
            python_sum += p->python;
            if(p->math >= 60) {
                math_pass++;
            }
            if (p->cpp >= 60) {
                cpp_pass++;
            }
            if (p->python >= 60) {
                python_pass++;
            }
            num++;
            p = p->next;
        }
        math_average = math_sum * 1.0 / num;
        cpp_average = cpp_sum * 1.0 / num;
        python_average = python_sum * 1.0 / num;
    }
    //计算其他班数据
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    int math_sum1 = 0, math_sum2 = 0, math_sum3 = 0, math_sum4 = 0, math_sum5 = 0;
    int cpp_sum1 = 0, cpp_sum2 = 0, cpp_sum3 = 0, cpp_sum4 = 0, cpp_sum5 = 0;
    int python_sum1 = 0, python_sum2 = 0, python_sum3 = 0, python_sum4 = 0, python_sum5 = 0;
    float math_average1, math_average2, math_average3, math_average4, math_average5;
    float cpp_average1, cpp_average2, cpp_average3, cpp_average4, cpp_average5;
    float python_average1, python_average2, python_average3, python_average4, python_average5;
    {
        head = stu_class1_load();
        p = head->next;
        while (p) {
            math_sum1 += p->math;
            cpp_sum1 += p->cpp;
            python_sum1 += p->python;
            num1++;
            p = p->next;
        }
        head = stu_class2_load();
        p = head->next;
        while (p) {
            math_sum2 += p->math;
            cpp_sum2 += p->cpp;
            python_sum2 += p->python;
            num2++;
            p = p->next;
        }
        head = stu_class3_load();
        p = head->next;
        while (p) {
            math_sum3 += p->math;
            cpp_sum3 += p->cpp;
            python_sum3 += p->python;
            num3++;
            p = p->next;
        }
        head = stu_class4_load();
        p = head->next;
        while (p) {
            math_sum4 += p->math;
            cpp_sum4 += p->cpp;
            python_sum4 += p->python;
            num4++;
            p = p->next;
        }
        head = stu_class5_load();
        p = head->next;
        while (p) {
            math_sum5 += p->math;
            cpp_sum5 += p->cpp;
            python_sum5 += p->python;
            num5++;
            p = p->next;
        }
        math_average1 = math_sum1 * 1.0 / num1;
        cpp_average1 = cpp_sum1 * 1.0 / num1;
        python_average1 = python_sum1 * 1.0 / num1;
        math_average2 = math_sum2 * 1.0 / num2;
        cpp_average2 = cpp_sum2 * 1.0 / num2;
        python_average2 = python_sum2 * 1.0 / num2;
        math_average3 = math_sum3 * 1.0 / num3;
        cpp_average3 = cpp_sum3 * 1.0 / num3;
        python_average3 = python_sum3 * 1.0 / num3;
        math_average4 = math_sum4 * 1.0 / num4;
        cpp_average4 = cpp_sum4 * 1.0 / num4;
        python_average4 = python_sum4 * 1.0 / num4;
        math_average5 = math_sum5 * 1.0 / num5;
        cpp_average5 = cpp_sum5 * 1.0 / num5;
        python_average5 = python_sum5 * 1.0 / num5;
    }
    int math_rank = 1, cpp_rank = 1, python_rank = 1;
    if((math_average1 - math_average) > 0.01) {
        math_rank++;
    }
    if ((math_average2 - math_average) > 0.01) {
        math_rank++;
    }
    if ((math_average3 - math_average) > 0.01) {
        math_rank++;
    }
    if ((math_average4 - math_average) > 0.01) {
        math_rank++;
    }
    if ((math_average5 - math_average) > 0.01) {
        math_rank++;
    }
    printf("您班级的高数平均分为：%.2f分，在年级排第%d名，", math_average, math_rank);
    printf("有%d人及格，及格率为%.f%%\n\n", math_pass, math_pass * 1.0 / num * 100);
    printf("您班级的C++平均分为：%.2f分，在年级排第%d名，", cpp_average, cpp_rank);
    printf("有%d人及格，及格率为%.f%%\n\n", cpp_pass, cpp_pass * 1.0 / num * 100);
    printf("您班级的Python平均分为：%.2f分，在年级排第%d名，", python_average, python_rank);
    printf("有%d人及格，及格率为%.f%%\n\n", python_pass, python_pass * 1.0 / num * 100);
    printf("\n按下回车键返回上一级...\n");
    getchar();
    getchar();
    tch_menu(class);
}
