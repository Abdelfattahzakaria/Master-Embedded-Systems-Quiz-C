/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Quiz_Q5

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_display_decimal_number(unsigned char *asscii_array){
	short unsigned int result= 0;
	while(*asscii_array) result= (result * 10) + (*asscii_array++ - '0');
	printf("after conversion decimal number is: %hu\n" , result);

	return;
}


int main(void){

	unsigned char *asscii_array= "12345";

	get_display_decimal_number(asscii_array);

	return 0;

}


