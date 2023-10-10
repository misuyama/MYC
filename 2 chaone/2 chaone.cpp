// 2 chaone.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9.10,11,12} };

    printf("%d\n", &a[0]);
    printf("%d\n", a);
    printf("%d\n", &a[1]);
    printf("%d\n", a + 1);

    int(*p)[4] = &a[1];
    for (int i = 0; i < 4; i = i + 1) {
        printf("%d ", (*p)[i]);

    }
    printf("\n");

    for (int(*p)[4] = a; p < a + 3; p = p + 1) {
        for (int* x = *p; x < *p + 4; x = 1 + x)
            printf("%4d", *x);
        printf("\n");
    }
}
