#include <stdio.h>

int main()
{
    unsigned int m=0;
    m = 0x1234;
    printf("value = 0x%X\n", m);
    printf("value >> 8\n");
    m = m >> 8;
    printf("value = 0x%X\n", m);
    return 0;
}
