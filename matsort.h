/*
    Date of creation: 27/10/2023
*/

/* This file is subject to the terms of the GNU General Public License, 
 * Version 3 or any later version, at the option of the copyright holder. */


#ifndef matsort_h
#define matsort_h

int iAux; //Int auxiliar variable
double dAux; //

/*
    Function for sort int arrays of one dimension
                (Bubblesort)
*/
void SortIntMatrix(int matrix[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(matrix[j] > matrix[j+1]){
                iAux = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = iAux;
            }
        }
    }
}

/*
    Function for sort int arrays of one dimension (biggest first)
                (Bubblesort)
*/

void InvSortIntMatrix(int matrix[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(matrix[j] < matrix[j+1]){
                iAux = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = iAux;
            }
        }
    }
}

/*
    Function for sort double arrays of one dimension
                (Bubblesort)
*/
void SortDoubleMatrix(double matrix[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(matrix[j] > matrix[j+1]){
                dAux = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = dAux;
            }
        }
    }
}

/*
    Function for sort double arrays of one dimension (biggest first)
                (Bubblesort)
*/
void InvSortDoubleMatrix(double matrix[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(matrix[j] < matrix[j+1]){
                dAux = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = dAux;
            }
        }
    }
}

/*
    Function for sort character arrays of one dimension
                (Bubblesort)
*/

void SortCharMatrix(char matrix[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(matrix[j] > matrix[j+1]){
                dAux = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = dAux;
            }
        }
    }
}

/*
    Function for sort character arrays of one dimension (biggest first)
                (Bubblesort)
*/
void InvSortCharMatrix(char matrix[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(matrix[j] < matrix[j+1]){
                dAux = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = dAux;
            }
        }
    }
}

#endif /* matsort_h */
