//
// Created by ding on 2023/2/26.
//

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
