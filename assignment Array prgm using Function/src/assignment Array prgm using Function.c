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
void getArray(int a[],int);
void displayArray(int a[],int);
int main(void) {
	int a[10],n;
	setbuf(stdout,NULL);
	printf("Enter the size of array : ");
	scanf("%d",&n);
	getArray(a,n); /* prints !!!Hello World!!! */
	displayArray(a,n);
	return EXIT_SUCCESS;
}
void getArray(int a[],int n){
	int i;
	setbuf(stdout,NULL);
	printf("Enter the values of array : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void displayArray(int a[],int n){
	int i;
	setbuf(stdout,NULL);
	printf("The entered array values are : \n");
	for(i=0;i<n;i++){
			printf("%d\t",a[i]);
		}
}
