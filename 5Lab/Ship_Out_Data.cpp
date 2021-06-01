#include "Ship.h"

void Ship::Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& Ofst) {
    Ofst << "It's a Ship with Displacement: " << Displacement << " thousands of tons" << endl;

    Ofst << "Its Type is ";

    if (T == LINER) {
        Ofst << "Liner";
    }
    else if (T == TOWBOAT) {
        Ofst << "Towboat";
    }
    else if (T = TANKER) {
        Ofst << "Tanker";
    }

    Ofst << endl;

    Ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    Ofst << "And Distance is " << Distance << " kilometers" << endl;
    Ofst << "Its Cargo Weight is " << Cargo_weight << " kilograms" << endl;
}