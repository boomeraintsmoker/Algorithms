#include <iostream>
#include "sort.h"

void ISort::testAr(ISort* sorter) {
    { /* test_1 */ std::cout << "---- Test №1 ----" << std::endl;
        const int SIZE1 = 20; int ar1[SIZE1];
        srand(time(nullptr));
            for(int i = 0; i < SIZE1; i++) {
                ar1[i] = rand() % sorter->range;
                std::cout << ar1[i] << "  ";
            }
        std::cout << std::endl;
        sorter->insertionSort(&ar1[0], SIZE1);
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
        sorter->insertionSort(&ar2[0], SIZE2);
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
        sorter->insertionSort(&ar3[0], SIZE3);
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
        sorter->insertionSort(&ar4[0], SIZE4);
        sorter->showAr(&ar4[0], SIZE4);
        sorter->isSorted(&ar4[0], SIZE4);
    }
}

void ISort::showAr(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << ar[i] << "  ";
    }
    std::cout << std::endl;
}

void ISort::insertionSort(int* ar, int size) {
    for(int i = 1; i < size; i++) {
        int currentElement = ar[i];
        int j = i - 1;
        while(j >= 0 && ar[j] > currentElement) {
            ar[j + 1] = ar[j];
            ar[j] = currentElement;
            j--;
        }
    }
}

void ISort::isSorted(int* ar, int size) {
    int counter = size;
    for(int i = 0; i < size; ++i) {
        if(ar[i] <= ar[i + 1]) --counter;
    }
    if((counter - 1) == 0) std::cout << "-- Test passed! --" << std::endl;
}
