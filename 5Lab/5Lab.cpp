#include "Container.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "incorrect command line! "
            "Waited: command in_file out_file"
            << endl;
        exit(1);
    }
    
    ifstream Ifst(argv[1]);

    if (!Ifst) { //проверка на то, удалось ли открыть файл
        cout << "input.txt is incorrect!";
        exit(1);
    }

    ofstream Ofst(argv[2]);

    cout << "Start" << endl;

    Container C; //Объявление контейнера

    C.In(Ifst); //Ввод элементов контейнера

    C.Sort(); //Сортировка контейнера

    Ofst << "Filled and sorted container. " << endl;

    C.Out(Ofst); //Вывод контейнера

    C.Out_Only_Airplane(Ofst); //Вывод только самолетов

    C.Clear(); //Очистка контейнера

    Ofst << "Empty container. " << endl;

    C.Out(Ofst); //Вывод контейнера

    cout << "Stop" << endl;

    system("pause");
    return 0;
}