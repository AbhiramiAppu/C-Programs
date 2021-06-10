/*
 ============================================================================
 Name        : Studyprgm.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int a[],int);
int main(void) {
	int n,evensum,a[10];
	setbuf(stdout,NULL);
	printf("Enter the size of array : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	evensum = sum(a,n);
	printf("Sum of even numbers in an array is : %d",evensum);
	return EXIT_SUCCESS;
}

int sum(int a[],int n){
	int i,sum=0;
	printf("Enter the values of array : ");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++){
		if(a[i]%2 == 0){
			sum = sum + a[i];
		}
	}
	return sum;
}
