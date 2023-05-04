#include <stdio.h>

/**
 * print_binary - A function that prints the binary representation of a number
 * main - Entry point of a function
 * @n: integer to be printed
 * Return: 0 Always (success)
 */

void print_binary(unsigned long int n) {
    int size = sizeof(unsigned long int) * 8;
    unsigned long int mask = (unsigned long int)1 << (size - 1);
    
    while (mask > 0) {
        if (n & mask) {
            putchar('1');
        } else {
            putchar('0');
        }
        mask >>= 1;
    }
}

int main() {
    unsigned long int n = 123456789;
    printf("Binary representation of %lu: ", n);

    print_binary(n);
    putchar('\n');
    return 0;
}

