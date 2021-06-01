#include "Train.h"

void Train::Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& Ofst) {
    Ofst << "It's a Train with Cars amount: " << Ñars_amount << endl;
    Ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    Ofst << "And Distance is " << Distance << " kilometers" << endl;
    Ofst << "Its Cargo Weight is " << Cargo_weight << " kilograms" << endl;
}