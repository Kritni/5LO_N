#include "Container.h"

void Container::Out_Only_Airplane(ofstream& Ofst) {
    Ofst << "Only Airplanes." << endl << endl;

    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        Ofst << i << ": ";
        Temp->Cont->Out_Only_Airplane(Temp->Cont->Get_Speed(), Temp->Cont->Get_Distance(), 
            Temp->Cont->Get_Cargo_weight(),Ofst);
        Ofst << endl;
        
        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}