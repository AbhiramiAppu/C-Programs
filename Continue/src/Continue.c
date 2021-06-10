/*
 ============================================================================
 Name        : Continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	setbuf(stdout,NULL);
	for(i=0;i<10;i++){
		printf("\nHi");
		if(i==5){
			continue;
		}
		printf("\nHello");
	}
	printf("\nFinished"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

