#include "sort.h"

int main()
{
    SSort sorter;
    sorter.size = 20;
    int ar[sorter.size];
    sorter.ar = &ar[0];
    sorter.randomAr(&sorter);
    sorter.selectionSort(&sorter);
    return 0;
}
