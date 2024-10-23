#include <stdio.h>
#include <assert.h>

// Function to calculate the square of a number
int square(int num) {
    // Assert that the input number is non-negative num
    assert(num >= 0);
    return num * num;
}

int main() {
    int number;

    // Prompt user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Call the square function
    // If the number is negative, the assertion will fail
    int result = square(number);
    printf("The square of %d is: %d\n", number, result);

    return 0;
}
output:
Enter a non-negative integer: 5
The square of 5 is: 25