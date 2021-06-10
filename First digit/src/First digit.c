/*
 ============================================================================
 Name        : First.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,first,last;
	setbuf(stdout,NULL);
	printf("Enter a number :  "); /* prints !!!Hello World!!! */
	scanf("%d",&num);
    first = num;
	while(first >= 10){
		first = first/10;
	}
	last = num % 10;
	printf("The first digit of the given number %d is : %d",num,first);
	printf("\nThe last digit of the given number %d is : %d",num,last);
	return EXIT_SUCCESS;
}
