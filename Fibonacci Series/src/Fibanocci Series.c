/*
 ============================================================================
 Name        : Fibanocci.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,num,t1=0,t2=1,fib = t1 + t2;
	setbuf(stdout,NULL);
	printf("Enter the number of terms : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);
	printf("The fibonacci series is : %d,%d",t1,t2);
	for(i=1;i<num;i++){
		printf(",%d",fib);
		t1 = t2;
		t2 = fib;
		fib = t1 + t2;
			}
	return EXIT_SUCCESS;
}
