
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("%d %p\n", a, &a);
	printf("%d %p\n", b, &b);

	//포인터 = 주소를 저장하는 변수
	//어떤 값을 저장하고 있는지도 알아야 한다

	int* p;
	p = &a;

	int* q = &b;

	printf("a의 주소 : %d %d\n", &a, p);
	printf("b의 주소 : %d %d\n", &b, q);

	//포인터 * 연산자 : 그 주소에 저장되어 있는 값
	*p = 11; //a = 11;
	printf("%d %d\n", a, *p);

}
