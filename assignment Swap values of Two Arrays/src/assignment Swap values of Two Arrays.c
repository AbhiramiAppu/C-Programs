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
	int a1[100],i,a2[100],temp[100],n;
	setbuf(stdout,NULL);
	printf("Enter the size of arrays : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	printf("Enter the values of Array1 : ");
	for(i=0;i<n;i++){
		scanf("%d",&a1[i]);
	}
	printf("Enter the values of Array2 : ");
	for(i=0;i<n;i++){
		scanf("%d",&a2[i]);
	}
	for(i=0;i<n;i++){
		temp[i] = a1[i];
		a1[i] = a2[i];
		a2[i] = temp[i];
	}
	printf("Arrays after swapping : ");
	printf("\nArray1 :");
	for(i=0;i<n;i++){
		printf("%d\t",a1[i]);
	}
	printf("\nArray2 :");
		for(i=0;i<n;i++){
			printf("%d\t",a2[i]);
		}
	return EXIT_SUCCESS;
}
