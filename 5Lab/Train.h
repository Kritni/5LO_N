#ifndef TRAIN_H
#define TRAIN_H

#include "Transport.h"

//����� "�����"
class Train : public Transport {
    int �ars_amount; //����� �������
public:
    void In_Data(ifstream& Ifst); //������� ����� ���������� � ������
    void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& Ofst); //������� ������ ���������� � ������
    Train() {};
};

#endif // SPHERE_H
