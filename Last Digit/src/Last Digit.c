/*
 ============================================================================
 Name        : Last.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,last;
	setbuf(stdout,NULL);
	printf("Enter the number : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);
	last = num % 10;
	printf("The last digit of the given number is : %d",last);
	return EXIT_SUCCESS;
}
