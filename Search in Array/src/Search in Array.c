/*
 ============================================================================
 Name        : Search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,a[100],searchKey,flag=0;
	setbuf(stdout,NULL);
	printf("Enter the limit : "); /* prints !!!Hello World!!! */
	scanf("%d",&limit);
	printf("Enter the values : ");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}

	printf("Please enter the value to be searched : ");
	scanf("%d",&searchKey);

	for(i=0;i<limit;i++){
		if(searchKey == a[i]){
			flag = 1;
			break;

		}
	}

	if(flag == 1){
		printf("Value found at position %d",i+1);
	}else{
		printf("Value not found");
	}
		return EXIT_SUCCESS;
}
