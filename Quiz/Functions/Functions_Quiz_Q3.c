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


void get_array_size(short unsigned int *array_size)
{
	printf("Enter the size of an array\n");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , array_size);

	return;
}

void get_array_data(short unsigned int first_array[] , short unsigned int *array_size)
{
	for(short unsigned int i= 0; i < *array_size; i++){
		printf("Enter Element %hu: " , i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%hu" , &first_array[i]);
	}
	printf("\n");

	return;
}

void get_reverse_array(short unsigned int first_array[] , short unsigned int second_array[] ,
		short unsigned int *array_size)
{
	for(short unsigned int i= 0; i < *array_size; i++)
		second_array[(*array_size-1) - i]= first_array[i];

	return;
}

void display_reverse_array_data(short unsigned int second_array[] ,
		short unsigned int *array_size)
{
	printf("Result of an reverse array:\t");
	for(short unsigned int i= 0; i < *array_size; i++) printf("%hu\t" , second_array[i]);
    printf("\n");

	return;
}

int main(void){

	short unsigned int array_size;
	get_array_size(&array_size);

	short unsigned int first_array[array_size] , second_array[array_size];

	get_array_data(first_array , &array_size);

	get_reverse_array(first_array , second_array , &array_size);

	display_reverse_array_data(second_array , &array_size);

	return 0;
}



