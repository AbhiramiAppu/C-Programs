/*
 ============================================================================
 Name        : character.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	setbuf(stdout,NULL);
	printf("Please enter a character : ");
	scanf("%c",&c);
	printf("The entered character is : %c",c);
	return EXIT_SUCCESS;
}
