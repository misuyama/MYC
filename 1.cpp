
#include <stdio.h>

int main() {
	int a[5];
	
	printf("숫자를 입력하십시오 : ");
	
	for (int i = 0; i < 5; i = i + 1) {
		scanf_s("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i < 5; i = i + 1) {
		printf("%d", a[i]);
		sum = sum + a[i];
	}

	printf("입력한 값의 합은 %d 이고 평균은 %f입니다. ", sum, (float)sum / 5);

}


