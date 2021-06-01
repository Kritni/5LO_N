#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <fstream>

using namespace std;

class Transport {
    int Speed; //Скорость
    int Distance; //Расстояние м/у пунктами отправления и назначения
    double Cargo_weight; //Масса груза
public:
    int Get_Speed(); //Функция получения значения скорости транспорта
    int Get_Distance(); //Функция получения значения расстояния м/у пунктами отправления и назачения
    double Get_Cargo_weight(); //Функция получения значения массы груза

    static Transport* In(ifstream& ifst); //Функция ввода информации о транспорте
    virtual void In_Data(ifstream& ifst) = 0; //Чисто вирутальная функция ввода информации
                                              //о транспорте, она будет определена для
                                              //каждого класса конкретного транспорта
    virtual void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& ofst) = 0; //Чисто вирутальная функция вывода информации
                                              //о траспорте, она будет определена для
                                              //каждого класса конкретного траспорта
    double Travel_time(int Speed, int Distance); //Функция подсчета времени транспорта в пути
    bool Compare(Transport* Other); //Функция сравнения времен прохождения пути 
    virtual void Out_Only_Airplane(int Speed, int Distance, double Cargo_weight, ofstream& ofst); //Функция вывода только самолетов
protected:
    Transport() {};
};

#endif // TRANSPORT_H
