#include <stdio.h>
#include <stdlib.h>

/**
 * power - 计算幂指数
 * @param base: 底数
 * @param exponent: 指数
 * @return
 */
int power(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }

    return result;
}

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
