//
// Created by 22970 on 24-9-23.
//

#include "PrintPerson.h"
void PrintPerson( AddressBook* abs) {
    if(abs->m_num == 0) {
        cout << "������" << endl;
        return;
    }
    for(int i = 0; i < abs->m_num; ++i) {
        std::cout <<"������"<< abs->arr[i].m_name <<"\t";
        if(abs->arr[i].m_sex == 1)
            std::cout <<"�Ա���" <<"\t";
        else
            std::cout <<"�Ա�Ů" <<"\t";
        std::cout <<"���䣺"<< abs->arr[i].m_age <<"\t";
        std::cout <<"�绰��"<< abs->arr[i].m_tel <<"\t";
        std::cout <<"��ַ��"<< abs->arr[i].m_address <<endl;
    }
}