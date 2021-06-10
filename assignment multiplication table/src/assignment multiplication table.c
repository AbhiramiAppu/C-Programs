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

int main(void) {
	int num,i,mul;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);

	for(i=1;i<=10;i++){
		mul = i * num;
		printf("%d * %d = %d\n",i,num,mul);
	}
	return EXIT_SUCCESS;
}
