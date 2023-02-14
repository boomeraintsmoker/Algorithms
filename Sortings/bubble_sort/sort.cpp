#include <iostream>
#include "sort.h"

void BSort::testAr(BSort* sorter) {
    { /* test_1 */ std::cout << "---- Test №1 ----" << std::endl;
        const int SIZE1 = 20; int ar1[SIZE1];
        srand(time(nullptr));
            for(int i = 0; i < SIZE1; i++) {
                ar1[i] = rand() % sorter->range;
                std::cout << ar1[i] << "  ";
            }
        std::cout << std::endl;
        sorter->bubbleSort(&ar1[0], SIZE1);
        sorter->showAr(&ar1[0], SIZE1);
        sorter->isSorted(&ar1[0], SIZE1);
    }
    { /* test_2 */ std::cout << "---- Test №2 ----" << std::endl;
        const int SIZE2 = 20; int ar2[SIZE2];
        srand(time(nullptr));
            for (int i = 0; i < SIZE2; i++) {
                ar2[i] = rand() % sorter->range;
                std::cout << ar2[i] << "  ";
            }
        std::cout << std::endl;
        sorter->bubbleSort(&ar2[0], SIZE2);
        sorter->showAr(&ar2[0], SIZE2);
        sorter->isSorted(&ar2[0], SIZE2);
    }
    { /* test_3 */ std::cout << "---- Test №3 ----" << std::endl;
        const int SIZE3 = 20; int ar3[SIZE3];
        srand(time(nullptr));
            for (int i = 0; i < SIZE3; i++) {
                ar3[i] = rand() % sorter->range;
                std::cout << ar3[i] << "  ";
            }
        std::cout << std::endl;
        sorter->bubbleSort(&ar3[0], SIZE3);
        sorter->showAr(&ar3[0], SIZE3);
        sorter->isSorted(&ar3[0], SIZE3);
    }
    { /* test_4 */ std::cout << "---- Test №4 ----" << std::endl;
        const int SIZE4 = 20; int ar4[SIZE4];
        srand(time(nullptr));
            for (int i = 0; i < SIZE4; i++) {
                ar4[i] = rand() % sorter->range;
                std::cout << ar4[i] << "  ";
            }
        std::cout << std::endl;
        sorter->bubbleSort(&ar4[0], SIZE4);
        sorter->showAr(&ar4[0], SIZE4);
        sorter->isSorted(&ar4[0], SIZE4);
    }
}

void BSort::showAr(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << ar[i] << "  ";
    }
    std::cout << std::endl;
}

void BSort::bubbleSort(int* ar, int size) {
    for(int i = 0; i < size - 1; i++) {
        int currentInd = i;
        for(int j = i + 1; j < size; j++) {
            int buff;
            int nextInd = j;
            while(ar[currentInd] > ar[nextInd]) {
                buff = ar[currentInd];
                ar[currentInd] = ar[nextInd];
                ar[nextInd] = buff;
                if(ar[currentInd] < ar[nextInd]) {
                    continue;
                }
            }
        }
    }
}

void BSort::isSorted(int* ar, int size) {
    int counter = size;
    for(int i = 0; i < size; ++i) {
        if(ar[i] <= ar[i + 1]) --counter;
    }
    if((counter - 1) == 0) std::cout << "-- Test passed! --" << std::endl;
}

