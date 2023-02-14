#include <iostream>
#include <time.h>
#include "sort.h"

void SSort::randomAr(SSort* sorter) {
    srand(time(nullptr));
        for(int i = 0; i < sorter->size; i++) {
            sorter->ar[i] = rand() % 100;
            std::cout << sorter->ar[i] << "  ";
        }
    std::cout << std::endl;
}

void SSort::selectionSort(SSort* sorter) {
    for(int i = 0; i < sorter->size; i++) {
        int minInd = i;
        for(int j = i; j < sorter->size; j++) {
            if(sorter->ar[minInd] > sorter->ar[j]) {
                minInd = j;
            }
        }
        int buff;
        if(sorter->ar[minInd] != sorter->ar[i]) {
            buff = sorter->ar[minInd];
            sorter->ar[minInd] = sorter->ar[i];
            sorter->ar[i] = buff;
        }
    }
    for(int i = 0; i < sorter->size; i++) {
        std::cout << sorter->ar[i] << "  ";
    }
    std::cout << std::endl;
}
