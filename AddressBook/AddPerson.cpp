//
// Created by 22970 on 24-9-22.
//

#include "AddPerson.h"
void AddPerson(AddressBook* abs) {
    string s_temp;
    cout << "������������" << endl;
    cin >> s_temp;
    abs->arr[abs->m_num].m_name = s_temp;

    int i_temp;
    cout << "�������Ա� 1 ������ 2 ����Ů:" << endl;
    while (true) {
        cin >> i_temp;
        if(i_temp == 1 || i_temp == 2) {
            abs->arr[abs->m_num].m_sex = i_temp;
            break;
        }
        else
            cout << "�����������������룡" << endl;
    }

    cout << "��������ͣ�" << endl;
    cin >> i_temp;
    abs->arr[abs->m_num].m_age = i_temp;

    cout << "��������룺" << endl;
    cin >> s_temp;
    abs->arr[abs->m_num].m_tel= s_temp;

    cout << "�������ַ��" << endl;
    cin >> s_temp;
    abs->arr[abs->m_num].m_address= s_temp;

    ++abs->m_num;//��������
}


