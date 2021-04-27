#include "initial.h"
#include "teacher.h"
#include "log_in.h"
#include "load.h"
#include "save.h"
#include "admin.h"

//����Ա�˵�
void admin_menu() {
    //�ɼ�����
    {
        if (stu_grades_judge_load() == '1') {
            system("cls");
            printf("���µĳɼ����ߣ��Ƿ�ͨ����\n");
            printf("1.��\n");
            printf("2.��\n");
            printf("3.�Ժ���\n");
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
                printf("����Ա�˵�->�鿴����ѡ��->�ɼ�����\n\n");
                printf("�ɼ�������ͨ���������������Ա�˵�...\n");
                Sleep(1000);
            }
            else if (b == 2) {
                stu_grades_judge_save('0');
                system("cls");
                printf("����Ա�˵�->�鿴����ѡ��->�ɼ�����\n\n");
                printf("�ɼ������Ѳ��أ������������Ա�˵�...\n");
                Sleep(1000);
            }
            else if (b == 3) {
                printf("�ɼ����߽����´ε���ʱ����\n\n�����������Ա�˵�...\n");
                Sleep(1000);
            }
            else {
                printf("�������󣡼����������Ա�˵�...\n");
                Sleep(1000);
            }
        }
    }
    system("cls");
    printf("��ӭʹ��ѧ������ϵͳV1.0\n");
    printf("��ã�����Ա��\n\n");
    printf("��ѡ����\n\n");
    printf("1.�鿴����ѡ��\n");
    printf("2.�����ʦ��\n");
    printf("3.�û�����\n");
    printf("4.�ֶ�����¼��ѧ����Ϣ\n");
    printf("5.������һ��\n");
    printf("0.�˳�ϵͳ\n");
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:
            to_do_list();
            break;
        case 2:
            system("cls");
            printf("����Ա�˵�\n\n");
            printf("��ѡ��༶��\n");
            int class;
            scanf("%d", &class);
            if(class <= 0 || class >= 5) {
                printf("�����ڸð༶������������һ��...\n");
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
            printf("��л����ʹ�ã��ٻᣡ\n");
            Sleep(1000);
            exit(0);
        default: 
            printf("���������밴�س����ԣ�\n");
            getchar();
            getchar();
            admin_menu();
    }
}

//�鿴����ѡ��
void to_do_list() {
    system("cls");
    printf("����Ա�˵�->�鿴����ѡ��\n\n");
    printf("��ѡ����\n\n");
    printf("1.����ѧ���û���\n");
    printf("2.���½�ʦ�û���\n");
    printf("3.������һ��\n");
    printf("0.�˳�ϵͳ\n");
    int a;
    scanf("%d", &a);
    switch (a) {
        //����ѧ���û���
        case 1: {
            if (stu_id_judge_load() == '1') {
                system("cls");
                printf("����Ա�˵�->�鿴����ѡ��->����ѧ���û���\n\n");
                printf("ѧ���û�����ڸ��£��Ƿ���£�\n");
                printf("1.��\n");
                printf("2.��\n");
                printf("3.�Ժ���\n");
                int b;
                scanf("%d", &b);
                if(b == 1) {
                    stu_id* head;
                    head = stu_id_temp_load();
                    stu_id_save(head);
                    stu_id_judge_save('0');
                    system("cls");
                    printf("����Ա�˵�->�鿴����ѡ��->����ѧ���û���\n\n");
                    printf("ѧ���û����Ѹ��£���������...\n");
                    Sleep(1000);
                    to_do_list();
                }else if(b == 2) {
                    stu_id_judge_save('0');
                    system("cls");
                    printf("����Ա�˵�->�鿴����ѡ��->����ѧ���û���\n\n");
                    printf("ѧ���û��������ȡ������������...\n");
                    Sleep(1000);
                    to_do_list();
                }else if(b == 3) {
                    to_do_list();
                }else {
                    printf("���������밴�س�������һ��\n");
                    getchar();
                    getchar();
                    to_do_list();
                }
                
            }
            else {
                system("cls");
                printf("����Ա�˵�->�鿴����ѡ��->����ѧ���û���\n\n");
                printf("ѧ���û������޸��¼�¼����������...\n");
                Sleep(1000);
                to_do_list();
            }
            break;
        }
        //���½�ʦ�û���
        case 2: {
            if (tch_id_judge_load() == '1') {
                system("cls");
                printf("����Ա�˵�->�鿴����ѡ��->���½�ʦ�û���\n\n");
                printf("��ʦ�û�����ڸ��£��Ƿ���£�\n");
                printf("1.��\n");
                printf("2.��\n");
                printf("3.�Ժ���\n");
                int b;
                scanf("%d", &b);
                if (b == 1) {
                    tch_id* head;
                    head = tch_id_temp_load();
                    tch_id_save(head);
                    tch_id_judge_save('0');
                    system("cls");
                    printf("����Ա�˵�->�鿴����ѡ��->���½�ʦ�û���\n\n");
                    printf("��ʦ�û����Ѹ��£���������...\n");
                    Sleep(1000);
                    to_do_list();
                }
                else if (b == 2) {
                    tch_id_judge_save('0');
                    system("cls");
                    printf("����Ա�˵�->�鿴����ѡ��->���½�ʦ�û���\n\n");
                    printf("��ʦ�û��������ȡ������������...\n");
                    Sleep(1000);
                    to_do_list();
                }
                else if (b == 3) {
                    to_do_list();
                }
                else {
                    printf("���������밴�س�������һ��...\n");
                    getchar();
                    getchar();
                    to_do_list();
                }
            }
            else {
                system("cls");
                printf("����Ա�˵�->�鿴����ѡ��->����ѧ���û���\n\n");
                printf("ѧ���û������޸��¼�¼����������...\n");
                Sleep(1000);
                to_do_list();
            }
            break;
        }
        //������һ��
        case 3: {
            admin_menu();
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
            printf("����Ա�˵�->�鿴����ѡ��\n\n");
            printf("���������밴�س����ԣ�\n");
            getchar();
            getchar();
            admin_menu();
        }
    }
}

//�û�����
void id_management() {
    system("cls");
    printf("����Ա�˵�->�û�����\n\n");
    printf("��ѡ����\n\n");
    printf("1.������û�\n");
    printf("2.ɾ���û�\n");
    printf("3.�޸��û���Ϣ\n");
    printf("4.�����û���Ϣ\n");
    printf("5.����¼�����û�\n");
    printf("6.�鿴�����û���Ϣ\n");
    printf("7.������һ��\n");
    printf("0.�˳�ϵͳ\n");
    int a;
    scanf("%d", &a);
    switch (a) {
        //������û�
        case 1: {
            system("cls");
            printf("����Ա�˵�->�û�����->������û�\n\n");
            printf("��ѡ�����û���ݣ�\n");
            printf("1.ѧ��\n");
            printf("2.��ʦ\n");
            int b;
            scanf("%d", &b);
            switch(b) {
                //������û���ѧ����
                case 1: {
                    if(stu_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->������û���ѧ����\n\n");
                        printf("���ȴ���ѧ���û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->������û���ѧ����\n\n");
                        stu_id* p, * pnew;
                        pnew = (stu_id*)malloc(sizeof(stu_id));
                        char a[20];
                        printf("�༶��\n");
                        scanf("%d", &pnew->class);
                        if (pnew->class <= 0 || pnew->class >= 5) {
                            printf("�����ڸð༶��������ע�ᣡ");
                            Sleep(1000);
                            id_management();
                        }
                        printf("ѧ�ţ�\n");
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
                        printf("�˺�ע��ɹ���\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //������û�����ʦ��
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->������û�����ʦ��\n\n");
                        printf("���ȴ����ʦ�û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }
                    else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->������û�����ʦ��\n\n");
                        tch_id* p, * pnew;
                        pnew = (tch_id*)malloc(sizeof(tch_id));
                        char a[20];
                        printf("�༶��\n");
                        scanf("%d", &pnew->class);
                        if (pnew->class <= 0 || pnew->class >= 5) {
                            printf("�����ڸð༶��������ע�ᣡ");
                            Sleep(1000);
                            id_management();
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
                        printf("�˺�ע��ɹ���\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //��������
                default: {
                    printf("���������밴�س�������һ��...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //ɾ���û�
        case 2: {
            system("cls");
            printf("����Ա�˵�->�û�����->ɾ���û�\n\n");
            printf("��ѡ�����û���ݣ�\n");
            printf("1.ѧ��\n");
            printf("2.��ʦ\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //ɾ���û���ѧ����
                case 1: {
                    if (stu_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->ɾ���û���ѧ����\n\n");
                        printf("���ȴ���ѧ���û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->ɾ���û���ѧ����\n\n");
                        stu_id* p, * q, * data;
                        data = (stu_id*)malloc(sizeof(stu_id));
                        printf("�˺ţ�\n");
                        scanf("%s", &data->id);
                        stu_id* head;
                        head = stu_id_load();
                        p = head;
                        q = head->next;
                        while (q) {
                            if(!strcmp(q->id, data->id)) {
                                printf("���룺\n");
                                scanf("%s", &data->pwd);
                                if(!strcmp(q->pwd, data->pwd)) {
                                    p->next = q->next;
                                    stu_id_save(head);
                                    printf("�˺�ɾ���ɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("������󣡼�������...");
                                    Sleep(1000);
                                    id_management();
                                }
                            }
                            p = p->next;
                            q = q->next;
                        }
                        printf("�����ڸ��û�����������...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //ɾ���û�����ʦ��
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->ɾ���û�����ʦ��\n\n");
                        printf("���ȴ����ʦ�û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->ɾ���û�����ʦ��\n\n");
                        tch_id* p, * q, * data;
                        data = (tch_id*)malloc(sizeof(tch_id));
                        printf("�˺ţ�\n");
                        scanf("%s", &data->id);
                        tch_id* head;
                        head = tch_id_load();
                        p = head;
                        q = head->next;
                        while (q) {
                            if (!strcmp(q->id, data->id)) {
                                printf("���룺\n");
                                scanf("%s", &data->pwd);
                                if (!strcmp(q->pwd, data->pwd)) {
                                    p->next = q->next;
                                    tch_id_save(head);
                                    printf("�˺�ɾ���ɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("������󣡼�������...");
                                    Sleep(1000);
                                    id_management();
                                }
                            }
                            p = p->next;
                            q = q->next;
                        }
                        printf("�����ڸ��û�����������...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //��������
                default: {
                    printf("���������밴�س�������һ��...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //�޸��û���Ϣ
        case 3: {
            system("cls");
            printf("����Ա�˵�->�û�����->�޸��û���Ϣ\n\n");
            printf("��ѡ�����û���ݣ�\n");
            printf("1.ѧ��\n");
            printf("2.��ʦ\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //�޸��û���Ϣ��ѧ����
                case 1: {
                    if (stu_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->�޸��û���Ϣ��ѧ����\n\n");
                        printf("���ȴ���ѧ���û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->�޸��û���Ϣ��ѧ����\n\n");
                        stu_id* q, * data;
                        data = (stu_id*)malloc(sizeof(stu_id));
                        printf("�˺ţ�\n");
                        scanf("%s", &data->id);
                        stu_id* head;
                        head = stu_id_load();
                        q = head->next;
                        while (q) {
                            if (!strcmp(q->id, data->id)) {
                                system("cls");
                                printf("����Ա�˵�->�û�����->�޸��û���Ϣ��ѧ����\n\n");
                                printf("�˺ţ�%s\n", q->id);
                                printf("���룺%s\n", q->pwd);
                                printf("�༶������%d��\n", q->class);
                                printf("ѧ�ţ�%05d\n", q->stu_id);
                                printf("��Ҫ�޸ĵ��ǣ�\n");
                                printf("1.�˺�\n");
                                printf("2.����\n");
                                printf("3.�༶\n");
                                printf("4.ѧ��\n");
                                int c;
                                scanf("%d", &c);
                                if(c == 1) {
                                    printf("��Ҫ�޸ĳɣ�\n");
                                    scanf("%s", &q->id);
                                    stu_id_save(head);
                                    printf("�޸ĳɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else if(c == 2) {
                                    printf("��Ҫ�޸ĳɣ�\n");
                                    scanf("%s", &q->pwd);
                                    stu_id_save(head);
                                    printf("�޸ĳɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else if(c == 3) {
                                    printf("��Ҫ�޸ĳɣ��༶���֣���\n");
                                    scanf("%d", &q->class);
                                    if (q->class <= 0 || q->class >= 5) {
                                        printf("�����ڸð༶������������һ��...\n");
                                        Sleep(1000);
                                        id_management();
                                    }
                                    stu_id_save(head);
                                    printf("�޸ĳɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else if(c == 4) {
                                    printf("��Ҫ�޸ĳɣ�\n");
                                    scanf("%d", &q->stu_id);
                                    stu_id_save(head);
                                    printf("�޸ĳɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("���������밴�س�������һ��...\n");
                                    getchar();
                                    getchar();
                                    id_management();
                                }
                            }
                            q = q->next;
                        }
                        printf("�����ڸ��û�����������...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //�޸��û���Ϣ����ʦ��
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->�޸��û���Ϣ����ʦ��\n\n");
                        printf("���ȴ���ѧ���û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->�޸��û���Ϣ����ʦ��\n\n");
                        tch_id* q, * data;
                        data = (tch_id*)malloc(sizeof(tch_id));
                        printf("�˺ţ�\n");
                        scanf("%s", &data->id);
                        tch_id* head;
                        head = tch_id_load();
                        q = head->next;
                        while (q) {
                            if (!strcmp(q->id, data->id)) {
                                system("cls");
                                printf("����Ա�˵�->�û�����->�޸��û���Ϣ����ʦ��\n\n");
                                printf("�˺ţ�%s\n", q->id);
                                printf("���룺%s\n", q->pwd);
                                printf("��Ҫ�޸ĵ��ǣ�\n");
                                printf("1.�˺�\n");
                                printf("2.����\n");
                                int c;
                                scanf("%d", &c);
                                if (c == 1) {
                                    printf("��Ҫ�޸ĳɣ�\n");
                                    scanf("%s", &q->id);
                                    tch_id_save(head);
                                    printf("�޸ĳɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else if (c == 2) {
                                    printf("��Ҫ�޸ĳɣ�\n");
                                    scanf("%s", &q->pwd);
                                    tch_id_save(head);
                                    printf("�޸ĳɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else if (c == 3) {
                                    printf("��Ҫ�޸ĳɣ��༶���֣���\n");
                                    scanf("%d", &q->class);
                                    if (q->class <= 0 || q->class >= 5) {
                                        printf("�����ڸð༶������������һ��...\n");
                                        Sleep(1000);
                                        id_management();
                                    }
                                    stu_id_save(head);
                                    printf("�޸ĳɹ���\n");
                                    Sleep(1000);
                                    id_management();
                                }else {
                                    printf("���������밴�س�������һ��...\n");
                                    getchar();
                                    getchar();
                                    id_management();
                                }
                            }
                            q = q->next;
                        }
                        printf("�����ڸ��û�����������...\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //��������
                default: {
                    printf("���������밴�س�������һ��...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //�����û���Ϣ
        case 4: {
            system("cls");
            printf("����Ա�˵�->�û�����->�����û���Ϣ\n\n");
            printf("��ѡ���û���ݣ�\n");
            printf("1.ѧ��\n");
            printf("2.��ʦ\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //�����û���Ϣ��ѧ����
                case 1: {
                    system("cls");
                    printf("����Ա�˵�->�û�����->�����û���Ϣ��ѧ����\n\n");
                    stu_id* q, * data;
                    data = (stu_id*)malloc(sizeof(stu_id));
                    printf("�˺ţ�\n");
                    scanf("%s", &data->id);
                    stu_id* head;
                    head = stu_id_load();
                    q = head->next;
                    while (q) {
                        if (!strcmp(q->id, data->id)) {
                            system("cls");
                            printf("����Ա�˵�->�û�����->�����û���Ϣ��ѧ����\n\n");
                            printf("�˺ţ�%s\n", q->id);
                            printf("���룺%s\n", q->pwd);
                            printf("�༶������%d��\n", q->class);
                            printf("ѧ�ţ�%05d\n", q->stu_id);
                            printf("���س�������һ��...\n");
                            getchar();
                            getchar();
                            id_management();
                        }
                        q = q->next;
                    }
                    system("cls");
                    printf("����Ա�˵�->�û�����->�����û���Ϣ��ѧ����\n\n");
                    printf("�����ڸ��û�����������...\n");
                    Sleep(1000);
                    id_management();
                    break;
                }
                //�����û���Ϣ����ʦ��
                case 2: {
                    system("cls");
                    printf("����Ա�˵�->�û�����->�����û���Ϣ����ʦ��\n\n");
                    tch_id* q, * data;
                    data = (tch_id*)malloc(sizeof(tch_id));
                    printf("�˺ţ�\n");
                    scanf("%s", &data->id);
                    tch_id* head;
                    head = tch_id_load();
                    q = head->next;
                    while (q) {
                        if (!strcmp(q->id, data->id)) {
                            system("cls");
                            printf("����Ա�˵�->�û�����->�����û���Ϣ����ʦ��\n\n");
                            printf("�˺ţ�%s\n", q->id);
                            printf("���룺%s\n", q->pwd);
                            printf("�༶������%d��\n", q->class);
                            printf("���س�������һ��...\n");
                            getchar();
                            getchar();
                            id_management();
                        }
                        q = q->next;
                    }
                    system("cls");
                    printf("����Ա�˵�->�û�����->�����û���Ϣ����ʦ��\n\n");
                    printf("�����ڸ��û�����������...\n");
                    Sleep(1000);
                    id_management();
                    break;
                }
                //��������
                default: {
                    printf("���������밴�س�������һ��...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //����¼�����û�
        case 5: {
            system("cls");
            printf("����Ա�˵�->�û�����->����¼�����û�\n\n");
            printf("��ѡ�����û���ݣ�\n");
            printf("1.ѧ��\n");
            printf("2.��ʦ\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //����¼�����û���ѧ����
                case 1: {
                    if (stu_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->����¼�����û���ѧ����\n\n");
                        printf("���ȴ���ѧ���û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->����¼�����û���ѧ����\n\n");
                        printf("������¼�����û�������\n");
                        int cnt;
                        scanf("%d", &cnt);
                        printf("��ֱ�����ÿ�����û����û��������룬�༶��ѧ�ţ�\n");
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
                                printf("�����ڸð༶��������ע�ᣡ");
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
                                printf("�����ڸ�ѧ��ѧ����������ע�ᣡ");
                                Sleep(1000);
                                id_management();
                            }
                            p->next = pnew;
                            pnew->next = NULL;
                            p = p->next;
                        }
                        stu_id_save(head);
                        printf("�˺�¼��ɹ���\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //����¼�����û�����ʦ��
                case 2: {
                    if (tch_id_judge_load() == '1') {
                        system("cls");
                        printf("����Ա�˵�->�û�����->����¼�����û�����ʦ��\n\n");
                        printf("���ȴ���ѧ���û�����£�\n");
                        Sleep(1000);
                        id_management();
                    }else {
                        system("cls");
                        printf("����Ա�˵�->�û�����->����¼�����û�����ʦ��\n\n");
                        printf("������¼�����û�������\n");
                        int cnt;
                        scanf("%d", &cnt);
                        printf("��ֱ�����ÿ�����û����û���������Ͱ༶��\n");
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
                        printf("�˺�¼��ɹ���\n");
                        Sleep(1000);
                        id_management();
                    }
                    break;
                }
                //��������
                default: {
                    printf("���������밴�س�������һ��...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //�鿴�����û���Ϣ
        case 6: {
            system("cls");
            printf("����Ա�˵�->�û�����->�鿴�����û���Ϣ\n\n");
            printf("��ѡ���û���ݣ�\n");
            printf("1.ѧ��\n");
            printf("2.��ʦ\n");
            int b;
            scanf("%d", &b);
            switch (b) {
                //�鿴�����û���Ϣ��ѧ����
                case 1: {
                    system("cls");
                    printf("����Ա�˵�->�û�����->�鿴�����û���Ϣ��ѧ����\n\n");
                    stu_id* q;
                    stu_id* head;
                    head = stu_id_load();
                    q = head->next;
                    while (q) {
                        printf("�˺ţ�%-8s", q->id);
                        printf("���룺%-8s", q->pwd);
                        printf("�༶������%d��    ", q->class);
                        printf("ѧ�ţ�%05d\n", q->stu_id);
                        q = q->next;
                    }
                    printf("\n���س�����...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
                //�鿴�����û���Ϣ����ʦ��
                case 2: {
                    system("cls");
                    printf("����Ա�˵�->�û�����->�鿴�����û���Ϣ����ʦ��\n\n");
                    tch_id* q;
                    tch_id* head;
                    head = tch_id_load();
                    q = head->next;
                    while (q) {
                        printf("�˺ţ�%-8s", q->id);
                        printf("���룺%-8s", q->pwd);
                        printf("�༶������%d��\n", q->class);
                        q = q->next;
                    }
                    printf("\n���س�����...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
                //��������
                default: {
                    printf("���������밴�س�������һ��...\n");
                    getchar();
                    getchar();
                    id_management();
                    break;
                }
            }
            break;
        }
        //������һ��
        case 7: {
            admin_menu();
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
            id_management();
        }
    }
}

//�ֶ�����¼��ѧ����Ϣ
void input_stu_information() {
    system("cls");
    printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ\n\n");
    printf("��ѡ��༶��\n");
    printf("1.����1��\n");
    printf("2.����2��\n");
    printf("3.����3��\n");
    printf("4.����4��\n");
    printf("5.����5��\n");
    int b;
    scanf("%d", &b);
    switch (b) {
        //�ֶ�����¼��ѧ����Ϣ������1�ࣩ
        case 1: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������1�ࣩ\n\n");
                printf("���ȴ���ѧ���û�����£�\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������1�ࣩ\n\n");
                printf("������ѧ��������\n");
                int cnt;
                scanf("%d", &cnt);
                if(cnt <= 0) {
                    printf("�������󣡼�������...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
                while (cnt--) {
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
                printf("�˺�¼��ɹ�������������һ��...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //�ֶ�����¼��ѧ����Ϣ������2�ࣩ
        case 2: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������2�ࣩ\n\n");
                printf("���ȴ���ѧ���û�����£�\n");
                Sleep(1000);
                admin_menu();
            }
            else {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������2�ࣩ\n\n");
                printf("������ѧ��������\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("�������󣡼�������...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("�˺�¼��ɹ�������������һ��...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //�ֶ�����¼��ѧ����Ϣ������3�ࣩ
        case 3: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������3�ࣩ\n\n");
                printf("���ȴ���ѧ���û�����£�\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������3�ࣩ\n\n");
                printf("������ѧ��������\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("�������󣡼�������...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("�˺�¼��ɹ�������������һ��...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //�ֶ�����¼��ѧ����Ϣ������4�ࣩ
        case 4: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������4�ࣩ\n\n");
                printf("���ȴ���ѧ���û�����£�\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������4�ࣩ\n\n");
                printf("������ѧ��������\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("�������󣡼�������...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("�˺�¼��ɹ�������������һ��...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //�ֶ�����¼��ѧ����Ϣ������5�ࣩ
        case 5: {
            if (stu_grades_judge_load() == '1') {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������5�ࣩ\n\n");
                printf("���ȴ���ѧ���û�����£�\n");
                Sleep(1000);
                admin_menu();
            }else {
                system("cls");
                printf("����Ա�˵�->�û�����->�ֶ�����¼��ѧ����Ϣ������5�ࣩ\n\n");
                printf("������ѧ��������\n");
                int cnt;
                scanf("%d", &cnt);
                if (cnt <= 0) {
                    printf("�������󣡼�������...\n");
                    Sleep(1000);
                    admin_menu();
                }
                printf("��ֱ�����ÿ��ѧ����������ѧ�ţ������ɼ���C++�ɼ���Python�ɼ���\n");
                stu* p, * pnew, * head;
                head = (stu*)malloc(sizeof(stu));
                p = head;
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
                printf("�˺�¼��ɹ�������������һ��...\n");
                Sleep(1000);
                admin_menu();
            }
            break;
        }
        //��������
        default: {
            printf("���������밴�س�������һ��...\n");
            getchar();
            getchar();
            admin_menu();
            break;
        }
    }
}