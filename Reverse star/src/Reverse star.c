/*
 ============================================================================
 Name        : Reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n;
	setbuf(stdout,NULL);
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=n;i>=0;i--){
		for(j=i;j>=1;j--){
			printf("* ");
		}
		puts("\n");
	}
	 /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
