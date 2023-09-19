

#include <stdio.h>

int main()
{
    int n;
    int a[100];
    printf("입력할 숫자의 개수 : ");
    scanf_s("%d", &n);
    printf("숫자를 입력하십시오 %d개", n);

    for (int i = 0; i < n; i = i + 1) {
        scanf_s("%d", &a[i]);

        //최대값을 찾는다. 

    }

    int max = a[0];
    for (int i = 0; i < n; i = i + 1) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("최댓값 : %d\n", max);
}
