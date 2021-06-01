#include "Container.h"

void Container::Out(ofstream& Ofst) {
    Ofst << "Container contains " << Len
        << " elements." << endl << endl;

    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        Ofst << i << ": ";
        Temp->Cont->Out_Data(Temp->Cont->Get_Speed(), Temp->Cont->Get_Distance(), 
            Temp->Cont->Get_Cargo_weight(), Ofst);

        Ofst << "Travel time of transport = " <<
            Temp->Cont->Travel_time(Temp->Cont->Get_Speed(), Temp->Cont->Get_Distance()) << endl << endl;

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}