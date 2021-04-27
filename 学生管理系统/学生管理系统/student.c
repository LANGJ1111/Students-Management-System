#include "initial.h"
#include "teacher.h"
#include "log_in.h"
#include "load.h"
#include "save.h"
#include "admin.h"
#include "student.h"

//学生菜单
void stu_menu(int class, int stu_id) {
    stu* p = (stu*)malloc(sizeof(stu));
    if(class ==  1) {
        p = stu_class1_load();
        p = p->next;
    }else if(class == 2) {
        p = stu_class2_load();
        p = p->next;
    }else if (class == 3) {
        p = stu_class3_load();
        p = p->next;
    }else if (class == 4) {
        p = stu_class4_load();
        p = p->next;
    }else {
        p = stu_class5_load();
        p = p->next;
    }
    while(p) {
        if(p->stu_id == stu_id) {
            break;
        }
        p = p->next;
    }
    system("cls");
    printf("欢迎使用学生管理系统V1.0\n\n");
    printf("你好，%s同学\n\n", p->name);
    printf("请选择功能\n\n");
    printf("1.成绩查询\n");
    printf("2.查询本班成绩\n");
    printf("3.成绩分析\n");
    printf("4.成绩申诉\n");
    printf("5.返回上一层\n");
    printf("0.退出系统\n");
    int a;
    scanf("%d", &a);
    switch (a) {
    case 1:
        self_grade_search(class, stu_id);
        break;
    case 2:
        class_grade_search(class, stu_id);
        break;
    case 3:
        self_grade_analyse(class, stu_id);
        break;
    case 4:
        self_grade_appeal(class, stu_id);
        break;
    case 5:
        no_log_in();
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
        stu_menu(class, stu_id);
    }
}

//成绩查询
void self_grade_search(int class, int stu_id) {
    system("cls");
    printf("学生菜单->成绩查询\n\n");
    stu* p = (stu*)malloc(sizeof(stu));
    if (class == 1) {
        p = stu_class1_load();
        p = p->next;
    }
    else if (class == 2) {
        p = stu_class2_load();
        p = p->next;
    }
    else if (class == 3) {
        p = stu_class3_load();
        p = p->next;
    }
    else if (class == 4) {
        p = stu_class4_load();
        p = p->next;
    }
    else {
        p = stu_class5_load();
        p = p->next;
    }
    while (p) {
        if (p->stu_id == stu_id) {
            break;
        }
        p = p->next;
    }
    printf("%s同学，\n你的高数成绩为：%d\n你的C++成绩为：%d\n你的Python成绩为：%d\n\n", p->name, p->math, p->cpp, p->python);
    printf("按下回车键返回...\n");
    getchar();
    getchar();
    stu_menu(class, stu_id);
}

//查询本班成绩
void class_grade_search(int class, int stu_id) {
    system("cls");
    printf("学生菜单->查询本班成绩\n\n");
    stu* p = (stu*)malloc(sizeof(stu));
    if (class == 1) {
        p = stu_class1_load();
        p = p->next;
    }
    else if (class == 2) {
        p = stu_class2_load();
        p = p->next;
    }
    else if (class == 3) {
        p = stu_class3_load();
        p = p->next;
    }
    else if (class == 4) {
        p = stu_class4_load();
        p = p->next;
    }
    else {
        p = stu_class5_load();
        p = p->next;
    }
    while(p) {
    printf("姓名：%-8s学号：%05d  高数成绩：%-3d  C++成绩：%-3d  Python成绩：%-3d\n", p->name, p->stu_id, p->math, p->cpp, p->python);
        p = p->next;
    }
    printf("\n按下回车键返回...\n");
    getchar();
    getchar();
    stu_menu(class, stu_id);
}

//成绩分析
void self_grade_analyse(int class, int stu_id) {
    system("cls");
    printf("学生菜单->成绩分析\n\n");
    stu* p = (stu*)malloc(sizeof(stu));
    stu* q = (stu*)malloc(sizeof(stu));
    stu* head = (stu*)malloc(sizeof(stu));
    if (class == 1) {
        head = stu_class1_load();
    }
    else if (class == 2) {
        head = stu_class2_load();
    }
    else if (class == 3) {
        head = stu_class3_load();
    }
    else if (class == 4) {
        head = stu_class4_load();
    }
    else {
        head = stu_class5_load();
    }
    p = head->next;
    while (p) {
        if (p->stu_id == stu_id) {
            break;
        }
        p = p->next;
    }
    int sum = 0, math_list = 1, cpp_list = 1, python_list = 1;
    q = head->next;
    while(q) {
        sum++;
        q = q->next;
    }
    q = head->next;
    while(q) {
        if(q->math > p->math) {
            math_list++;
        }
        if (q->cpp > p->cpp) {
            cpp_list++;
        }
        if (q->python > p->python) {
            python_list++;
        }
        q = q->next;
    }
    int math_level = 0, cpp_level = 0, python_level = 0;
    float math_percent, cpp_percent, python_percent;
    math_percent = (1 - math_list * 1.0 / sum) * 100;
    cpp_percent = (1 - cpp_list * 1.0 / sum) * 100;
    python_percent = (1 - python_list * 1.0 / sum) * 100;
    if (math_list == 1) {
        math_percent = 100;
    }
    if (cpp_list == 1) {
        cpp_percent = 100;
    }
    if (python_list == 1) {
        python_percent = 100;
    }
    printf("%s同学，\n\n", p->name);
    printf("你的高数成绩为%d分,在班级排名第%d名，打败了%.f％的人",p->math, math_list, math_percent);
    if((sum - 2 * math_list) > 0) {
        math_level = 1;
        printf("!!!\n\n");
    }else {
        printf("。\n\n");
    }
    printf("你的C++成绩为%d分，在班级排名第%d名，打败了%.f％的人", p->cpp, cpp_list, cpp_percent);
    if ((sum - 2 * cpp_list) > 0) {
        cpp_level = 1;
        printf("!!!\n\n");
    }
    else {
        printf("。\n\n");
    }
    printf("你的Python成绩为%d分，在班级排名第%d名，打败了%.f％的人", p->python, python_list, python_percent);
    if ((sum - 2 * python_list) > 0) {
        python_level = 1;
        printf("!!!\n\n");
    }
    else {
        printf("。\n\n");
    }
    if(math_level == 0 && cpp_level == 0 && python_level == 0) {
        printf("你是个废物\n");
    }else if (math_level == 1 && cpp_level == 0 && python_level == 0) {
        printf("你是个高数带佬\n");
    }else if (math_level == 0 && cpp_level == 1 && python_level == 0) {
        printf("你是个C++带佬\n");
    }else if (math_level == 0 && cpp_level == 0 && python_level == 1) {
        printf("你是个Python带佬\n");
    }else if (math_level == 1 && cpp_level == 1 && python_level == 0) {
        printf("再学点Python你就是人上人了\n");
    }else if (math_level == 1 && cpp_level == 0 && python_level == 1) {
        printf("再学点C++你就是人上人了\n");
    }else if (math_level == 0 && cpp_level == 1 && python_level == 1) {
        printf("你是个编程天才\n");
    }else if (math_level == 1 && cpp_level == 1 && python_level == 1) {
        printf("你就是卷怪？？？\n");
    }
    printf("\n按下回车键返回...\n");
    getchar();
    getchar();
    stu_menu(class, stu_id);
}

//成绩申诉
void self_grade_appeal(int class, int stu_id) {
    system("cls");
    printf("学生菜单->成绩申诉\n\n");
    stu* p;
    stu* head;
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
    while (p) {
        if (p->stu_id == stu_id) {
            break;
        }
        p = p->next;
    }
    printf("%s同学，\n你的高数成绩为：%d\n你的C++成绩为：%d\n你的Python成绩为：%d\n\n", p->name, p->math, p->cpp, p->python);
    printf("你想要申诉的是：\n");
    printf("1.高数成绩\n");
    printf("2.C++成绩\n");
    printf("3.Python成绩\n");
    int a;
    scanf("%d", &a);
    if (a == 1) {
        printf("\n真正的成绩是：");
        scanf("%d", &p->math);
        if(class == 1) {
            stu_class1_temp_save(head);
        }else if(class == 2) {
            stu_class2_temp_save(head);
        }else if (class == 3) {
            stu_class3_temp_save(head);
        }else if (class == 4) {
            stu_class4_temp_save(head);
        }else {
            stu_class5_temp_save(head);
        }
        stu_grades_judge_save('1');
        system("cls");
        printf("学生菜单->成绩申诉\n\n");
        printf("成绩申诉成功！请等待管理员处理\n\n");
        printf("即将返回上一级...\n");
        Sleep(2000);
        stu_menu(class, stu_id);
    }
    else if (a == 2) {
        printf("\n真正的成绩是：");
        scanf("%d", &p->cpp);
        if (class == 1) {
            stu_class1_temp_save(head);
        }
        else if (class == 2) {
            stu_class2_temp_save(head);
        }
        else if (class == 3) {
            stu_class3_temp_save(head);
        }
        else if (class == 4) {
            stu_class4_temp_save(head);
        }
        else {
            stu_class5_temp_save(head);
        }
        stu_grades_judge_save('1');
        system("cls");
        printf("学生菜单->成绩申诉\n\n");
        printf("成绩申诉成功！请等待管理员处理\n\n");
        printf("即将返回上一级...\n");
        Sleep(2000);
        stu_menu(class, stu_id);
    }
    else if (a == 3) {
        printf("\n真正的成绩是：");
        scanf("%d", &p->python);
        if (class == 1) {
            stu_class1_temp_save(head);
        }
        else if (class == 2) {
            stu_class2_temp_save(head);
        }
        else if (class == 3) {
            stu_class3_temp_save(head);
        }
        else if (class == 4) {
            stu_class4_temp_save(head);
        }
        else {
            stu_class5_temp_save(head);
        }
        stu_grades_judge_save('1');
        system("cls");
        printf("学生菜单->成绩申诉\n\n");
        printf("成绩申诉成功！请等待管理员处理\n\n");
        printf("即将返回上一级...\n");
        Sleep(2000);
        stu_menu(class, stu_id);
    }
    else {
        printf("输入有误！即将返回上一级...\n");
        Sleep(1000);
        stu_menu(class, stu_id);
    }
}
