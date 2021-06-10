/*
 ============================================================================
 Name        : Negative.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout,NULL);
	printf("Please enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);

	if(num<0){
		printf("Entered number %d  is negative",num);
	}else{
		printf("Entered number %d is positive",num);
	}
	return EXIT_SUCCESS;
}
