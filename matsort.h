/*
    Date: 27/10/2023
    Author: Mario Martínez Vitutia
*/

#ifndef matsort_h
#define matsort_h

int aux; //Auxiliar variable

/*
    Function for int arrays of one dimension
                (Bubble Sort)
*/
void SortIntMatrix(int matrix[], int size){
    aux = 0;
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size; j++){
            if(matrix[i] > matrix[j]){
                aux = matrix[i];
                matrix[i] = matrix[j];
                matrix[j] = aux;
            }
        }
    }
    if(aux != 0){
        SortIntMatrix(matrix, size);
    }
}


#endif /* matsort_h */
