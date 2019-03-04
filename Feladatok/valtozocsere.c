#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	printf("Adjon meg két egész számot!\n");
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\nA számok felcserélve:\n");	
	
	a = a + b; //a = a + b
	b = a - b; //b = (a + b) - b = a
	a = a - b; //a = (a + b) - a = b

	printf("%d",a);
	printf("\n");
	printf("%d",b);
	printf("\n");
}
