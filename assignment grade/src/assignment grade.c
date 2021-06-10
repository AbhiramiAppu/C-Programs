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
	float totalmark;
	setbuf(stdout,NULL);
	printf("Enter the percentage : "); /* prints !!!Hello World!!! */
	scanf("%f",&totalmark);

	if(totalmark>90){
		printf("You have got A grade");
	}else if(totalmark<90 && totalmark>80){
		printf("You have got B  grade");
	}else if(totalmark<80 && totalmark>70){
		printf("You have got C grade");
	}else if(totalmark<70 && totalmark>60){
		printf("You have got D grade");
	}else if(totalmark<60 && totalmark>50){
		printf("You have got E grade");
	}else if(totalmark<50){
		printf("You are failed!!");
	}else{
		printf("You are wrongly entered");
	}

	return EXIT_SUCCESS;
}
