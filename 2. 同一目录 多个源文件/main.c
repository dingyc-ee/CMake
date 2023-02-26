#include <stdio.h>
#include <stdlib.h>
#include "math_function.h"

int main(int argc, char *argv[])
{
    int base, exponent, result;

    if (argc < 3) {
        printf("Usage: %s base exponent\n", argv[0]);
        return -1;
    }

    base = atoi(argv[1]);
    exponent = atoi(argv[2]);
    result = power(base, exponent);
    printf("%d ^ %d = %d\n", base, exponent, result);

    return 0;
}
