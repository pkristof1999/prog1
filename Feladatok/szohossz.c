#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 0;
	int y = 0x01;
	do{
	++x;
	}while(y<<=1);
	printf("The wordlenght on this computer is: ");
	printf("%d",y);
	printf(" bits.\n");
	return 0;
}
