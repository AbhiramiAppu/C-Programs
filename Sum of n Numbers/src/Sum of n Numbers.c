/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		sum = sum + i;
	}
	printf("The sum of n numbers = %d",sum);
	return EXIT_SUCCESS;
}
