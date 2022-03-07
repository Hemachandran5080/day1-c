#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;
    int add, sub, mul;
    float div;

    printf("Enter First and Second Number: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    add = firstNumber + secondNumber;
    sub = firstNumber - secondNumber;
    mul = firstNumber * secondNumber;
    div = firstNumber / (float)secondNumber;

    printf("Add: %d\n", add);
    printf("Subtract: %d\n", sub);
    printf("Multiply: %d\n", mul);
    printf("Division: %.2f", div);

    return 0;
}