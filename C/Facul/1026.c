#include <stdio.h>

#define MAX_BITS 64

int main() 
{
    size_t a, b;

    int bits_a[MAX_BITS] = {0};
    int bits_b[MAX_BITS] = {0};
    int result_bits[MAX_BITS] = {0};

    while (scanf("%zu %zu", &a, &b) == 2) 
    {
        for (int i = 0; i < MAX_BITS; ++i) bits_a[i] = (a >> i) & 1;
        for (int i = 0; i < MAX_BITS; ++i) bits_b[i] = (b >> i) & 1;
        for (int i = 0; i < MAX_BITS; ++i) result_bits[i] = (bits_a[i] + bits_b[i]) % 2;

        size_t result = 0;
        size_t base = 1;

        for (int i = 0; i < MAX_BITS; ++i, base *= 2) result += result_bits[i] * base;
        printf("%zu\n", result);
    }
    
    return 0;
}
