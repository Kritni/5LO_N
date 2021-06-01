#include "Transport.h"
#include "Airplane.h"
#include "Train.h"
#include "Ship.h"

#include <string>
#include <iostream>

Transport* Transport::In(ifstream& Ifst) {
    Transport* T;
    string Temp_Str = ""; //��������� ����� ��� ������ ������ �� �����

    getline(Ifst, Temp_Str); //������ �������������� ����������

    //�������� ����, ��� ���� ���� �������� ��������� ������������ ����������,
    //���� �� �������� ��� �����
    if ((Temp_Str != "1") && (Temp_Str != "2") && (Temp_Str != "3")) {
        //�������� �������������� ���, ������ ��� ��� ����� ����
        if (Ifst.peek() == EOF) {
            return 0;
        }
        else { //� ���� ������ ������������� ����������� �����, ���� �� ��������
            //���������� ��������� � �������
            cout << "Input data is incomplete or incorrect!";
            exit(1);
        }
    }
    
    int K = atoi(Temp_Str.c_str());
    
    if (K == 1) {
        T = new Airplane;
    }
    else if (K == 2) {
        T = new Train;
    }
    else if (K == 3) {
        T = new Ship;
    }
    else {
        return 0;
    }

    T->In_Data(Ifst);

    Temp_Str = ""; //!!

    getline(Ifst, Temp_Str); //������ ��������

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

    T->Speed = atoi(Temp_Str.c_str());

    getline(Ifst, Temp_Str); //������ ���������� �/� �������� ����������� � ����������

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

    //���� �������� ����, ��� ������ �������� ������ �����
    for (int i = 0; i < Temp_Str.length(); i++) {
        if (Alph_num.find(Temp_Str[i]) == -1) {
            //���������� ��������� � �������
            cout << "Input data is incorrect!";
            exit(1);
        }
    }

    T->Distance = atoi(Temp_Str.c_str());

    getline(Ifst, Temp_Str); //������ ����� �����

    if (Temp_Str == "") { //���� ������ ������
        //���������� ��������� � �������
        cout << "Input data is incomplete!";
        exit(1);
    }

    //�������� ����, ��� ������ �� ���������� � 0, ����� ��� �������, � ����� �� ������������� ������ ��� �������
    if ((Temp_Str[0] == 0) || (Temp_Str[0] == ',') || (Temp_Str[0] == '.') ||
        (Temp_Str[Temp_Str.length() - 1] == ',') || (Temp_Str[Temp_Str.length() - 1] == '.')) {
        //���������� ��������� � �������
        cout << "Input data is incorrect!";
        exit(1);
    }

    //���� �������� ������������ ������ ������������� �����
    for (int i = 0; i < Temp_Str.length(); i++) {
        if ((Alph_num.find(Temp_Str[i]) == -1) && (Temp_Str[i] != ',') && (Temp_Str[i] != '.')) {
            //���������� ��������� � �������
            cout << "Input data is incorrect!";
            exit(1);
        }

        if ((Temp_Str[i] == ',') || (Temp_Str[i] == '.')) {
            if ((Temp_Str[i - 1] == ',') || (Temp_Str[i - 1] == '.') ||
                (Temp_Str[i + 1] == ',') || (Temp_Str[i + 1] == '.')) {
                //���������� ��������� � �������
                cout << "Input data is incorrect!";
                exit(1);
            }
        }
    }

    T->Cargo_weight = strtod(Temp_Str.c_str(), NULL);

    return T;
}