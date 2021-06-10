/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2,sum;
	setbuf(stdout,NULL);
	printf("Enter first number : ");
	scanf("%d",&number1);
	printf("Enter second number : ");
	scanf("%d",&number2);
	sum = number1 + number2;
	printf("Result is : %d",sum);
	return EXIT_SUCCESS;
}
