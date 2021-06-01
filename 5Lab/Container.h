#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"

//Контейнер
class Container {
    Node* Head, * Tail; //Указатели на "голову" и "хвост" контейнера
    int Len; //Размерность контейнера
public:
    void In(ifstream& ifst); //Функция ввода элемента в контейнер
    void Out(ofstream& ofst); //Функция вывода элемента из контейнера
    void Clear(); //Функция очищения контейнера
    void Sort(); //Функция сортировки контейнера
    void Out_Only_Airplane(ofstream& ofst); //Функция вывода только самолетов
    Container(); //Конструктор
    ~Container() { Clear(); } //Деструктор
};

#endif //CONTAINER_H