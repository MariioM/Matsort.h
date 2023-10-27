#include <stdio.h>
#include "matsort.h"

void SortIntMatrix(int matrix[], int size);

int main(){
    int array[4] = {2, 1, 5, 4};
    int a;
    SortIntMatrix(array, 4);
    for(int i = 0; i < 4; i++){
        printf("%d", array[i]);
    }
    scanf("%d", &a);
    return 0;
}
