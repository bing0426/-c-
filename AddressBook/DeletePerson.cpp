//
// Created by 22970 on 24-9-23.
//

#include "DeletePerson.h"
void DeletePerson(AddressBook* abs) {
    string name;
    cout << "��������ɾ����ϵ��������" << endl;
    cin >> name;
    int result = Isexist(abs, name);
    if(result == -1)
        cout << "û�и���ϵ��,�޷�ɾ��" << endl;
    else {
        for(int i = result; i < abs->m_num; ++i) {
            abs->arr[i] = abs->arr[i+1];
        }
        cout << "�����ɹ���" << endl;
        abs->m_num--;
    }
}