/**
 * @file array.h
 * 
 * @author Donovan Griego
 *
 * @date 9-24-2020
 *  
 * Assignment: Lab 3 
 *
 * @brief header file for array.c
 *
 * @details see array.c for details
 *  
 * @bugs none
 *
 * @todo add floating point versions of the functions
 */

#ifndef ARRAY_H_
#define ARRAY_H_

#include <stdlib.h> 		/* for size_t declaration */
#define LT 1
#define LE 2
#define EQ 3
#define GE 4
#define GT 5

/* function declarations go here */
void print_array(int a[], size_t size);
int find_max(int a[], size_t size);
int find_min(int a[], size_t size);
int midpoint(int min, int max);
int get_count(int a[], size_t size, int type, int x);
int linear_search(int a[], size_t size, int x);
int sum(int a[], size_t size);
int average(int a[], size_t size);
void reverse(int a[], size_t size);
int even_count(int a[], size_t size);
int odd_count(int a[], size_t size);
int divisible_count(int a[], size_t size, int x);
#endif

