/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Quiz_Q7

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


void get_number(short unsigned int *number){
	printf("Enter a number: \n");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , number);

	return;
}

void get_display_result(short unsigned int *number){
	float res= (log(*number) / log(3));
     (res == trunc(res))? printf("%hu ==> %hu" , *number , 0) :
    		 printf("%hu ==> %hu" , *number , 1);

	return;
}


int main(void){

	short unsigned int number;
	get_number(&number);

	get_display_result(&number);

	return 0;

}


