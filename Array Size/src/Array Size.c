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
	int a[100],i,limit;
	setbuf(stdout,NULL);
	printf("Enter the limit : "); /* prints !!!Hello World!!! */
	scanf("%d",&limit);
	printf("Enter the values of array :-\n");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("The entered values are :-\n");
	for(i=0;i<limit;i++){
		printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
