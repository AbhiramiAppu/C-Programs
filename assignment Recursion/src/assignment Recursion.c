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
int f(int);
int main(void) {
	int n,m;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&n);
	m = f(n);
	printf("%d",m);
	return EXIT_SUCCESS;
}
int f(int n){ // @suppress("No return")
	if(n<=1)
		return
	f(n-1);
	printf("%d",n);

	f(n-1);
}





