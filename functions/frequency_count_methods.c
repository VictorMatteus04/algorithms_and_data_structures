#include <stdio.h>

// Frequency Count Method 
// Algorithm Sum(A,n)

// Time Function: f(n) = 2n+2
// Space Function: s(n) = n + 1
void Sum(int A[], int n){
    int sum = 0;

    for(int i=0; i<n;i++){
        sum = sum + A[i];
    }
    printf("Sum of the array A is: %d\n", sum);
}

void Add(int (*matrix_A)[3], int (*matrix_B)[3], int *m){
    int matrix_C[3][3];
    printf("The Sum of the Matrices is: \n");
    for (int i=0; i<*m; i++){
        for (int j=0; j<*m;  j++){
            matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }
}

void Multiply(int (*matrix_A)[3], int (*matrix_B)[3], int *m){
    int matrix_C[3][3];
    printf("The Product of the Matrices is: \n");
    for (int i=0; i<*m; i++){
        for (int j=0; j<*m; j++){
            matrix_C[i][j] = 0;
            for (int k=0; k<*m; k++){
                matrix_C[i][j] = matrix_C[i][j] + matrix_A[i][k] * matrix_B[k][j];
            }
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }
}

int main(){

    // Defining Variables
    int A[] ={8, 3, 9, 7, 2};
    int n = sizeof(A) / sizeof(A[0]);
    int m = 3;
    int matrix_A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix_B[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    printf("Using The Sum Function \n"); 
    Sum(A, n);
    printf("\n");

    printf("Using The Add Function To add Matrices \n");
    Add(matrix_A, matrix_B, &m);
    printf("\n");

    printf("Using the Multiply Function to Multiply Matrices \n");
    Multiply(matrix_A, matrix_B, &m);


    return 0;
}