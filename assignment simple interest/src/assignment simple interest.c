/*
 ============================================================================
 Name        : assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,simple;
	setbuf(stdout,NULL);
	printf("Enter Principal amount : "); /* prints !!!Hello World!!! */
	scanf("%d",&p);
	printf("Enter Interest rate : ");
	scanf("%f",&r);
	printf("Enter Number of years : ");
	scanf("%f",&n);

	simple = (p*r*n)/100;
	printf("The Simple Interest is : %f",simple);
	return EXIT_SUCCESS;
}
