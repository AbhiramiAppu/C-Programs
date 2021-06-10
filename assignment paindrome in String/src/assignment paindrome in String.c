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
#include<string.h>
int main(void) {
	char str[20];
	int i,n,flag=0;
	setbuf(stdout,NULL);

	printf("Enter a string : "); /* prints !!!Hello World!!! */
	scanf("%s",str);
	n = strlen(str);
	for(i=0;i<n;i++){
		if(str[i] != str[n-i-1]){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		printf("Entered string %s is not Palindrome",str);
	}else{
		printf("Entered string %s is Palindrome",str);
	}

	return EXIT_SUCCESS;
}
