/*
 ============================================================================
 Name        : Selection.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[100],n,temp;
	setbuf(stdout,NULL);
	printf("Enter the limit : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	printf("Enter the values of array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}
		}
	}

	printf("The sorted array is :- \n");
	for (i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
	return EXIT_SUCCESS;
}
