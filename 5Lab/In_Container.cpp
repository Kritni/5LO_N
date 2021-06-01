#include "Container.h"
#include "Transport.h"

void Container::In(ifstream& ifst) {
    Node* Temp;

    while (!ifst.eof()) {
        Temp = new Node(); //Создаем новый узел
        //Инициализируем новый узел
        Temp->Next = NULL;
        Temp->Prev = NULL;


        if (!Len) { //Запись 1-го элемента
            if ((Head->Cont = Transport::In(ifst))) {
                Tail = Head;
                Len++;
            }
        }
        else { //Запись последующиъ элементов
            if ((Temp->Cont = Transport::In(ifst))) {
                Tail->Next = Temp;
                Temp->Prev = Tail;
                Tail = Temp;
                Len++;
            }
        }
    }
}