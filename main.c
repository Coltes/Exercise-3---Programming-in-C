#include <stdio.h>

int main() {
    // Floating-Point Values
    float num1 = 3.50, num2 = 6.25;  // Declare two float variables
    float sum, difference, product, quotient;  // Variables for calculations

    // Calculate the sum, difference, multiplication, and division
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    // Print the results formatted to display two decimal places
    printf("Floating-Point Calculations:\n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    // Arithmetic Operators
    int int1 = 5, int2 = 2;
    int remainder = int1 % int2;  // Find the remainder using the modulus operator

    // Print the result
    printf("\nArithmetic Operators:\n");
    printf("The remainder of %d divided by %d is %d\n", int1, int2, remainder);

    // Character Data Type (char)
    char letter = 'A';  // Declare a char variable

    // Print the character and its ASCII value
    printf("\nCharacter Data Type:\n");
    printf("The character is: %c, and its ASCII value is: %d\n", letter, letter);

    // Input and Output with printf() and scanf()
    int userInt;
    float userFloat;

    printf("\nInput and Output:\n");
    printf("Enter an integer: ");
    scanf("%d", &userInt);  // Prompt the user for an integer input

    printf("Enter a float: ");
    scanf("%f", &userFloat);  // Prompt the user for a float input

    // Print the values entered by the user
    printf("You entered the integer: %d\n", userInt);
    printf("You entered the float: %.2f\n", userFloat);

    // Increment/Decrement Operations
    int incrementVar = 5;

    // Demonstrate pre- and post-increment operations
    printf("\nIncrement/Decrement Operations:\n");
    printf("Initial value: %d\n", incrementVar);

    printf("After pre-increment: %d\n", ++incrementVar);  // Pre-increment
    printf("After post-increment: %d\n", incrementVar++);  // Post-increment
    printf("Final value: %d\n", incrementVar);  // Final value after increments

    return 0;
}