#include <stdio.h>
void print3dPoint(int var1)
{
    int MA = 0x3FF00000;
    int MB = 0xFFC00;
    int MC = 0x3FF;
    int V1 = (var1 & MA);
    V1 = V1 >> 20;
    int V2 = (var1 & MB);
    V2 = V2 >> 10;
    int V3 = (var1 & MC);
    printf("(%d, %d, %d)\n", V1, V2, V3);
}
int swapBytes(int var1)
{
    unsigned int MA = (1 << 16) - 1;
    unsigned int MB = (MA << 16);
    unsigned int a1 = var1 & MB;
    unsigned int a2 = (a1 << 8) | (a1 >> 8);
    a2 &= MB;
    unsigned int a3 = var1 & MA;
    unsigned int a4 = (a3 >> 8) | (a3 << 8);
    a4 &= MA;
    return a2 | a4;
}

int countGroups(int var1)
{
    int g = 0;
    int b = 0;
    for (int i = 0; i < 33; i++)
    {
        if ((var1 % 2 == 0 || i == 32) && b != 0)
            g++;
        b = var1 % 2;
        var1 = var1 >> 1;
    }
    return g;
}