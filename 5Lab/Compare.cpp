#include "Transport.h"

bool Transport::Compare(Transport* Other) {
    return Travel_time(Speed, Distance) > Other->Travel_time(Other->Speed, Other->Distance);
}
