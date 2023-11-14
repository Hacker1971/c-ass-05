#include <stdio.h>
#define SIZE 10
void subtract_matrices(int martix1[SIZE][SIZE], int martix2[SIZE][SIZE], int rezult[SIZE][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            rezult[i][j] = martix1[i][j] - martix2[i][j];
        }
    }
}
void display_matrix(int rezult[SIZE][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           printf("%d", rezult[i][j]);
        }
        printf(" \n");
    }
}
int main()
{
    int martix1[SIZE][SIZE], martix2[SIZE][SIZE], rezult[SIZE][SIZE], rows, cols;
    printf("Enter the number of rows and columns for matrix : ");
    scanf("%d%d", &rows, &cols);
    printf("Enter the number of rows and columns for matrix1 : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &martix1[i][j]);
        }
    }
    printf("Enter the number of rows and columns for matrix2 :\n ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &martix2[i][j]);
        }
    }
    subtract_matrices(martix1, martix2, rezult, rows, cols);
    printf(" the subtract_matrices:\n");
    display_matrix(rezult, rows, cols);

    return 0;
}