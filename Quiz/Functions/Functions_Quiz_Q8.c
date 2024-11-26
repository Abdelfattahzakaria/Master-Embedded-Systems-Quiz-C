/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Quiz_Q8

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_number(signed int *number){
	printf("Enter an integer in decimal number system: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d" , number);

	return;
}

void get__display_result(signed int *number){
    signed int k;
    printf("%d in binary system is: " , *number);
    for(signed int i= 31; i >= 0; i--){
    	k= *number >> i;
    	k & 1? printf("1") : printf("0");
    }
    printf("\n");

    k= *number >> 3;
    k & 1? printf("4th last significant bit is 1\n") :
    		printf("4th last significant bit is 0\n");

    return;
}


int main(void){

	signed int number;
    get_number(&number);

    get__display_result(&number);

	return 0;

}
