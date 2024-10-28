
#include <stdio.h>

int main() {
    // Variables for part (a)
    int item = 5;  // You can change this value to test different conditions
    int product = 10;  // Initial value for product

    // Part (a)
    if (item != 0) {
        product *= item;
    }
    printf("Value of product: %d\n", product);

    // Variables for part (b)
    int x = 8, y = 3;  // You can change these values for different tests

    // Part (b)
    if (x > y) {
        y = x - y;
    } else {
        y = y - x;
    }
    printf("Absolute difference stored in y: %d\n", y);

    // Variables for part (c)
    int zero_count = 0, minus_sum = 0, plus_sum = 0;

    x = -4;  // Example value for x; you can change it for different conditions

    // Part (c)
    if (x == 0) {
        zero_count++;
    } else if (x < 0) {
        minus_sum += x;
    } else {
        plus_sum += x;
    }

    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}
