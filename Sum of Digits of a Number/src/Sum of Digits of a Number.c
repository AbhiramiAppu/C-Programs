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
	int num,sum=0,rem,temp;
	setbuf(stdout,NULL);
	printf("Enter a number :"); /* prints !!!Hello World!!! */
	scanf("%d",&num);
    temp = num;
	while(num != 0){
		rem = num % 10;
		sum = sum + rem;
		num = num /10;
	}

	printf("The sum of digits of %d is : %d",temp,sum);
	return EXIT_SUCCESS;
}
