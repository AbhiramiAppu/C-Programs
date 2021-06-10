/*
 ============================================================================
 Name        : ElseifLadder.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	setbuf(stdout,NULL);
	printf("Enter two numbers : "); /* prints !!!Hello World!!! */
	scanf("%d%d",&num1,&num2);
	printf("Please enter any of the following choices:- \n1 for Addition \n2 for Subtraction \n3 for Multiplication \n4 for Division \nEnter your choice : ");
	scanf("%d",&choice);

	if(choice==1){
		printf("\nYou select Addition");
		result = num1+num2;
		printf("\nResult of addition = %d",result);
	}else if(choice==2){
		printf("\nYou select Subtraction");
		result = num1-num2;
		printf("\nResult of subtraction = %d",result);
	}else if(choice==3){
		printf("\nYou select Multiplication");
		result = num1*num2;
		printf("\nResult of multiplication = %d",result);
	}else if(choice==4){
		printf("\nYou select Division");
		result = num1/num2;
		printf("\nResult of division = %d",result);
	}else{
		printf("\nYou entered wrong choice");
	}
	return EXIT_SUCCESS;
}
