#include "initial.h"
#include "teacher.h"
#include "log_in.h"
#include "load.h"
#include "save.h"
#include "admin.h"
#include "student.h"

//��ʦ�˵�
void tch_menu(int class) {
    system("cls");
    printf("��ӭʹ��ѧ������ϵͳV1.0\n\n");
    printf("��ã�����%d���ʦ\n\n", class);
    printf("��ѡ����\n\n");
    printf("1.����ѧ����Ϣ\n");
    printf("2.ɾ��ѧ����Ϣ\n");
    printf("3.�޸�ѧ����Ϣ\n");
    printf("4.��ѯѧ����Ϣ\n");
    printf("5.�������ɼ�\n");
    printf("6.�ɼ�����\n");
    printf("7.������һ��\n");
    printf("0.�˳�ϵͳ\n");
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
        printf("��л����ʹ�ã��ٻᣡ\n");
        Sleep(1000);
        exit(0);
    default:
        printf("���������밴�س����ԣ�\n");
        getchar();
        getchar();
        tch_menu(class);
    }
}

//����ѧ����Ϣ
void stu_add(class) {
    switch (class) {
        //����ѧ����Ϣ������1�ࣩ
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������1�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������1�ࣩ\n\n");
                int cnt;
                printf("��������ӵ�ѧ��������\n");
                scanf("%d", &cnt);
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
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
                    strcpy(pnew->class, "����1��");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class1_save(head);
                printf("ѧ����Ϣ¼��ɹ�������������һ��...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //����ѧ����Ϣ������2�ࣩ
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������2�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������2�ࣩ\n\n");
                int cnt;
                printf("��������ӵ�ѧ��������\n");
                scanf("%d", &cnt);
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
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
                    strcpy(pnew->class, "����2��");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class2_save(head);
                printf("ѧ����Ϣ¼��ɹ�������������һ��...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //����ѧ����Ϣ������3�ࣩ
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������3�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������3�ࣩ\n\n");
                int cnt;
                printf("��������ӵ�ѧ��������\n");
                scanf("%d", &cnt);
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
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
                    strcpy(pnew->class, "����3��");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class3_save(head);
                printf("ѧ����Ϣ¼��ɹ�������������һ��...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //����ѧ����Ϣ������4�ࣩ
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������4�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������4�ࣩ\n\n");
                int cnt;
                printf("��������ӵ�ѧ��������\n");
                scanf("%d", &cnt);
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
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
                    strcpy(pnew->class, "����4��");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class4_save(head);
                printf("ѧ����Ϣ¼��ɹ�������������һ��...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //����ѧ����Ϣ������5�ࣩ
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������5�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }
            else {
                system("cls");
                printf("��ʦ�˵�->����ѧ����Ϣ������5�ࣩ\n\n");
                int cnt;
                printf("��������ӵ�ѧ��������\n");
                scanf("%d", &cnt);
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
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
                    strcpy(pnew->class, "����5��");
                    scanf("%d", &pnew->math);
                    scanf("%d", &pnew->cpp);
                    scanf("%d", &pnew->python);
                    p->next = pnew;
                    pnew->next = NULL;
                    p = p->next;
                }
                stu_class5_save(head);
                printf("ѧ����Ϣ¼��ɹ�������������һ��...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
    }
}

//ɾ��ѧ����Ϣ
void stu_delete(class) {
    switch(class) {
        //ɾ��ѧ����Ϣ������1�ࣩ
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������1�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������1�ࣩ\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class1_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class1_save(head);
                        printf("ѧ����Ϣɾ���ɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //ɾ��ѧ����Ϣ������2�ࣩ
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������2�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������2�ࣩ\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class2_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class2_save(head);
                        printf("ѧ����Ϣɾ���ɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //ɾ��ѧ����Ϣ������3�ࣩ
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������3�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������3�ࣩ\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class3_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class3_save(head);
                        printf("ѧ����Ϣɾ���ɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //ɾ��ѧ����Ϣ������4�ࣩ
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������4�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������4�ࣩ\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class4_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class4_save(head);
                        printf("ѧ����Ϣɾ���ɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //ɾ��ѧ����Ϣ������5�ࣩ
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������5�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }
            else {
                system("cls");
                printf("��ʦ�˵�->ɾ��ѧ����Ϣ������5�ࣩ\n\n");
                stu* p, * q, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class5_load();
                p = head;
                q = head->next;
                while (q) {
                    if (q->stu_id == data->stu_id) {
                        p->next = q->next;
                        stu_class5_save(head);
                        printf("ѧ����Ϣɾ���ɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    p = p->next;
                    q = q->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
    }
}

//�޸�ѧ����Ϣ
void stu_modify(class) {
    switch (class) {
        //�޸�ѧ����Ϣ������1�ࣩ
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������1�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������1�ࣩ\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class1_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("��ʦ�˵�->�޸�ѧ����Ϣ������1�ࣩ\n\n");
                        printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("��Ҫ�޸ĵ��ǣ�\n");
                        printf("1.����\n");
                        printf("2.ѧ��\n");
                        printf("3.�����ɼ�\n");
                        printf("4.C++�ɼ�\n");
                        printf("5.Python�ɼ�\n");
                        int a;
                        scanf("%d", &a);
                        switch(a) {
                            case 1: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%s", arr->name);
                                break;
                            }
                            case 2: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->stu_id);
                                break;
                            }
                            case 3: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->math);
                                break;
                            }
                            case 4: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->cpp);
                                break;
                            }
                            case 5: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->python);
                                break;
                            }
                            default: {
                                printf("������󣡼�������...\n");
                                Sleep(1000);
                                tch_menu(class);
                            }
                        }
                        stu_class1_save(head);
                        printf("ѧ����Ϣ�޸ĳɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //�޸�ѧ����Ϣ������2�ࣩ
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������2�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������2�ࣩ\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class2_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("��ʦ�˵�->�޸�ѧ����Ϣ������2�ࣩ\n\n");
                        printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("��Ҫ�޸ĵ��ǣ�\n");
                        printf("1.����\n");
                        printf("2.ѧ��\n");
                        printf("3.�����ɼ�\n");
                        printf("4.C++�ɼ�\n");
                        printf("5.Python�ɼ�\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                            case 1: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%s", arr->name);
                                break;
                            }
                            case 2: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->stu_id);
                                break;
                            }
                            case 3: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->math);
                                break;
                            }
                            case 4: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->cpp);
                                break;
                            }
                            case 5: {
                                printf("����Ҫ�޸ĳɣ�\n");
                                scanf("%d", &arr->python);
                                break;
                            }
                            default: {
                                printf("������󣡼�������...\n");
                                Sleep(1000);
                                tch_menu(class);
                            }
                        }
                        stu_class2_save(head);
                        printf("ѧ����Ϣ�޸ĳɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //�޸�ѧ����Ϣ������3�ࣩ
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������3�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������3�ࣩ\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class3_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("��ʦ�˵�->�޸�ѧ����Ϣ������3�ࣩ\n\n");
                        printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("��Ҫ�޸ĵ��ǣ�\n");
                        printf("1.����\n");
                        printf("2.ѧ��\n");
                        printf("3.�����ɼ�\n");
                        printf("4.C++�ɼ�\n");
                        printf("5.Python�ɼ�\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                        case 1: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%s", arr->name);
                            break;
                        }
                        case 2: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->stu_id);
                            break;
                        }
                        case 3: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->math);
                            break;
                        }
                        case 4: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->cpp);
                            break;
                        }
                        case 5: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->python);
                            break;
                        }
                        default: {
                            printf("������󣡼�������...\n");
                            Sleep(1000);
                            tch_menu(class);
                        }
                        }
                        stu_class3_save(head);
                        printf("ѧ����Ϣ�޸ĳɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //�޸�ѧ����Ϣ������4�ࣩ
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������4�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������4�ࣩ\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class4_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("��ʦ�˵�->�޸�ѧ����Ϣ������4�ࣩ\n\n");
                        printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("��Ҫ�޸ĵ��ǣ�\n");
                        printf("1.����\n");
                        printf("2.ѧ��\n");
                        printf("3.�����ɼ�\n");
                        printf("4.C++�ɼ�\n");
                        printf("5.Python�ɼ�\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                        case 1: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%s", arr->name);
                            break;
                        }
                        case 2: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->stu_id);
                            break;
                        }
                        case 3: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->math);
                            break;
                        }
                        case 4: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->cpp);
                            break;
                        }
                        case 5: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->python);
                            break;
                        }
                        default: {
                            printf("������󣡼�������...\n");
                            Sleep(1000);
                            tch_menu(class);
                        }
                        }
                        stu_class4_save(head);
                        printf("ѧ����Ϣ�޸ĳɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
        //�޸�ѧ����Ϣ������5�ࣩ
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������5�ࣩ\n\n");
                printf("�ɼ���δ���£������ѹ���Ա���³ɼ��⣡\n");
                Sleep(1000);
                tch_menu(class);
            }else {
                system("cls");
                printf("��ʦ�˵�->�޸�ѧ����Ϣ������5�ࣩ\n\n");
                stu* arr, * data;
                data = (stu*)malloc(sizeof(stu));
                printf("ѧ�ţ�\n");
                scanf("%d", &data->stu_id);
                stu* head;
                head = stu_class5_load();
                arr = head->next;
                while (arr) {
                    if (arr->stu_id == data->stu_id) {
                        system("cls");
                        printf("��ʦ�˵�->�޸�ѧ����Ϣ������5�ࣩ\n\n");
                        printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                        printf("��Ҫ�޸ĵ��ǣ�\n");
                        printf("1.����\n");
                        printf("2.ѧ��\n");
                        printf("3.�����ɼ�\n");
                        printf("4.C++�ɼ�\n");
                        printf("5.Python�ɼ�\n");
                        int a;
                        scanf("%d", &a);
                        switch (a) {
                        case 1: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%s", arr->name);
                            break;
                        }
                        case 2: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->stu_id);
                            break;
                        }
                        case 3: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->math);
                            break;
                        }
                        case 4: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->cpp);
                            break;
                        }
                        case 5: {
                            printf("����Ҫ�޸ĳɣ�\n");
                            scanf("%d", &arr->python);
                            break;
                        }
                        default: {
                            printf("������󣡼�������...\n");
                            Sleep(1000);
                            tch_menu(class);
                        }
                        }
                        stu_class5_save(head);
                        printf("ѧ����Ϣ�޸ĳɹ���\n");
                        Sleep(1000);
                        tch_menu(class);
                    }
                    arr = arr->next;
                }
                printf("�����ڸ�ѧ������������...\n");
                Sleep(1000);
                tch_menu(class);
            }
            break;
        }
    }
}

//��ѯѧ����Ϣ
void stu_search(class) {
    switch (class) {
        //��ѯѧ����Ϣ������1�ࣩ
        case 1: {
            system("cls");
            printf("��ʦ�˵�->��ѯѧ����Ϣ������1�ࣩ\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("ѧ�ţ�\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class1_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("��ʦ�˵�->��ѯѧ����Ϣ������1�ࣩ\n\n");
                    printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("���»س�������...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("�����ڸ�ѧ������������...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //��ѯѧ����Ϣ������2�ࣩ
        case 2: {
            system("cls");
            printf("��ʦ�˵�->��ѯѧ����Ϣ������2�ࣩ\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("ѧ�ţ�\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class2_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("��ʦ�˵�->��ѯѧ����Ϣ������2�ࣩ\n\n");
                    printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("���»س�������...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("�����ڸ�ѧ������������...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //��ѯѧ����Ϣ������3�ࣩ
        case 3: {
            system("cls");
            printf("��ʦ�˵�->��ѯѧ����Ϣ������3�ࣩ\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("ѧ�ţ�\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class3_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("��ʦ�˵�->��ѯѧ����Ϣ������3�ࣩ\n\n");
                    printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("���»س�������...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("�����ڸ�ѧ������������...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //��ѯѧ����Ϣ������4�ࣩ
        case 4: {
            system("cls");
            printf("��ʦ�˵�->��ѯѧ����Ϣ������4�ࣩ\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("ѧ�ţ�\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class4_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("��ʦ�˵�->��ѯѧ����Ϣ������4�ࣩ\n\n");
                    printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("���»س�������...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("�����ڸ�ѧ������������...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
        //��ѯѧ����Ϣ������5�ࣩ
        case 5: {
            system("cls");
            printf("��ʦ�˵�->��ѯѧ����Ϣ������5�ࣩ\n\n");
            stu* arr, * data;
            data = (stu*)malloc(sizeof(stu));
            printf("ѧ�ţ�\n");
            scanf("%d", &data->stu_id);
            stu* head;
            head = stu_class5_load();
            arr = head->next;
            while (arr) {
                if (arr->stu_id == data->stu_id) {
                    system("cls");
                    printf("��ʦ�˵�->��ѯѧ����Ϣ������5�ࣩ\n\n");
                    printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", arr->name, arr->stu_id, arr->math, arr->cpp, arr->python);
                    printf("���»س�������...\n");
                    getchar();
                    getchar();
                    Sleep(1000);
                    tch_menu(class);
                }
                arr = arr->next;
            }
            printf("�����ڸ�ѧ������������...\n");
            Sleep(1000);
            tch_menu(class);
            break;
        }
    }
}

//�������ɼ�
void stu_print(class) {
    system("cls");
    printf("��ʦ�˵�->�������ɼ�\n\n");
    stu* head, * p;
    head = (stu*)malloc(sizeof(stu));
    p = (stu*)malloc(sizeof(stu));
    stu grade[40];
    memset(grade, 0, sizeof(stu) * 40);
    //ȷ���༶
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
        printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", p->name, p->stu_id, p->math, p->cpp, p->python);
        strcpy(grade[num].name, p->name);
        grade[num].stu_id = p->stu_id;
        strcpy(grade[num].class, p->class);
        grade[num].math = p->math;
        grade[num].cpp = p->cpp;
        grade[num].python = p->python;
        num++;
        p = p->next;
    }
    printf("\n���»س�������...\n");
    getchar();
    getchar();
    system("cls");
    printf("��ʦ�˵�->�������ɼ�->����\n\n");
    printf("�Ƿ��������\n");
    printf("1.��\n");
    printf("2.��\n");
    int a;
    scanf("%d", &a);
    //��������
    if (a == 1) {
        system("cls");
        printf("��ʦ�˵�->�������ɼ�->����\n\n");
        printf("��ѡ������ʽ��\n");
        printf("1.����������\n");
        printf("2.��ѧ������\n");
        printf("3.�������ɼ�����\n");
        printf("4.��C++�ɼ�����\n");
        printf("5.��Python�ɼ�����\n");
        int b;
		scanf("%d", &b);
        //����������
		if (b == 1) {
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->����������\n\n");
			printf("\n�����ǽ���\n");
			printf("1.����\n");
			printf("2.����\n");
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
				printf("�������󣡼���������һ��...\n");
				Sleep(1000);
				tch_menu(class);
			}
            p = head->next;
            int i = 0;
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->����������\n\n");
            while (p) {
                printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n���»س���������һ��...\n");
            getchar();
            getchar();
            tch_menu(class);
		}
        //��ѧ������
		else if (b == 2) {
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->��ѧ������\n\n");
			printf("\n�����ǽ���\n");
			printf("1.����\n");
			printf("2.����\n");
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
				printf("�������󣡼���������һ��...\n");
				Sleep(1000);
				tch_menu(class);
			}
            p = head->next;
            int i = 0;
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->��ѧ������\n\n");
            while (p) {
                printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n���»س���������һ��...\n");
            getchar();
            getchar();
            tch_menu(class);
		}
        //�������ɼ�����
		else if (b == 3) {
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->�������ɼ�����\n\n");
			printf("\n�����ǽ���\n");
			printf("1.����\n");
			printf("2.����\n");
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
				printf("�������󣡼���������һ��...\n");
				Sleep(1000);
				tch_menu(class);
			}
            p = head->next;
            int i = 0;
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->�������ɼ�����\n\n");
            while (p) {
                printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n���»س���������һ��...\n");
            getchar();
            getchar();
            tch_menu(class);
		}
        //��C++�ɼ�����
		else if (b == 4) {
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->��C++�ɼ�����\n\n");
		    printf("\n�����ǽ���\n");
		    printf("1.����\n");
		    printf("2.����\n");
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
			    printf("�������󣡼���������һ��...\n");
			    Sleep(1000);
			    tch_menu(class);
		    }
		    p = head->next;
            int i = 0;
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->��C++�ɼ�����\n\n");
		    while (p) {
                printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
		    }
		    printf("\n���»س���������һ��...\n");
		    getchar();
		    getchar();
		    tch_menu(class);
		}
        //��Python�ɼ�����
		else if (b == 5) {
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->��Python�ɼ�����\n\n");
		    printf("\n�����ǽ���\n");
		    printf("1.����\n");
            printf("2.����\n");
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
                printf("�������󣡼���������һ��...\n");
                Sleep(1000);
                tch_menu(class);
            }
            p = head->next;
            int i = 0;
            system("cls");
            printf("��ʦ�˵�->�������ɼ�->��Python�ɼ�����\n\n");
            while (p) {
                printf("������%-8sѧ�ţ�%05d  �����ɼ���%-3d  C++�ɼ���%-3d  Python�ɼ���%-3d\n", grade[i].name, grade[i].stu_id, grade[i].math, grade[i].cpp, grade[i].python);
                p = p->next;
                i++;
            }
            printf("\n���»س���������һ��...\n");
            getchar();
            getchar();
            tch_menu(class);
        }
        //��������
		else {
			printf("�������󣡼���������һ��...\n");
			Sleep(1000);
			tch_menu(class);
        }
    }
    //����������
    else if (a == 2) {
        printf("����������һ��...\n");
        Sleep(1000);
        tch_menu(class);
    }
    //��������
    else {
        printf("�������󣡼���������һ��...\n");
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

//�ɼ�����
void stu_analyse(class) {
    system("cls");
    printf("��ʦ�˵�->�ɼ�����\n\n");
    stu* head, * p;
    head = (stu*)malloc(sizeof(stu));
    p = (stu*)malloc(sizeof(stu));
    stu grade[40];
    memset(grade, 0, sizeof(stu) * 40);
    //ȷ���༶
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
    //���㵱ǰ�༶����
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
    //��������������
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
    printf("���༶�ĸ���ƽ����Ϊ��%.2f�֣����꼶�ŵ�%d����", math_average, math_rank);
    printf("��%d�˼��񣬼�����Ϊ%.f%%\n\n", math_pass, math_pass * 1.0 / num * 100);
    printf("���༶��C++ƽ����Ϊ��%.2f�֣����꼶�ŵ�%d����", cpp_average, cpp_rank);
    printf("��%d�˼��񣬼�����Ϊ%.f%%\n\n", cpp_pass, cpp_pass * 1.0 / num * 100);
    printf("���༶��Pythonƽ����Ϊ��%.2f�֣����꼶�ŵ�%d����", python_average, python_rank);
    printf("��%d�˼��񣬼�����Ϊ%.f%%\n\n", python_pass, python_pass * 1.0 / num * 100);
    printf("\n���»س���������һ��...\n");
    getchar();
    getchar();
    tch_menu(class);
}
