#ifndef SHIP_H
#define SHIP_H

#include "Transport.h"

//Класс "корабль"
class Ship : public Transport {
	int Displacement; //Водоизмещение

	//Тип корабля
	enum Type {
		LINER, //Лайнер
		TOWBOAT, //Буксир
		TANKER //Танкер
	};

	Type T;

public:
    void In_Data(ifstream& ifst); //Функция ввода информации о корабле
    void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& ofst); //Функция вывода информации о корабле
    Ship() {};
};

#endif // AIRPLANE_H
