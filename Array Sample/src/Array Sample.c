/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[5],i;
	setbuf(stdout,NULL);
	printf("Enter the values of array :-\n"); /* prints !!!Hello World!!! */
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}

	printf("The entered values are :-\n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);

	}
	return EXIT_SUCCESS;
}
