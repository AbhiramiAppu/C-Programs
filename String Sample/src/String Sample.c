/*
 ============================================================================
 Name        : String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[10];
	setbuf(stdout,NULL);
	printf("Enter a name : "); /* prints !!!Hello World!!! */
	scanf("%s",name);
	printf("The entered name is : %s",name);
	return EXIT_SUCCESS;
}
