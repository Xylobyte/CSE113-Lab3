/**
 * @file credit.c
 * @author Donovan Griego
 * @date 9-24-2020
 * @brief determine if a credit card is valid using Luhn's algorithm.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_DIGITS 16
#define VALID 0
#define INVALID -1
#define SIZE 32

void convert_card(int card[], char num[], int num_digits);
void print_card(int card[], int size);
int digit_sum(int card[], int size);
void doubling(int card[], int size);

int main(void)
{
	int card[NUM_DIGITS];
    /* use visa to store the credit card number from stdin */
    char visa[SIZE + 1];

	printf("Please enter a credit card number to check: ");
	for(int i = 0; i < NUM_DIGITS; i++) {
		visa[i] = getchar();
	}

	convert_card(card, visa, NUM_DIGITS);
	//print_card(card, NUM_DIGITS);

	printf("The card ");
	for (int i = 0; i < NUM_DIGITS; i++) {
		printf("%d", card[i]);
	}

	doubling(card, NUM_DIGITS);
	printf(" is %s\n", digit_sum(card, NUM_DIGITS)%10 == 0 ? "Valid":"Invalid");

	return 0;

}

void convert_card(int card[], char num[], int num_digits)
{
	int i;

	for(i = 0; i < num_digits; i++)
		card[i] = num[i] - '0';

}

/**
 * @brief doubles every other value in the given array
 * 
 * @param card array of values
 * @param size size of the array
 */
void doubling(int card[], int size)
{
	for(int i = size - 2; i >= 0; i -= 2){
		card[i] *= 2;
	}
}

/**
 * @brief sums the digits in a given array
 * 
 * @param card array of values to sum
 * @param size size of the array
 * @return int the total of the values
 */
int digit_sum(int card[], int size)
{
	int total = 0;
	for(int i = 0; i < size; i++){
		if(card[i] >= 10) {
			total += 1 + (card[i] - 10);
		} else {
			total += card[i];
		}
	}
	return total;
}

/**
 * @brief prints every index of given array
 * @param card array given
 * @param size size of array given
 * @return void, print function
 */
void print_card(int card[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("card[%d] = %d\n", i, card[i]);
}
