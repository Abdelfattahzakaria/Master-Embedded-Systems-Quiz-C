/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Quiz_Q4

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


void get_array_size(short unsigned int *array_size){
	printf("Enter size of array: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , array_size);

	return;
}


void get_array_data(short unsigned int array[] , short unsigned int *array_size){
	for(short unsigned int i= 0; i < *array_size; i++){
		printf("Enter element %hu: " , i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%hu" , &array[i]);
	}

	return;
}

void get_number(short unsigned int *number){
	printf("Enter the number you want to get its last occurrence: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , number);

	return;
}


void get_display_last_occurrence(short unsigned int array[] ,  short unsigned int *array_size , short unsigned int *number){
	short unsigned int last_index= -1;
	for(short unsigned int i= 0; i < *array_size; i++){
		if(array[i] == *number) last_index= i;
	}
	last_index != -1? printf("last occurrence: %hu\n" , last_index + 1) :
			printf("entered number does not exist: %hu\n" , last_index);

	return;
}

int main(void){

	short unsigned int array_size , number;
	get_array_size(&array_size);

	short unsigned int array[array_size];
	get_array_data(array , &array_size);

	get_number(&number);

	get_display_last_occurrence(array , &array_size , &number);

	return 0;

}







