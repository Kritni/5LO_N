#include "Container.h"
#include "Transport.h"

void Container::In(ifstream& Ifst) {
    Node* Temp;

    while (!Ifst.eof()) {
        Temp = new Node(); //������� ����� ����
        //�������������� ����� ����
        Temp->Next = NULL;
        Temp->Prev = NULL;


        if (!Len) { //������ 1-�� ��������
            if ((Head->Cont = Transport::In(Ifst))) {
                Tail = Head;
                Len++;
            }
        }
        else { //������ ����������� ���������
            if ((Temp->Cont = Transport::In(Ifst))) {
                Tail->Next = Temp;
                Temp->Prev = Tail;
                Tail = Temp;
                Len++;
            }
        }
    }
}