// C program to add gcd of two number using pass by reference
#include <stdio.h>

void calculateGCD(int *a, int *b, int *result) {
    int x = *a;
    int y = *b;
    while (x != y) {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    *result = x;  // Store the GCD in the result variable
}

int main() {
    int num1, num2, gcd;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    calculateGCD(&num1, &num2, &gcd);  // Pass addresses of num1, num2, and gcd
    
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    
    return 0;
}
