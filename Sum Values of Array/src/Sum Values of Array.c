/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,values[100],sum=0;
	setbuf(stdout,NULL);
	printf("Enter the limit : "); /* prints !!!Hello World!!! */
	scanf("%d",&limit);
	printf("Enter values of array : \n");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){
		sum = sum + values[i];
	}
	printf("Sum of values in array is : %d",sum);
	return EXIT_SUCCESS;
}
