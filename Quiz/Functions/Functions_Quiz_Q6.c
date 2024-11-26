/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Quiz_Q6

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_number_bit_position(short unsigned int *number , short unsigned int *bit_position){
	printf("Enter Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , number);

	printf("Bit Position: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , bit_position);

	return;
}

void get_display_result(short unsigned int *number , short unsigned int *bit_position){
	*number&= ~(1 << *bit_position);
	printf("Result = %hu\n" , *number);

	return;
}



int main(void){

	short unsigned int number , bit_position;
	get_number_bit_position(&number , &bit_position);

	get_display_result(&number , &bit_position);

	return 0;

}


