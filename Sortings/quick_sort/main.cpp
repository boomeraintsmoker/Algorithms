#include <iostream>
#include <time.h>

class QSort {
public:
    int size;
    int* ar;
    int maxElem;
public:
    void randomAr(QSort*);
};

void QSort::randomAr(QSort* sorter) {
    srand(time(nullptr));
        for (int i = 0; i < sorter->size; i++) {
            sorter->ar[i] = rand() % sorter->maxElem;
            std::cout << sorter->ar[i] << "  ";
        }
    std::cout << std::endl;
}

int main()
{
    QSort sorter;
    sorter.size = 10;
    sorter.maxElem = 10;
    int ar[sorter.size];
    sorter.ar = &ar[0];
    sorter.randomAr(&sorter);
    return 0;
}
