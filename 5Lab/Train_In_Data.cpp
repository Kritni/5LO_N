#include  "Train.h"

#include <string>
#include <iostream>

void Train::In_Data(ifstream& Ifst) {
    string Temp_Str = ""; //��������� ����� ��� ������ ������ �� �����

    getline(Ifst, Temp_Str); //������ ����� �������

    if (Temp_Str == "") { //���� ������ ������
        //���������� ��������� � �������
        cout << "Input data is incomplete!";
        exit(1);
    }

    if (Temp_Str[0] == '0') { //���� ����� ���������� � 0
        //���������� ��������� � �������
        cout << "Input data is incorrect!";
        exit(1);
    }

    string Alph_num = "0123456789";

    //���� �������� ����, ��� ������ �������� ������ �����
    for (int i = 0; i < Temp_Str.length(); i++) {
        if (Alph_num.find(Temp_Str[i]) == -1) {
            //���������� ��������� � �������
            cout << "Input data is incorrect!";
            exit(1);
        }
    }

    �ars_amount = atoi(Temp_Str.c_str());
}