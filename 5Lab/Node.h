#ifndef NODE_H
#define NODE_H

#include "Transport.h"

//”зел контейнера
struct Node {
    Node* Next, * Prev; //”казатель на следующий и предыдущий элементы контейнера
    Transport* Cont; //”казатель на транспорт
};

#endif //NODE_H