/*
 ============================================================================
 Name        : Addition.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array1[10][10],array2[10][10],n,i,j,sum[10][10];
	setbuf(stdout,NULL);
	printf("Enter the size of arrays : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	printf("Enter the values of array1 : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&array1[i][j]);
		}
	}

	printf("Enter the values of array2 : \n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&array2[i][j]);
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum[i][j] = array1[i][j] + array2[i][j];
		}
	}

	printf("Sum of two arrays is : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
