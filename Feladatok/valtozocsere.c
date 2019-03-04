#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	printf("Adjon meg két egész számot!\n");
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("\nAz számok felcserélve:\n");	
	
	x = x - y;
	y = y + x;
	x = y - x;

	printf("%d",x);
	printf("\n");
	printf("%d",y);
	printf("\n");
}
