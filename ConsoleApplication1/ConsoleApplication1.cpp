#include <stdio.h>

void fact(int a) {
	int f = 1;
	for (int i = 1; i <= 10; i++)
		f *= i;
	return f;
}

int main() {
	int n = fact(10);
	printf("%d", n);

}

