#include <stdio.h>

int main()
{
    int n;
    scanf_s("%d", &n);

    int pow = 1;
    for (int i = 0; i < n; i++)
        pow *= 2;
    printf("2의 %d제곱은 %d이다.", n, pow);
}