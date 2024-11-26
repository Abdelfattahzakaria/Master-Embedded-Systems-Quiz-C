/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Quiz_Q1

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_user_name_string(unsigned char *user_name , unsigned char *user_string){
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(user_string);

	printf("Enter your name: ");
	fflush(stdin); fflush(stdout);
	gets(user_name);

	return;
}


void checkout(unsigned char user_name[] , unsigned char user_string[]){
	(stricmp(user_name , user_string) == 0)? printf("Identical\n") :
			printf("Different\n");
	return;
}

int main(void){

	unsigned char user_name[100] , user_string[100];
	get_user_name_string(&user_name , &user_string);

	checkout(user_name , user_string);

	return 0;

}

