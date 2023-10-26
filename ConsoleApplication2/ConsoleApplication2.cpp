#include <stdio.h>
int add(int n) {
	int a = 0;  //합 변수
	for (int i = 1 ; i <= n ; i++) {
		a = a + i; //합 변수
	}
	return a;
}

int recAdd(int n) {
	if (n == 1)
		return 1;
	else
		return recAdd(n - 1) + n;
}

int main() {
	int n;

	printf("n값을 입력: ");

	scanf_s("%d", &n);

	int sum = add(n);

	printf("1 ~ %d까지의 합 = %d\n", n, sum);

	int sum1 = recAdd(n);

	printf("1 ~ %d까지의 합 = %d\n", n, sum1);



}
