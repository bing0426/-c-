//
// Created by 22970 on 24-9-23.
//

#include "Change.h"
void Change(AddressBook* abs) {
    string name;
    cout << "��������Ҫ�޸ĵ���ϵ��������" <<endl;
    cin >> name;
    int resulte = Isexist(abs, name);
    if(resulte == -1)
        cout << "û�и���ϵ��,�޷��޸�" << endl;
    else {
        string s_temp;
        cout << "������������" << endl;
        cin >> s_temp;
        abs->arr[resulte].m_name = s_temp;

        int i_temp;
        cout << "�������Ա� 1 ������ 2 ����Ů:" << endl;
        while (true) {
            cin >> i_temp;
            if(i_temp == 1 || i_temp == 2) {
                abs->arr[resulte].m_sex = i_temp;
                break;
            }
            else
                cout << "�����������������룡" << endl;
        }

        cout << "��������ͣ�" << endl;
        cin >> i_temp;
        abs->arr[resulte].m_age = i_temp;

        cout << "��������룺" << endl;
        cin >> s_temp;
        abs->arr[resulte].m_tel= s_temp;

        cout << "�������ַ��" << endl;
        cin >> s_temp;
        abs->arr[resulte].m_address= s_temp;
    }
}