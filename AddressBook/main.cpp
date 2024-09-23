#include <iostream>
#include <cstdlib>
#include "PrintMenu.h"
#include "AddPerson.h"
#include "Change.h"
#include "DeleteAll.h"
#include "DeletePerson.h"
#include "Find.h"
#include "PrintPerson.h"
#include "Struct.h"
using namespace std;

int main() {
    AddressBook abs;
    PrintMenu();
    while (true) {
        int order;
        cin >> order;
        switch (order) {
            case 1 ://�����ϵ��
                AddPerson(&abs);
                break;
            case 2 ://��ʾ��ϵ��
                PrintPerson(&abs);
                break;
            case 3 ://ɾ����ϵ��
                DeletePerson(&abs);
                break;
            case 4 ://������ϵ��
                Find(&abs);
                break;
            case 5 ://�޸���ϵ��
                Change(&abs);
                break;
            case 6 ://�����ϵ��
                DeleteAll(&abs);
                break;
            case 0 :
                cout << "��ӭ�´����� ��" << endl;
                system("pause");
                return 0;
            default: cout << "������������������ ��" << endl;
        }
        PrintMenu();
    }
}

