#include "initial.h"
#include "teacher.h"
#include "log_in.h"
#include "load.h"
#include "save.h"
#include "admin.h"

//管理员菜单
void admin_menu() {
    //成绩申诉
    {
        if (stu_grades_judge_load() == '1') {
            system("cls");
            printf("有新的成绩申诉，是否通过？\n");
            printf("1.是\n");
            printf("2.否\n");
            printf("3.稍后处理\n");
            int b;
            scanf("%d", &b);
            if (b == 1) {
                tch_id* head1, * head2, * head3, * head4, * head5;
                head1 = stu_class1_temp_load();
                head2 = stu_class2_temp_load();
                head3 = stu_class3_temp_load();
                head4 = stu_class4_temp_load();
                head5 = stu_class5_temp_load();
                stu_class1_save(head1);
                stu_class2_save(head2);
                stu_class3_save(head3);
                stu_class4_save(head4);
                stu_class5_save(head5);
                stu_grades_judge_save('0');
                system("cls");
                printf("管理员菜单->查看代办选项->成绩申诉\n\n");
                printf("成绩申诉已通过！即将进入管理员菜单...\n");
                Sleep(1000);
            }
            else if (b == 2) {
                stu_grades_judge_save('0');
                system("cls");
                printf("管理员菜单->查看代办选项->成绩申诉\n\n");
                printf("成绩申诉已驳回！即将进入管理员菜单...\n");
                Sleep(1000);
            }
            else if (b == 3) {
                printf("成绩申诉将在下次登入时处理\n\n即将进入管理员菜单...\n");
                Sleep(1000);
            }
            else {
                printf("输入有误！即将进入管理员菜单...\n");
                Sleep(1000);
            }
        }
    }
    system("cls");
    printf("欢迎使用学生管理系统V1.0\n");
    printf("你好，管理员！\n\n");
    printf("请选择功能\n\n");
    printf("1.查看代办选项\n");
    printf("2.进入教师端\n");
    printf("3.用户管理\n");
    printf("4.手动重新录入学生信息\n");
    printf("5.返回上一层\n");
    printf("0.退出系统\n");
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:
            to_do_list();
            break;
        case 2:
            system("cls");
            printf("管理员菜单\n\n");
            printf("请选择班级：\n");
            int class;
            scanf("%d", &class);
            if(class <= 0 || class >= 5) {
                printf("不存在该班级！即将返回上一级...\n");
                Sleep(1000);
                admin_menu();
            }
            tch_menu(class);
            break;
        case 3:
            id_management();
            break;
        case 4:
            input_stu_information();
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
            admin_menu();
    }
}

//查看代办选项
void to_do_list() {
    system("cls");
    printf("管理员菜单->查看代办选项\n\n");
    printf("请选择功能\n\n");
    printf("1.更新学生用户库\n");
    printf("2.更新教师用户库\n");
    printf("3.返回上一层\n");
    printf("0.退出系统\n");
    int a;
    scanf("%d", &a);
    switch (a) {
        //更新学生用户库
        case 1: {
            if (stu_id_judge_load() == '1') {
                system("cls");
                printf("管理员菜单->查看代办选项->更新学生用户库\n\n");
                printf("学生用户库存在更新，是否更新？\n");
                printf("1.是\n");
                printf("2.否\n");
                printf("3.稍后处理\n");
                int b;
                scanf("%d", &b);
                if(b == 1) {
                    stu_id* head;
                    head = stu_id_temp_load();
                    stu_id_save(head);
                    stu_id_judge_save('0');
                    system("cls");
                    printf("管理员菜单->查看代办选项->更新学生用户库\n\n");
                    printf("学生用户库已更新！即将返回...\n");
                    Sleep(1000);
                    to_do_list();
                }else if(b == 2) {
                    stu_id_judge_save('0');
                    system("cls");
                    printf("管理员菜单->查看代办选项->更新学生用户库\n\n");
                    printf("学生用户库更新已取消！即将返回...\n");
                    Sleep(1000);
                    to_do_list();
                }else if(b == 3) {
                    to_do_list();
                }else {
                    printf("输入有误，请按回车返回上一级\n");
                    getchar();
                    getchar();
                    to_do_list();
                }
                
            }
            else {
                system("cls");
                printf("管理员菜单->查看代办选项->更新学生用户库\n\n");
                printf("学生用户库暂无更新记录！即将返回...\n");
                Sleep(1000);
                to_do_list();
            }
            break;
        }
        //更新教师用户库
        case 2: {
            if (tch_id_judge_load() == '1') {
                system("cls");
                printf("管理员菜单->查看代办选项->更新教师用户库\n\n");
                printf("教师用户库存在更新，是否更新？\n");
                printf("1.是\n");
                printf("2.否\n");
                printf("3.稍后处理\n");
                int b;
                scanf("%d", &b);
                if (b == 1) {
                    tch_id* head;
                    head = tch_id_temp_load();
                    tch_id_save(head);
                    tch_id_judge_save('0');
                    system("cls");
                    printf("管理员菜单->查看代办选项->更新教师用户库\n\n");
                    printf("教师用户库已更新！即将返回...\n");
                    Sleep(1000);
                    to_do_list();
                }
                else if (b == 2) {
                    tch_id_judge_save('0');
                    system("cls");
                    printf("管理员菜单->查看代办选项->更新教师用户库\n\n");
                    printf("教师用户库更新已取消！即将返回...\n");
                    Sleep(1000);
                    to_do_list();
                }
                else if (b == 3) {
                    to_do_list();
                }
                else {
                    printf("输入有误！请按回车返回上一级...\n");
                    getchar();
                    getchar();
                    to_do_list();
                }
            }
            else {
                system("cls");
                printf("管理员菜单->查看代办选项->更新学生用户库\n\n");
                printf("学生用户库暂无更新记录！即将返回...\n");
                Sleep(1000);
                to_do_list();
            }
            break;
        }
        //返回上一层
        case 3: {
            admin_menu();
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
            printf("管理员菜单->查看代办选项\n\n");
            printf("输入有误，请按回车重试！\n");
            getchar();
            getchar();
            admin_menu();
        }
    }
}

//用户管理
void id_management() {
    system("cls");
    printf("管理员菜单->用户管理\n\n");
    printf("请选择功能\n\n");
    printf("1.添加新用户\n");
    printf("2.删除用户\n");
    printf("3.修改用户信息\n");
    printf("4.查找用户信息\n");
    printf("5.批量录入新用户\n");
    printf("6.查看所有用户信息\n");
    printf("7.返回上一层\n");
    printf("0.退出系统\n");
    int a;
    scanf("%d", &a);
    switch (a) {
        //添加新用户
        case 1: {
            system("cls");
            printf("管理员菜单->用户管理->添加新用户\n\n");
            printf("请选择新用户身份：\n");
            printf("1.学生\n");
            printf("2.教师\n");
            int b;
            scanf("%d", &b);
            switch(b) {
                //添加新用户（学生）
                case 1: {
                    if(stu_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->添加新用户（学生）\n\n");
                        printf("请先处理学生用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("管理员菜单->用户管理->添加新用户（学生）\n\n");
                        stu_id* p, * pnew;
                        pnew = (stu_id*)malloc(sizeof(stu_id));
                        char a[20];
                        printf("班级：\n");
                        scanf("%d", &pnew->class);
                        if (pnew->class <= 0 || pnew->class >= 5) {
                            printf("不存在该班级，请重新注册！");
                            Sleep(1000);
                            id_management();
                        }
                        printf("学号：\n");
                        scanf("%d", &pnew->stu_id);
                        stu* q = (stu*)malloc(sizeof(stu));
                        if (pnew->class == 1) {
                            q = stu_class1_load();
                        }
                        else if (pnew->class == 2) {
                            q = stu_class2_load();
                        }
                        else if (pnew->class == 3) {
                            q = stu_class3_load();
                        }
                        else if (pnew->class == 4) {
                            q = stu_class4_load();
                        }
                        else {
                            q = stu_class5_load();
                        }
                        q = q->next;
                        int temp = 1;
                        while (q) {
                            if (q->stu_id == pnew->stu_id) {
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
                            id_management();
                        }
                        stu_id* head;
                        head = stu_id_load();
                        p = head;
                        while (p->next != NULL) {
                            p = p->next;
                        }
                        p->next = pnew;
                        pnew->next = NULL;
                        stu_id_save(head);
                        printf("账号注册成功！\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //添加新用户（教师）
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->添加新用户（教师）\n\n");
                        printf("请先处理教师用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }
                    else {
                        system("cls");
                        printf("管理员菜单->用户管理->添加新用户（教师）\n\n");
                        tch_id* p, * pnew;
                        pnew = (tch_id*)malloc(sizeof(tch_id));
                        char a[20];
                        printf("班级：\n");
                        scanf("%d", &pnew->class);
                        if (pnew->class <= 0 || pnew->class >= 5) {
                            printf("不存在该班级，请重新注册！");
                            Sleep(1000);
                            id_management();
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
                            id_management();
                        }
                        tch_id* head;
                        head = tch_id_load();
                        p = head;
                        while (p->next != NULL) {
                            p = p->next;
                        }
                        p->next = pnew;
                        pnew->next = NULL;
                        tch_id_save(head);
                        printf("账号注册成功！\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //错误输入
                default: {
                    printf("输入有误！请按回车返回上一级...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //删除用户
        case 2: {
            system("cls");
            printf("管理员菜单->用户管理->删除用户\n\n");
            printf("请选择新用户身份：\n");
            printf("1.学生\n");
            printf("2.教师\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //删除用户（学生）
                case 1: {
                    if (stu_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->删除用户（学生）\n\n");
                        printf("请先处理学生用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("管理员菜单->用户管理->删除用户（学生）\n\n");
                        stu_id* p, * q, * data;
                        data = (stu_id*)malloc(sizeof(stu_id));
                        printf("账号：\n");
                        scanf("%s", &data->id);
                        stu_id* head;
                        head = stu_id_load();
                        p = head;
                        q = head->next;
                        while (q) {
                            if(!strcmp(q->id, data->id)) {
                                printf("密码：\n");
                                scanf("%s", &data->pwd);
                                if(!strcmp(q->pwd, data->pwd)) {
                                    p->next = q->next;
                                    stu_id_save(head);
                                    printf("账号删除成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("密码错误！即将返回...");
                                    Sleep(1000);
                                    id_management();
                                }
                            }
                            p = p->next;
                            q = q->next;
                        }
                        printf("不存在该用户！即将返回...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //删除用户（教师）
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->删除用户（教师）\n\n");
                        printf("请先处理教师用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("管理员菜单->用户管理->删除用户（教师）\n\n");
                        tch_id* p, * q, * data;
                        data = (tch_id*)malloc(sizeof(tch_id));
                        printf("账号：\n");
                        scanf("%s", &data->id);
                        tch_id* head;
                        head = tch_id_load();
                        p = head;
                        q = head->next;
                        while (q) {
                            if (!strcmp(q->id, data->id)) {
                                printf("密码：\n");
                                scanf("%s", &data->pwd);
                                if (!strcmp(q->pwd, data->pwd)) {
                                    p->next = q->next;
                                    tch_id_save(head);
                                    printf("账号删除成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("密码错误！即将返回...");
                                    Sleep(1000);
                                    id_management();
                                }
                            }
                            p = p->next;
                            q = q->next;
                        }
                        printf("不存在该用户！即将返回...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //错误输入
                default: {
                    printf("输入有误！请按回车返回上一级...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //修改用户信息
        case 3: {
            system("cls");
            printf("管理员菜单->用户管理->修改用户信息\n\n");
            printf("请选择新用户身份：\n");
            printf("1.学生\n");
            printf("2.教师\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //修改用户信息（学生）
                case 1: {
                    if (stu_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->修改用户信息（学生）\n\n");
                        printf("请先处理学生用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("管理员菜单->用户管理->修改用户信息（学生）\n\n");
                        stu_id* q, * data;
                        data = (stu_id*)malloc(sizeof(stu_id));
                        printf("账号：\n");
                        scanf("%s", &data->id);
                        stu_id* head;
                        head = stu_id_load();
                        q = head->next;
                        while (q) {
                            if (!strcmp(q->id, data->id)) {
                                system("cls");
                                printf("管理员菜单->用户管理->修改用户信息（学生）\n\n");
                                printf("账号：%s\n", q->id);
                                printf("密码：%s\n", q->pwd);
                                printf("班级：网络%d班\n", q->class);
                                printf("学号：%05d\n", q->stu_id);
                                printf("您要修改的是：\n");
                                printf("1.账号\n");
                                printf("2.密码\n");
                                printf("3.班级\n");
                                printf("4.学号\n");
                                int c;
                                scanf("%d", &c);
                                if(c == 1) {
                                    printf("您要修改成：\n");
                                    scanf("%s", &q->id);
                                    stu_id_save(head);
                                    printf("修改成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else if(c == 2) {
                                    printf("您要修改成：\n");
                                    scanf("%s", &q->pwd);
                                    stu_id_save(head);
                                    printf("修改成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else if(c == 3) {
                                    printf("您要修改成（班级数字）：\n");
                                    scanf("%d", &q->class);
                                    if (q->class <= 0 || q->class >= 5) {
                                        printf("不存在该班级！即将返回上一层...\n");
                                        Sleep(1000);
                                        id_management();
                                    }
                                    stu_id_save(head);
                                    printf("修改成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else if(c == 4) {
                                    printf("您要修改成：\n");
                                    scanf("%d", &q->stu_id);
                                    stu_id_save(head);
                                    printf("修改成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("输入有误！请按回车返回上一级...\n");
                                    getchar();
                                    getchar();
                                    id_management();
                                }
                            }
                            q = q->next;
                        }
                        printf("不存在该用户！即将返回...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //修改用户信息（教师）
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->修改用户信息（教师）\n\n");
                        printf("请先处理学生用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("管理员菜单->用户管理->修改用户信息（教师）\n\n");
                        tch_id* q, * data;
                        data = (tch_id*)malloc(sizeof(tch_id));
                        printf("账号：\n");
                        scanf("%s", &data->id);
                        tch_id* head;
                        head = tch_id_load();
                        q = head->next;
                        while (q) {
                            if (!strcmp(q->id, data->id)) {
                                system("cls");
                                printf("管理员菜单->用户管理->修改用户信息（教师）\n\n");
                                printf("账号：%s\n", q->id);
                                printf("密码：%s\n", q->pwd);
                                printf("您要修改的是：\n");
                                printf("1.账号\n");
                                printf("2.密码\n");
                                int c;
                                scanf("%d", &c);
                                if (c == 1) {
                                    printf("您要修改成：\n");
                                    scanf("%s", &q->id);
                                    tch_id_save(head);
                                    printf("修改成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else if (c == 2) {
                                    printf("您要修改成：\n");
                                    scanf("%s", &q->pwd);
                                    tch_id_save(head);
                                    printf("修改成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else if (c == 3) {
                                    printf("您要修改成（班级数字）：\n");
                                    scanf("%d", &q->class);
                                    if (q->class <= 0 || q->class >= 5) {
                                        printf("不存在该班级！即将返回上一层...\n");
                                        Sleep(1000);
                                        id_management();
                                    }
                                    stu_id_save(head);
                                    printf("修改成功！\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("输入有误！请按回车返回上一级...\n");
                                    getchar();
                                    getchar();
                                    id_management();
                                }
                            }
                            q = q->next;
                        }
                        printf("不存在该用户！即将返回...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //错误输入
                default: {
                    printf("输入有误！请按回车返回上一级...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //查找用户信息
        case 4: {
            system("cls");
            printf("管理员菜单->用户管理->查找用户信息\n\n");
            printf("请选择用户身份：\n");
            printf("1.学生\n");
            printf("2.教师\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //查找用户信息（学生）
                case 1: {
                    system("cls");
                    printf("管理员菜单->用户管理->查找用户信息（学生）\n\n");
                    stu_id* q, * data;
                    data = (stu_id*)malloc(sizeof(stu_id));
                    printf("账号：\n");
                    scanf("%s", &data->id);
                    stu_id* head;
                    head = stu_id_load();
                    q = head->next;
                    while (q) {
                        if (!strcmp(q->id, data->id)) {
                            system("cls");
                            printf("管理员菜单->用户管理->查找用户信息（学生）\n\n");
                            printf("账号：%s\n", q->id);
                            printf("密码：%s\n", q->pwd);
                            printf("班级：网络%d班\n", q->class);
                            printf("学号：%05d\n", q->stu_id);
                            printf("按回车返回上一级...\n");
                            getchar();
                            getchar();
                            id_management();
                        }
                        q = q->next;
                    }
                    system("cls");
                    printf("管理员菜单->用户管理->查找用户信息（学生）\n\n");
                    printf("不存在该用户！即将返回...\n");
                    Sleep(1000);
                    id_management();
                    break;
                }
                //查找用户信息（教师）
                case 2: {
                    system("cls");
                    printf("管理员菜单->用户管理->查找用户信息（教师）\n\n");
                    tch_id* q, * data;
                    data = (tch_id*)malloc(sizeof(tch_id));
                    printf("账号：\n");
                    scanf("%s", &data->id);
                    tch_id* head;
                    head = tch_id_load();
                    q = head->next;
                    while (q) {
                        if (!strcmp(q->id, data->id)) {
                            system("cls");
                            printf("管理员菜单->用户管理->查找用户信息（教师）\n\n");
                            printf("账号：%s\n", q->id);
                            printf("密码：%s\n", q->pwd);
                            printf("班级：网络%d班\n", q->class);
                            printf("按回车返回上一级...\n");
                            getchar();
                            getchar();
                            id_management();
                        }
                        q = q->next;
                    }
                    system("cls");
                    printf("管理员菜单->用户管理->查找用户信息（教师）\n\n");
                    printf("不存在该用户！即将返回...\n");
                    Sleep(1000);
                    id_management();
                    break;
                }
                //错误输入
                default: {
                    printf("输入有误！请按回车返回上一级...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //批量录入新用户
        case 5: {
            system("cls");
            printf("管理员菜单->用户管理->批量录入新用户\n\n");
            printf("请选择新用户身份：\n");
            printf("1.学生\n");
            printf("2.教师\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //批量录入新用户（学生）
                case 1: {
                    if (stu_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->批量录入新用户（学生）\n\n");
                        printf("请先处理学生用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("管理员菜单->用户管理->批量录入新用户（学生）\n\n");
                        printf("请输入录入新用户个数：\n");
                        int cnt;
                        scanf("%d", &cnt);
                        printf("请分别输入每个新用户的用户名，密码，班级和学号：\n");
                        stu_id* p, * pnew, * head;
                        head = stu_id_load();
                        p = head;
                        while (p->next != NULL) {
                            p = p->next;
                        }
                        while(cnt--) {
                            pnew = (stu_id*)malloc(sizeof(stu_id));
                            scanf("%s", &pnew->id);
                            scanf("%s", &pnew->pwd);
                            scanf("%d", &pnew->class);
                            scanf("%d", &pnew->stu_id);
                            if (pnew->class <= 0 || pnew->class >= 5) {
                                printf("不存在该班级，请重新注册！");
                                Sleep(1000);
                                id_management();
                            }
                            stu* q = (stu*)malloc(sizeof(stu));
                            if (pnew->class == 1) {
                                q = stu_class1_load();
                            }
                            else if (pnew->class == 2) {
                                q = stu_class2_load();
                            }
                            else if (pnew->class == 3) {
                                q = stu_class3_load();
                            }
                            else if (pnew->class == 4) {
                                q = stu_class4_load();
                            }
                            else {
                                q = stu_class5_load();
                            }
                            q = q->next;
                            int temp = 1;
                            while (q) {
                                if (q->stu_id == pnew->stu_id) {
                                    temp = 0;
                                    break;
                                }
                                q = q->next;
                            }
                            if (temp) {
                                printf("不存在该学号学生，请重新注册！");
                                Sleep(1000);
                                id_management();
                            }
                            p->next = pnew;
                            pnew->next = NULL;
                            p = p->next;
                        }
                        stu_id_save(head);
                        printf("账号录入成功！\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //批量录入新用户（教师）
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("管理员菜单->用户管理->批量录入新用户（教师）\n\n");
                        printf("请先处理学生用户库更新！\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("管理员菜单->用户管理->批量录入新用户（教师）\n\n");
                        printf("请输入录入新用户个数：\n");
                        int cnt;
                        scanf("%d", &cnt);
                        printf("请分别输入每个新用户的用户名，密码和班级：\n");
                        tch_id* p, * pnew, * head;
                        head = tch_id_load();
                        p = head;
                        while (p->next != NULL) {
                            p = p->next;
                        }
                        while (cnt--) {
                            pnew = (tch_id*)malloc(sizeof(tch_id));
                            scanf("%s", &pnew->id);
                            scanf("%s", &pnew->pwd);
                            scanf("%d", &pnew->class);
                            p->next = pnew;
                            pnew->next = NULL;
                            p = p->next;
                        }
                        tch_id_save(head);
                        printf("账号录入成功！\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //错误输入
                default: {
                    printf("输入有误！请按回车返回上一级...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //查看所有用户信息
        case 6: {
            system("cls");
            printf("管理员菜单->用户管理->查看所有用户信息\n\n");
            printf("请选择用户身份：\n");
            printf("1.学生\n");
            printf("2.教师\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //查看所有用户信息（学生）
                case 1: {
                    system("cls");
                    printf("管理员菜单->用户管理->查看所有用户信息（学生）\n\n");
                    stu_id* q;
                    stu_id* head;
                    head = stu_id_load();
                    q = head->next;
                    while (q) {
                        printf("账号：%-8s", q->id);
                        printf("密码：%-8s", q->pwd);
                        printf("班级：网络%d班    ", q->class);
                        printf("学号：%05d\n", q->stu_id);
                        q = q->next;
                    }
                    printf("\n按回车返回...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
                //查看所有用户信息（教师）
                case 2: {
                    system("cls");
                    printf("管理员菜单->用户管理->查看所有用户信息（教师）\n\n");
                    tch_id* q;
                    tch_id* head;
                    head = tch_id_load();
                    q = head->next;
                    while (q) {
                        printf("账号：%-8s", q->id);
                        printf("密码：%-8s", q->pwd);
                        printf("班级：网络%d班\n", q->class);
                        q = q->next;
                    }
                    printf("\n按回车返回...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
                //错误输入
                default: {
                    printf("输入有误！请按回车返回上一级...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //返回上一层
        case 7: {
            admin_menu();
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
            id_management();
        }
    }
}

//手动重新录入学生信息
void input_stu_information() {
    system("cls");
    printf("管理员菜单->用户管理->手动重新录入学生信息\n\n");
    printf("请选择班级：\n");
    printf("1.网络1班\n");
    printf("2.网络2班\n");
    printf("3.网络3班\n");
    printf("4.网络4班\n");
    printf("5.网络5班\n");
    int b;
    scanf("%d", &b);
    switch (b) {
        //手动重新录入学生信息（网络1班）
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络1班）\n\n");
                printf("请先处理学生用户库更新！\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络1班）\n\n");
                printf("请输入学生个数：\n");
                int cnt;
                scanf("%d", &cnt);
                if(cnt <= 0) {
                    printf("输入有误！即将返回...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
                while (cnt--) {
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
                printf("账号录入成功！即将返回上一级...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //手动重新录入学生信息（网络2班）
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络2班）\n\n");
                printf("请先处理学生用户库更新！\n");
                Sleep(1000);
                admin_menu();
            }
            else {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络2班）\n\n");
                printf("请输入学生个数：\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("输入有误！即将返回...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("账号录入成功！即将返回上一级...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //手动重新录入学生信息（网络3班）
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络3班）\n\n");
                printf("请先处理学生用户库更新！\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络3班）\n\n");
                printf("请输入学生个数：\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("输入有误！即将返回...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("账号录入成功！即将返回上一级...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //手动重新录入学生信息（网络4班）
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络4班）\n\n");
                printf("请先处理学生用户库更新！\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络4班）\n\n");
                printf("请输入学生个数：\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("输入有误！即将返回...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("账号录入成功！即将返回上一级...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //手动重新录入学生信息（网络5班）
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络5班）\n\n");
                printf("请先处理学生用户库更新！\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("管理员菜单->用户管理->手动重新录入学生信息（网络5班）\n\n");
                printf("请输入学生个数：\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("输入有误！即将返回...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("请分别输入每个学生的姓名，学号，高数成绩，C++成绩，Python成绩：\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("账号录入成功！即将返回上一级...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //错误输入
        default: {
            printf("输入有误！请按回车返回上一级...\n");
            getchar();
            getchar();
            admin_menu();
            break;
        }
    }
}