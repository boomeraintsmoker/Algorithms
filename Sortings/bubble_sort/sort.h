#ifndef SORT_H
#define SORT_H
class BSort {
public:
    int size;
    int* ar;
    int range;
public:
    void testAr(BSort*);
    void showAr(int*, int);
    void bubbleSort(int*, int);
    void isSorted(int*, int);
};
#endif // SORT_H

