/*
 ============================================================================
 Name        : Multi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m,n,i,j,a[10][10];
	setbuf(stdout,NULL);
	printf("Enter the row size : "); /* prints !!!Hello World!!! */
	scanf("%d",&m);
	printf("Enter the column size : ");
	scanf("%d",&n);
	printf("Enter values : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
