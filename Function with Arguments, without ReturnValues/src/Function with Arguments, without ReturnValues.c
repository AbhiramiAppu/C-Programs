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
void sum(int,int);
int main(void) {
	int a,b;
	setbuf(stdout,NULL);
	printf("Enter two numbers : "); /* prints !!!Hello World!!! */
	scanf("%d%d",&a,&b);
	sum(a,b);
	return EXIT_SUCCESS;
}

void sum(int num1, int num2){
	int sum;
	sum = num1 + num2;
	printf("Result is : %d",sum);
}
