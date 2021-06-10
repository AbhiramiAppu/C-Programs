/*
 ============================================================================
 Name        : swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,temp;
	setbuf(stdout,NULL);
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Before swapping...\n a = %d\n b = %d",a,b);

	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swapping...\n a = %d\n b = %d",a,b);
	return EXIT_SUCCESS;
}
