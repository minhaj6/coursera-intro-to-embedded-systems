/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
unsigned char *sort_array(unsigned char *array, unsigned int n);
/**
 * @brief sorts the array from largest to smallest number.
 *
 * @param array Pointer to the array to be sorted. 
 * @param n Length of the array.
 *
 * @return The sorted array. 
 */

void print_array(unsigned char *array, unsigned int n);
/**
 * @brief prints the array passed as input.
 *
 * @param array pointer to the array needs to be printed. 
 * @param n Length of the array.
 *
 * @return The sorted array. 
 */

float find_median(unsigned char *array, unsigned int n);
/**
 * @brief This function finds median of a sorted array.
 *
 * @param array pointer to the array needs to be printed. 
 * @param n Length of the array.
 *
 * @return median value of the array.
 */

float find_mean(unsigned char *array, unsigned int n);
/**
 * @brief This function finds mean of an array.
 *
 * @param array pointer to the array needs to be printed. 
 * @param n Length of the array.
 *
 * @return mean value of the array.
 */

unsigned char find_maximum(unsigned char *array, unsigned int n);
/**
 * @brief This function finds maximum of an array.
 *
 * @param array pointer to the array needs to be printed. 
 * @param n Length of the array.
 *
 * @return maximum value of the array.
 */

unsigned char find_minimum(unsigned char *array, unsigned int n);
/**
 * @brief This function finds minimum of an array.
 *
 * @param array pointer to the array needs to be printed. 
 * @param n Length of the array.
 *
 * @return minimum value of the array.
 */

void print_statistics(unsigned char *array, unsigned int n);
/**
 * @brief This function prints statistics of an array.
 *
 * @param array pointer to the array needs to be printed. 
 * @param n Length of the array.
 *
 * @return returns void.
 */

#endif /* __STATS_H__ */
