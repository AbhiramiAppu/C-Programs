/*
 ============================================================================
 Name        : Studyprgm.c
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
	char name[20],i,length=0;
	setbuf(stdout,NULL);
	printf("Enter a string : "); /* prints !!!Hello World!!! */
	scanf("%s",name);

	while(name[length] != '\0'){
		length++;
	}
	//printf("%d",length);
	printf("The vowels in the given string is : ");
	for(i=0;i<length;i++){
		if(name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' || name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' || name[i] == 'u' || name[i] == 'U'){
			 printf("%c\t",name[i]);
		}
	}
	return EXIT_SUCCESS;
}
