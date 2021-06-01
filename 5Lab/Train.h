#ifndef TRAIN_H
#define TRAIN_H

#include "Transport.h"

//Класс "поезд"
class Train : public Transport {
    int Сars_amount; //Число вагонов
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о поезде
    void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& ofst); //Функция вывода информации о поезде
    Train() {};
};

#endif // SPHERE_H
