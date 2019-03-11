#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int szamlalo = 0;
	printf("Adjon meg egy decimális számot!\n");
	scanf("%d",&a);
	printf("A megadott szám unárisba átváltva:\n");
	for (int i = 0; i < a; ++i)
	{
		printf("|");
		++szamlalo;
		if (szamlalo % 5 == 0) printf(" ");
	}
	printf("\n");
	return 0;
}
