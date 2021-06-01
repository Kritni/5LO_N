#include "Container.h"

void Container::Clear() {
    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        free(Temp->Cont);

        if (Temp->Next) {
            Temp = Temp->Next;
            free(Temp->Prev);
        }

    }

    Len = 0;
}