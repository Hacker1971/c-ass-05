#include <stdio.h>

int febonacci(int n)
{
    if (n == 0) // base case for negative numbers and zero
        return 0;
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return febonacci(n - 1) + febonacci(n - 2); // recursive solution
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) // check if num is non-negative
    {
        printf("The %dth febonaccki number : %d\n", num, febonacci(num)); // calculate and print the nth Fibonacci number
    }
    else
    {
        printf("Invalid input"); // display an error message for negative input
    }
    return 0;
}
