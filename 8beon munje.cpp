

#include <stdio.h>
#include <string>

int main()
{
	char s1[7] = "sample";
	char s2[7] = "simple";

	if (strcmp(s1, s2) < 0)
		printf("%s가 %s보다 사전순으로 빠르다\n", s1, s2);

	else if (strcmp(s1, s2) == 0)
		printf("%s과 %s는 같다\n");

	else
		printf("%s가 %s보다 사전순으로 늦다.\n", s2, s1);
}
