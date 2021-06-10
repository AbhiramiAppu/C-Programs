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
	float mark;
	setbuf(stdout,NULL);
	printf("Enter the marks : "); /* prints !!!Hello World!!! */
	scanf("%f",&mark);

	if(mark<50)
	{
		printf("You are Failed!!");
	}else{
			printf("You are passed!!");
	}

	return EXIT_SUCCESS;
}
