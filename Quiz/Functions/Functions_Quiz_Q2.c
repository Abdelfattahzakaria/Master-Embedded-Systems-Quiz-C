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

void get_arrays_data(short unsigned int first_array[] , short unsigned int second_array[]){
	printf("Enter first array: \n");
	for(short unsigned int i= 0 ; i<= 9; i++){
		fflush(stdin); fflush(stdout);
		scanf("%hu" , &first_array[i]);
	}

	printf("Enter second array: \n");
	for(short unsigned int i= 0 ; i<= 4; i++){
		fflush(stdin); fflush(stdout);
		scanf("%hu" , &second_array[i]);
	}

	return;
}

void display_arrays_data(short unsigned int first_array[] , short unsigned int second_array[]){
	printf("First array before swapping\nFirst array->\t: \n");
	for(short unsigned int i= 0 ; i<= 9; i++) printf("%hu\t" , first_array[i]);
	printf("\n");

	printf("Second array before swapping\nSecond array->\t: \n");
	for(short unsigned int i= 0 ; i<= 4; i++) printf("%hu\t" , second_array[i]);
	printf("\n");

	return;
}

void swapping_diplaying_arrays_data(short unsigned int first_array[] , short unsigned int second_array[]){
	short unsigned int temp;
	for(short unsigned int i= 0 ; i<= 4; i++){
		temp= first_array[i];
		first_array[i]= second_array[i];
		second_array[i]= temp;
	}

	printf("First array after swapping\nFirst array->\t: \n");
	for(short unsigned int i= 0 ; i<= 9; i++) printf("%hu\t" , first_array[i]);
	printf("\n");

	printf("Second array after swapping\nSecond array->\t: \n");
	for(short unsigned int i= 0 ; i<= 4; i++) printf("%hu\t" , second_array[i]);
	printf("\n");

	return;
}

int main(void){

	short unsigned int first_array[10] , second_array[5];
	get_arrays_data(first_array , second_array);

	display_arrays_data(first_array , second_array);

	swapping_diplaying_arrays_data(first_array , second_array);


	return 0;

}

