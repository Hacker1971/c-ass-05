#include <stdio.h>

int febonacci(int n)
{
    int first = 0, secound = 1, next, i;
    if (n == 0) // base case when n is zero return 0
    {
        return first;
    }
    else if (n == 1) // base case when n is one return 1
    {
        return secound;
    }
    for (i = 2; i <= n; i++)
    {
        next = first + secound; // calculate the next Fibonacci number by adding the previous two numbers
        first = secound;        // update the value of the first number to be the second number
        secound = next;         // update the value of the second number to be the next number
    }
    return next; // return the calculated Fibonacci number
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n >= 0) // check if n is non-negative
    {
        printf("The %dth febonaccki number : %d", n, febonacci(n)); // calculate and print the nth Fibonacci number
    }
    else
    {
        printf("Invalid input"); // display an error message for negative input
    }
    return 0;
}
