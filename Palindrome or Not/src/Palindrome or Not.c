/*
 ============================================================================
 Name        : Palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,rev=0,remain,original;
	setbuf(stdout,NULL);
	printf("Enter a number : "); /* prints !!!Hello World!!! */
	scanf("%d",&num);
	original = num;
	while(num!=0){
		remain = num % 10;
		rev = rev * 10 + remain;
		num = num / 10;
	}

	if(original == rev){
		printf("The entered number %d is Palindrome",original);
	}else{
		printf("The entered number %d is not Palindrome",original);
	}



	return EXIT_SUCCESS;
}
