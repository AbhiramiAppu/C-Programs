/*
 ============================================================================
 Name        : Studyprgm1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	setbuf(stdout,NULL);
	for(i=1;i<=100;i++){
		if(i%3==0 && i%5==0){
				printf("%d - BingBong\n",i);
			}
		else if(i%3==0){
			printf("%d - Bing\n",i);
		}else if(i%5==0){
			printf("%d - Bong\n",i);
		} else {
		printf("%d\n",i);
	}
	}
	 /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
