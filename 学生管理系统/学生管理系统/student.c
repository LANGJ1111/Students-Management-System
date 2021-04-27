#include "initial.h"
#include "teacher.h"
#include "log_in.h"
#include "load.h"
#include "save.h"
#include "admin.h"
#include "student.h"

//ѧ���˵�
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
    printf("��ӭʹ��ѧ������ϵͳV1.0\n\n");
    printf("��ã�%sͬѧ\n\n", p->name);
    printf("��ѡ����\n\n");
    printf("1.�ɼ���ѯ\n");
    printf("2.��ѯ����ɼ�\n");
    printf("3.�ɼ�����\n");
    printf("4.�ɼ�����\n");
    printf("5.������һ��\n");
    printf("0.�˳�ϵͳ\n");
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
        printf("��л����ʹ�ã��ٻᣡ\n");
        Sleep(1000);
        exit(0);
    default:
        printf("���������밴�س����ԣ�\n");
        getchar();
        getchar();
        stu_menu(class, stu_id);
    }
}

//�ɼ���ѯ
void self_grade_search(int class, int stu_id) {
    system("cls");
    printf("ѧ���˵�->�ɼ���ѯ\n\n");
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
    printf("%sͬѧ��\n��ĸ����ɼ�Ϊ��%d\n���C++�ɼ�Ϊ��%d\n���Python�ɼ�Ϊ��%d\n\n", p->name, p->math, p->cpp, p->python);
    printf("���»س�������...\n");
    getchar();
    getchar();
    stu_menu(class, stu_id);
}

//��ѯ����ɼ�
void class_grade_search(int class, int stu_id) {
    system("cls");
    printf("ѧ���˵�->��ѯ����ɼ�\n\n");
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
    printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", p->name, p->stu_id, p->math, p->cpp, p->python);
        p = p->next;
    }
    printf("\n���»س�������...\n");
    getchar();
    getchar();
    stu_menu(class, stu_id);
}

//�ɼ�����
void self_grade_analyse(int class, int stu_id) {
    system("cls");
    printf("ѧ���˵�->�ɼ�����\n\n");
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
    printf("%sͬѧ��\n\n", p->name);
    printf("��ĸ����ɼ�Ϊ%d��,�ڰ༶������%d���������%.f������",p->math, math_list, math_percent);
    if((sum - 2 * math_list) > 0) {
        math_level = 1;
        printf("!!!\n\n");
    }else {
        printf("��\n\n");
    }
    printf("���C++�ɼ�Ϊ%d�֣��ڰ༶������%d���������%.f������", p->cpp, cpp_list, cpp_percent);
    if ((sum - 2 * cpp_list) > 0) {
        cpp_level = 1;
        printf("!!!\n\n");
    }
    else {
        printf("��\n\n");
    }
    printf("���Python�ɼ�Ϊ%d�֣��ڰ༶������%d���������%.f������", p->python, python_list, python_percent);
    if ((sum - 2 * python_list) > 0) {
        python_level = 1;
        printf("!!!\n\n");
    }
    else {
        printf("��\n\n");
    }
    if(math_level == 0 && cpp_level == 0 && python_level == 0) {
        printf("���Ǹ�����\n");
    }else if (math_level == 1 && cpp_level == 0 && python_level == 0) {
        printf("���Ǹ���������\n");
    }else if (math_level == 0 && cpp_level == 1 && python_level == 0) {
        printf("���Ǹ�C++����\n");
    }else if (math_level == 0 && cpp_level == 0 && python_level == 1) {
        printf("���Ǹ�Python����\n");
    }else if (math_level == 1 && cpp_level == 1 && python_level == 0) {
        printf("��ѧ��Python�������������\n");
    }else if (math_level == 1 && cpp_level == 0 && python_level == 1) {
        printf("��ѧ��C++�������������\n");
    }else if (math_level == 0 && cpp_level == 1 && python_level == 1) {
        printf("���Ǹ�������\n");
    }else if (math_level == 1 && cpp_level == 1 && python_level == 1) {
        printf("����Ǿ�֣�����\n");
    }
    printf("\n���»س�������...\n");
    getchar();
    getchar();
    stu_menu(class, stu_id);
}

//�ɼ�����
void self_grade_appeal(int class, int stu_id) {
    system("cls");
    printf("ѧ���˵�->�ɼ�����\n\n");
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
    printf("%sͬѧ��\n��ĸ����ɼ�Ϊ��%d\n���C++�ɼ�Ϊ��%d\n���Python�ɼ�Ϊ��%d\n\n", p->name, p->math, p->cpp, p->python);
    printf("����Ҫ���ߵ��ǣ�\n");
    printf("1.�����ɼ�\n");
    printf("2.C++�ɼ�\n");
    printf("3.Python�ɼ�\n");
    int a;
    scanf("%d", &a);
    if (a == 1) {
        printf("\n�����ĳɼ��ǣ�");
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
        printf("ѧ���˵�->�ɼ�����\n\n");
        printf("�ɼ����߳ɹ�����ȴ�����Ա����\n\n");
        printf("����������һ��...\n");
        Sleep(2000);
        stu_menu(class, stu_id);
    }
    else if (a == 2) {
        printf("\n�����ĳɼ��ǣ�");
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
        printf("ѧ���˵�->�ɼ�����\n\n");
        printf("�ɼ����߳ɹ�����ȴ�����Ա����\n\n");
        printf("����������һ��...\n");
        Sleep(2000);
        stu_menu(class, stu_id);
    }
    else if (a == 3) {
        printf("\n�����ĳɼ��ǣ�");
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
        printf("ѧ���˵�->�ɼ�����\n\n");
        printf("�ɼ����߳ɹ�����ȴ�����Ա����\n\n");
        printf("����������һ��...\n");
        Sleep(2000);
        stu_menu(class, stu_id);
    }
    else {
        printf("�������󣡼���������һ��...\n");
        Sleep(1000);
        stu_menu(class, stu_id);
    }
}
