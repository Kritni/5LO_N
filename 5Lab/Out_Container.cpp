#include "Container.h"

void Container::Out(ofstream& ofst) {
    ofst << "Container contains " << Len
        << " elements." << endl << endl;

    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        ofst << i << ": ";
        Temp->Cont->Out_Data(Temp->Cont->Get_Speed(), Temp->Cont->Get_Distance(), 
            Temp->Cont->Get_Cargo_weight(), ofst);

        ofst << "Travel time of transport = " <<
            Temp->Cont->Travel_time(Temp->Cont->Get_Speed(), Temp->Cont->Get_Distance()) << endl << endl;

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}