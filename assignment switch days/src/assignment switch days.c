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
	int choice;
	setbuf(stdout,NULL);

	printf("Please enter any of the choices to select the day :- \n1 for Sunday \n2 for Monday \n3 for Tuesday \n4 for Wednesday \n5 for Thursday \n6 for Friday \n7 for Saturday \nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("The selected day is Sunday");
		break;
	case 2:
		printf("The selected day is Monday");
		break;
	case 3:
		printf("The selected day is Tuesday");
		break;
	case 4:
		printf("The selected day is Wednesday");
		break;
	case 5:
		printf("The selected day is Thursday");
		break;
	case 6:
		printf("The selected day is Friday");
		break;
	case 7:
		printf("The selected day is Saturday");
		break;
	default:
		printf("Invalid Entry");
	}
	return EXIT_SUCCESS;
}
