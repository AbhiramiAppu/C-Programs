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
	int limit,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter the limit : "); /* prints !!!Hello World!!! */
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){

		if(i%2 != 0){

			sum = sum + i;

		}
	}
	printf("Sum of odd numbers upto the limit = %d ",sum);
	return EXIT_SUCCESS;
}
