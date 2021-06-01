#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"

//���������
class Container {
    Node* Head, * Tail; //��������� �� "������" � "�����" ����������
    int Len; //����������� ����������
public:
    void In(ifstream& Ifst); //������� ����� �������� � ���������
    void Out(ofstream& Ofst); //������� ������ �������� �� ����������
    void Clear(); //������� �������� ����������
    void Sort(); //������� ���������� ����������
    void Out_Only_Airplane(ofstream& Ofst); //������� ������ ������ ���������
    Container(); //�����������
    ~Container() { Clear(); } //����������
};

#endif //CONTAINER_H