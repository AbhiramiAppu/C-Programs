/*
 ============================================================================
 Name        : Nested.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	setbuf(stdout,NULL);
	printf("Enter three numbers : "); /* prints !!!Hello World!!! */
	scanf("%d%d%d",&num1,&num2,&num3);

	if(num1>num2){
		if(num1>num3){
			printf("%d is greater",num1);

		}else{
			printf("%d is greater",num3);
		}
	}else{
		if(num2>num3){
		       printf("%d is greater",num2);
	}else{
		printf("%d is greater",num3);
	}
	}
	return EXIT_SUCCESS;
}
