/*
 ============================================================================
 Name        : Factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main(void) {
	int num,f;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);
	f = fact(num);
	printf("Factorial of a number is : %d",f);
	return EXIT_SUCCESS;
}

int fact(int n){
	int i,factorial=1;

		for(i=1;i<=n;i++){
			factorial = factorial * i;
		}
	return factorial;
}
