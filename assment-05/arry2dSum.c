#include <stdio.h>

#define MAX_SIZE 10

void add_matrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    // Add corresponding elements of matrix1 and matrix2 and store the result in the result matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j]; // Add corresponding elements of matrix1 and matrix2
        }
    }
}

void display_matrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    // Print each element of the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]); // Print each element of the matrix
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    add_matrices(matrix1, matrix2, result, rows, cols);
    printf("Resultant matrix after addition:\n");
    display_matrix(result, rows, cols);

    return 0;
}
