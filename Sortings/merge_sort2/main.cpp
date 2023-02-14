#include <iostream>
#include <assert.h>
#include <time.h>

bool array_isSortedAsc(int* ar, int s) {
    for (int i = 0; i < s-1; i++) {
        if (ar[i] > ar[i+1])
            return false;
    }
    return true;
}


void merge1(int* ar, int size, int centre) {
    int left = 0;
    int right = centre;
    int rightCur = right;
    int leftSize = centre;
    int rightSize = size - centre;

    while ((left < leftSize) && ((rightCur - centre) < rightSize)) {
        while(ar[left] <= ar[rightCur] && left < leftSize) {
            left++;
        }

        while(ar[rightCur] <= ar[left] && (rightCur - centre) < rightSize) {
            rightCur++;
        }

        int key;
        for (int i = right; i < rightCur; i++) {
            key = ar[i];
            for (int j = i; j > left; j--) {
                ar[j] = ar[j-1];
            }
            ar[left] = key;
            left++;
            leftSize++;
        }
        right = rightCur;
    }
}

void testMerge1() {
    {   //test 1
        int ar[] = {2,3,3,9,15,  0,4,6,7,11};
        merge1(ar, 10, 5);
        assert(array_isSortedAsc(ar, 10) == true);
    }

    {   //test 1
        int ar[] = {1,6,7,8,9, 2,3,4,5};
        merge1(ar, 9, 5);
        assert(array_isSortedAsc(ar, 9) == true);
    }
    {   //test 2
        int ar[] = {1,6,7,8,9, 2,3,4,5};
        int etAr[] = {1,2,3,4,5,6,7,8,9};
        merge1(ar, 9, 5);
        for (int i = 0; i < 9; i++) {
            if (ar[i] != etAr[i]) {
                std::cout << "test 2 failed" << std::endl;
            }
        }
    }
    {   //test 3
        int ar[] = {1,6,7,8,9,2,3,10,11};
        int etAr[] = {1,2,3,6,7,8,9,10,11};
        merge1(ar, 9, 5);
        for (int i = 0; i < 9; i++) {
            if (ar[i] != etAr[i]) {
                std::cout << "test 3 failed" << std::endl;
            }
        }
    }
    {   //test 4
        int ar[] = {1,2,7,8,9,2,3,10,11};
        int etAr[] = {1,2,2,3,7,8,9,10,11};
        merge1(ar, 9, 5);
        for (int i = 0; i < 9; i++) {
            if (ar[i] != etAr[i]) {
                std::cout << "test 4 failed" << std::endl;
            }
        }
    }
    {   //test 4
        int ar[] = {1,2,1,2,3,4,5,10,11};
        int etAr[] = {1,1,2,2,3,4,5,10,11};
        merge1(ar, 9, 2);
        for (int i = 0; i < 9; i++) {
            if (ar[i] != etAr[i]) {
                std::cout << "test 4 failed" << std::endl;
            }
        }
    }
    {   //test 5
        int ar[] =   {1,2,3,4,5,10,11,12,13};
        int etAr[] = {1,2,3,4,5,10,11,12,13};
        merge1(ar, 9, 2);
        for (int i = 0; i < 9; i++) {
            if (ar[i] != etAr[i]) {
                std::cout << "test 5 failed" << std::endl;
            }
        }
        merge1(ar, 9, 4);
        for (int i = 0; i < 9; i++) {
            if (ar[i] != etAr[i]) {
                std::cout << "test 5 failed" << std::endl;
            }
        }
    }
}

void mergeSort1(int* ar, int size) {
    static int count = 0;
    if (size <= 1) {
        return;
    }
    int split_ar = size/2;
    mergeSort1(&ar[0], size/2);

    int size_right = size/2 + size % 2;
    mergeSort1(&ar[size/2], size/2 + size % 2);

    merge1(ar, size, size/2);
    count++;
    int temp = 10;
}

void test_mergeSort1() {
    {
        const int S1 = 10;
        int test1[S1] = {9,15,3,2,3,11,0,4,7,6};
        mergeSort1(test1, S1);
        assert(array_isSortedAsc(test1, S1) == true);
        std::cout << "test merge sort passed OK" << std::endl;
    }
    {
        const int S1 = 100;
        int *test1 = new int [S1];
        srand(time(NULL));
        for (int i = 0; i < S1; i++) {
            test1[i] = rand() % 1000;
        }
        mergeSort1(test1, S1);
        assert(array_isSortedAsc(test1, S1) == true);
        std::cout << "test merge rand array sort passed OK" << std::endl;
        delete [] test1;
    }
}

int main() {
    testMerge1();
    test_mergeSort1();
    return 0;
}
