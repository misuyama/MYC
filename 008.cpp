#include <stdio.h>
int main()
{
    int a[5][5];
    int row, col;
    scanf_s("%d %d", &row, &col);
    


    //이차원배열에 숫자를 입력받는다.

    for (int i = 0; i < row; i = i + 1) {
        for (int j = 0; j < col; j = j + 1)
            scanf_s("%d %d", &row, &col);
    }
    printf("%d %d", row, col);

    //출력
    for (int i = 0; i < row; i = i + 1) {
        for (int j = 0; j < col; j = j + 1)
            printf("%d %d", row, col);
        printf("\n");
    }

    //각 행의 요소의 합을 구하시오.

    int sum = 0;
    
    for (int i = 0; i < row; i = i + 1) {
        for (int j = 0; j < col; j = j + 1)
            sum = sum + a[i][j];
        printf("%d\n", sum);

    }

   

}
