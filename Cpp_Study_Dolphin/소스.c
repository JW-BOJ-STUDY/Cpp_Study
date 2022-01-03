#include <stdio.h>

int main(void) 
{
	printf("1) %d \n", (int)NULL);
	printf("2) %d \n", sizeof(void *));
	printf("3) %d \n", sizeof(char *));
	printf("4) %d \n", sizeof(int *));
	printf("5) %d \n", sizeof(double *));
	printf("6) %d \n", sizeof(char **));
	printf("7) %d \n", sizeof(NULL));

	return 0;

}