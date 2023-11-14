#include <stdio.h>

void generateFibonacci(int n)
{
    int fib[n]; // Declare an array to store Fibonacci numbers

    fib[0] = 0; // Initialize the first two Fibonacci numbers
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // Calculate the next Fibonacci number
    }

    printf("The Fibonacci sequence up to the %dth term:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib[i]); // Print the Fibonacci numbers
    }
    printf("\n");
}

int main()
{
    int num;
    printf("Enter the number of terms to generate: ");
    scanf("%d", &num);

    if (num > 0)
    {
        generateFibonacci(num); // Call the function to generate Fibonacci numbers
    }
    else
    {
        printf("Invalid input. Please enter a positive number.\n");
    }

    return 0;
}
