#include <stdio.h>
#include <stdlib.h>

int main() {
    int b = 57; // 00111001=1*2^5+1*2^4+1*2^3+0+0+1*2^0
    // 移位结果指数均减一，约等于整体除以2
    printf("%d \n", 57 >> 1); // 28=00011100=1*2^4+1*2^3+1*2^2
}