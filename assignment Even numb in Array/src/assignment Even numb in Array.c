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
	int n,a[100],i,count=0;
	setbuf(stdout,NULL);
	printf("Enter the size of an array : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	printf("Enter the values of array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if (a[i]%2 == 0){
			count++;
		}
	}
	printf("Number of even numbers in the given array is %d",count);
	return EXIT_SUCCESS;
}
