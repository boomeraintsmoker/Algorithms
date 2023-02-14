#include <iostream>
#include <assert.h>

void merge(int* lAr, int lArSize, int* rAr, int rArSize, int* sAr) {
    int i = 0;
    int j = 0;
    while(i < lArSize && j < rArSize) {
        if(lAr[i] < rAr[j]) {
            sAr[i + j] = lAr[i];
            i++;
        }
        if(rAr[j] < lAr[i]) {
            sAr[j + i] = rAr[j];
            j++;
        }
        while(i < lArSize) {
            sAr[i + j] = lAr[i];
            i++;
        }
        while(j < rArSize) {
            sAr[j + i] = rAr[j];
            j++;
        }
    }
}

void showAr(int* sAr, int sArSize) {
    for(int i = 0; i < sArSize; i++) {
        std::cout << sAr[i] << ' ';
    }
    std::cout << std::endl;
}

void testMerge() {
    { /* test_1 */
    const int LARSIZE1 = 6;
    int lAr1[LARSIZE1] = {1, 2, 3, 4, 6, 7};
    const int RARSIZE1 = 6;
    int rAr1[RARSIZE1] = {0, 3, 4, 4, 7, 10};
	const int SIZEAR1 = LARSIZE1 + RARSIZE1;  
    int sAr1[SIZEAR1];
    showAr(&sAr1[0], SIZEAR1);
    merge(&lAr1[0], LARSIZE1, &rAr1[0], RARSIZE1, &sAr1[0]);
	showAr(&sAr1[0], SIZEAR1); 
    }

//    { /* test_2 */
//    const int LARSIZE2 = 5;
//    int lAr2[LARSIZE2] = {1, 4, 7, 9, 11};
//    const int RARSIZE2 = 6;
//    int rAr2[RARSIZE2] = {0, 3, 4, 4, 10, 15};
//	const int SIZEAR2 = LARSIZE2 + RARSIZE2;
//    int sAr2[SIZEAR2];
//    merge(&lAr2[0], LARSIZE2, &rAr2[0], RARSIZE2, &sAr2[0]);
//	showAr(&sAr2[0], SIZEAR2);
//    }
}

int main()
{
    testMerge();
    return 0;
}
