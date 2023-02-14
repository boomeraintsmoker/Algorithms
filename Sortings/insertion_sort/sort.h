#ifndef SORT_H
#define SORT_H
class ISort {
    friend int main();
private:
    int range;
public:
    void testAr(ISort*);
    void showAr(int*, int);
    void insertionSort(int*, int);
    void isSorted(int*, int);
};
#endif // SORT_H
