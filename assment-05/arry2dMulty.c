#include <stdio.h>
#define SIZE 10

// Function to perform matrix multiplication
void multiply_matrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE], int rows1, int cols1, int rows2, int cols2)
{
    // Check if matrix multiplication is possible
    if (cols1 != rows2)
    {
        printf("Matrix multiplication not possible!\n");
        return;
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
}

// Function to display matrix
void display_matrix(int result[SIZE][SIZE], int rows, int cols)
{
    // Iterate through each element of the matrix and print
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main()
{
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE], rows1, cols1, rows2, cols2;

    // Input the dimensions for matrix 1
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    // Input the elements of matrix 1
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the dimensions for matrix 2
    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    // Input the elements of matrix 2
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the matrices
    multiply_matrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    // Display the result matrix
    printf("The result matrix:\n");
    display_matrix(result, rows1, cols2);

    return 0;
}
