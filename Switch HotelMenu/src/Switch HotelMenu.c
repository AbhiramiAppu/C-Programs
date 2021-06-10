/*
 ============================================================================
 Name        : Switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("Please enter any of the following choices:- \n1 for Porotta \n2 for Biriyani \n3 for Fried Rice \n4 for Mandhi \nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You selected Porotta");
		break;
	case 2:
		printf("You selected Biriyani");
		break;
	case 3:
		printf("You selected Fried Rice");
		break;
	case 4:
		printf("You selected Mandhi");
		break;
	default:
		printf("You entered wrong choice");

	}
	return EXIT_SUCCESS;
}
