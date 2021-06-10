/*
 ============================================================================
 Name        : Prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,flag=0;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			flag = 1;
			break;
		}
	}
	if(n==1){
		printf("The entered number is neither prime nor composite");
	}else if(flag==1){
		printf("The entered number is not a prime number");

	}else{
        printf("The entered number is a prime number");
		}


	return EXIT_SUCCESS;
}
