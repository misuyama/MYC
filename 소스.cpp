#include <stdio.h>

int main() {
	int n;
	int a[1000];
	printf("n�� �Է��Ͻʽÿ� : ");
	scanf_s("%d", &n);

	printf("%d���� ���ڸ� �Է� : ", n);

	for (int i = 0; i < n; i = i + 1) {
		scanf_s("%d", &a[i]);
		
		
		
	}
		
	printf("�ȹٷ� ��� : \n");
	
	for (int i = 0; i < n; i = i + 1) {
		printf("%d\n", a[i]);
		
	}
	

	printf("�Ųٷ� ��� :\n");
	for (int i = n-1 ; i >= 0; i = i - 1) {
		printf("%d\n", a[i]);
		
	}
	
}