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
	int n,a[100],i,j,temp;
	setbuf(stdout,NULL);
	printf("Enter the size of an array : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	printf("Enter the values of array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("Sorted array in descending order : ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
