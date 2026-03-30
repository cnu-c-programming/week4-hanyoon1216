#include <stdio.h>

void swap_endian(int *x) {
    unsigned char *p = (unsigned char *)x;

    *p = *p ^ *(p + 3);
    *(p + 3) = *p ^ *(p + 3);
    *p = *p ^ *(p + 3);
    *(p + 1) = *(p + 1) ^ *(p + 2);
    *(p + 2) = *(p + 1) ^ *(p + 2);
    *(p + 1) = *(p + 1) ^ *(p + 2);
}

int main() {
    int x = 0x12345678;
    
    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
