#include <stdio.h>

int main() {
	int n;
	int a[1000];
	printf("n을 입력하십시오 : ");
	scanf_s("%d", &n);

	printf("%d개의 숫자를 입력 : ", n);

	for (int i = 0; i < n; i = i + 1) {
		scanf_s("%d", &a[i]);
		
		
		
	}
		
	printf("똑바로 출력 : \n");
	
	for (int i = 0; i < n; i = i + 1) {
		printf("%d\n", a[i]);
		
	}
	

	printf("거꾸로 출력 :\n");
	for (int i = n-1 ; i >= 0; i = i - 1) {
		printf("%d\n", a[i]);
		
	}
	
}