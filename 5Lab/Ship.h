#ifndef SHIP_H
#define SHIP_H

#include "Transport.h"

//����� "�������"
class Ship : public Transport {
	int Displacement; //�������������

	//��� �������
	enum Type {
		LINER, //������
		TOWBOAT, //������
		TANKER //������
	};

	Type T;

public:
    void In_Data(ifstream& Ifst); //������� ����� ���������� � �������
    void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& Ofst); //������� ������ ���������� � �������
    Ship() {};
};

#endif // AIRPLANE_H
