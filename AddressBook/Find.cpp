//
// Created by 22970 on 24-9-23.
//

#include "Find.h"
void Find(AddressBook* abs) {
    string name;
    cout << "�����������ϵ��������" << endl;
    cin >> name;
    int reslute =  Isexist(abs, name);
    if(reslute == -1)
        cout << "û��ѯ������ϵ��" << endl;
    else {
        std::cout <<"������"<< abs->arr[reslute].m_name <<"\t";
        if(abs->arr[reslute].m_sex == 1)
            std::cout <<"�Ա���" <<"\t";
        else
            std::cout <<"�Ա�Ů" <<"\t";
        std::cout <<"���䣺"<< abs->arr[reslute].m_age <<"\t";
        std::cout <<"�绰��"<< abs->arr[reslute].m_tel <<"\t";
        std::cout <<"��ַ��"<< abs->arr[reslute].m_address <<endl;
    }
}