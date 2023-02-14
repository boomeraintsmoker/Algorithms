#include <iostream>
#include "sort.h"

void CSort::testAr(CSort* sorter) {
    { /* test_1 */ std::cout << "---- Test №1 ----" << std::endl;
        const int SIZE1 = 20; int ar1[SIZE1]; const int MAXELEM1 = 500; int counter1[MAXELEM1];
        srand(time(nullptr));
            for(int i = 0; i < SIZE1; i++) {
                ar1[i] = rand() % MAXELEM1;
                std::cout << ar1[i] << "  ";
            }
        std::cout << std::endl;
        sorter->arCounter(&counter1[0], MAXELEM1);
        sorter->countingSort(&ar1[0], SIZE1, &counter1[0], MAXELEM1);
        sorter->showAr(&ar1[0], SIZE1);
        sorter->isSorted(&ar1[0], SIZE1);
    }
    { /* test_2 */ std::cout << "---- Test №2 ----" << std::endl;
        const int SIZE2 = 20; int ar2[SIZE2]; const int MAXELEM2 = 500; int counter2[MAXELEM2];
        srand(time(nullptr));
            for(int i = 0; i < SIZE2; i++) {
                ar2[i] = rand() % MAXELEM2;
                std::cout << ar2[i] << "  ";
            }
        std::cout << std::endl;
        sorter->arCounter(&counter2[0], MAXELEM2);
        sorter->countingSort(&ar2[0], SIZE2, &counter2[0], MAXELEM2);
        sorter->showAr(&ar2[0], SIZE2);
        sorter->isSorted(&ar2[0], SIZE2);
    }
    { /* test_3 */ std::cout << "---- Test №3 ----" << std::endl;
        const int SIZE3 = 20; int ar3[SIZE3]; const int MAXELEM3 = 500; int counter3[MAXELEM3];
        srand(time(nullptr));
            for(int i = 0; i < SIZE3; i++) {
                ar3[i] = rand() % MAXELEM3;
                std::cout << ar3[i] << "  ";
            }
        std::cout << std::endl;
        sorter->arCounter(&counter3[0], MAXELEM3);
        sorter->countingSort(&ar3[0], SIZE3, &counter3[0], MAXELEM3);
        sorter->showAr(&ar3[0], SIZE3);
        sorter->isSorted(&ar3[0], SIZE3);
    }
    { /* test_4 */ std::cout << "---- Test №4 ----" << std::endl;
        const int SIZE4 = 20; int ar4[SIZE4]; const int MAXELEM4 = 500; int counter4[MAXELEM4];
        srand(time(nullptr));
            for(int i = 0; i < SIZE4; i++) {
                ar4[i] = rand() % MAXELEM4;
                std::cout << ar4[i] << "  ";
            }
        std::cout << std::endl;
        sorter->arCounter(&counter4[0], MAXELEM4);
        sorter->countingSort(&ar4[0], SIZE4, &counter4[0], MAXELEM4);
        sorter->showAr(&ar4[0], SIZE4);
        sorter->isSorted(&ar4[0], SIZE4);
    }
}

void CSort::showAr(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << ar[i] << "  ";
    }
    std::cout << std::endl;
}

void CSort::arCounter(int* counter, int maxElem) {
    for(int i = 0; i < maxElem; i++) {
        counter[i] = 0;
    }
}

void CSort::countingSort(int* ar, int size, int* counter, int maxElem) {
    for(int i = 0; i < size; i++) {
        counter[ar[i]]++;
    }
    int pos = 0;
    for(int i = 0; i < maxElem; i++) {
        for(int j = 0; j < counter[i]; j++) {
            ar[pos++] = i;
        }
    }
}

void CSort::isSorted(int* ar, int size) {
    int counter = size;
    for(int i = 0; i < size; ++i) {
        if(ar[i] <= ar[i + 1]) --counter;
    }
    if((counter - 1) == 0) std::cout << "-- Test passed! --" << std::endl;
}
