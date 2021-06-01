#include "Airplane.h"

void Airplane::Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& Ofst) {
    Ofst << "It's an Airplane with Flight range: " << Flight_range << " kilometers" << endl;
    Ofst << "Its Load Capacity is " << Load_capacity << " kilograms" << endl;
    Ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    Ofst << "And Distance is " << Distance << " kilometers" << endl;
    Ofst << "Its Cargo Weight is " << Cargo_weight << " kilograms" << endl;
}