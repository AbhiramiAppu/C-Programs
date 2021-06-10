/*
 ============================================================================
 Name        : Larger.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	printf("Enter two numbers : "); /* prints !!!Hello World!!! */
    scanf("%d%d",&num1,&num2);

	if(num1 > num2){
		printf("%d is larger number",num1);
	}else{
		printf("%d is larger number",num2);
	}
	return EXIT_SUCCESS;
}
