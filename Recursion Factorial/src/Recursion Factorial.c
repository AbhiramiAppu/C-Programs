/*
 ============================================================================
 Name        : Recursion.c
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
	int n,f;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	f = fact(n);
	 printf("Factorial of a number is : %d",f);
		return EXIT_SUCCESS;
	}

	 int fact(int n)
{
		if(n<=1)
			return 1;
		return (n * fact(n-1));

	}


