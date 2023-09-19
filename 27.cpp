#include <stdio.h>

int main() {
	int n;
	int a[10];

	printf("자연수를 입력하십시오 : ");

	for (int i = 0; i < 10; i = i + 1) {
		scanf_s("%d", &a[i]);
	}

	int max = a[0], min = a[0];  //시작값을 비교한다. 
	for (int i = 1; i < 10; i = i + 1) {
		if (a[i] > max) {
			max = a[i];
		}
		
		else if (a[i] < min) {
			min = a[i];
		}
	}
	printf("최대값 %d 최소값 %d ", max, min);
}



