#include <stdio.h>

int maxNumber(int a, int b, int c)
{
    int max = a; // Assume a as the maximum number initially

    if (b > max) // Check if b is greater than the current maximum
    {
        max = b; // If so, update the maximum to be b
    }

    if (c > max) // Check if c is greater than the current maximum
    {
        max = c; // If so, update the maximum to be c
    }

    return max; // Return the maximum number
}

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = maxNumber(num1, num2, num3); // Call the maxNumber function with the input numbers

    printf("The maximum number is: %d\n", result); // Print the maximum number

    return 0;
}
