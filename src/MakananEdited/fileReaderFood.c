#include "makananedited.h"


int main(){
    PrioQueueTime Q = createMakanan("../../bin/testfilereadfood.txt");
    PrintPrioQueueTimeFood(Q);


    return 0;
}