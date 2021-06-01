#include "Container.h"
#include "Transport.h"

void Container::In(ifstream& Ifst) {
    Node* Temp;

    while (!Ifst.eof()) {
        Temp = new Node(); //Создаем новый узел
        //Инициализируем новый узел
        Temp->Next = NULL;
        Temp->Prev = NULL;


        if (!Len) { //Запись 1-го элемента
            if ((Head->Cont = Transport::In(Ifst))) {
                Tail = Head;
                Len++;
            }
        }
        else { //Запись последующиъ элементов
            if ((Temp->Cont = Transport::In(Ifst))) {
                Tail->Next = Temp;
                Temp->Prev = Tail;
                Tail = Temp;
                Len++;
            }
        }
    }
}