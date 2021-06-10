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
	int n,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(i%2==0){
			sum = sum + i;
		}

	}
	printf("The sum of n even numbers = %d",sum);

	return EXIT_SUCCESS;
}
