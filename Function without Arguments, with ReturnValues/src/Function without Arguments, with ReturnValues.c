/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int res;
	res = sum();
	printf("Result is : %d",res); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

int sum(){
	int a,b,sum;
	setbuf(stdout,NULL);
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	sum = a + b;
	return sum;

}
