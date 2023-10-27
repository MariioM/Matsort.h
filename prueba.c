#include <stdio.h>
#include "matsort.h"

void SortIntMatrix(int matrix[], int size);

int main(){
    double array[4] = {2.43, 1.233, 5.912, 5.452};
    int a;
    InvSortDoubleMatrix(array, 4);
    for(int i = 0; i < 4; i++){
        printf("%f ", array[i]);
    }
    scanf("%d", &a);
    return 0;
}
