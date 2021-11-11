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
 * @file stats.c
 * @brief implementation files for week1 assignments
 *
 * <Add Extended Description Here>
 *
 * @author Minhaj Uddin Ahmad (Minhaj6)
 * @date Sun 07 Nov 2021 09:46:03 PM PST
 
 *
 */

#include <stdio.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)


void main() {

  unsigned char test[SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                              7,  87, 250, 230,  99,   3, 100,  90 };

  unsigned char *array = sort_array(test, SIZE);
  print_array(array, SIZE);
  print_statistics(array, SIZE);

}

unsigned char *sort_array(unsigned char *array, unsigned int n) {
  int i, j, tmp;
  for (i=0; i<n; i++) {
    for (j=i+1; j<n; j++) {
      if (array[j] > array[i]) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
  return array;
}

void print_array(unsigned char *array, unsigned int n) {
  for (int i=0; i<n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}


float find_median(unsigned char *sorted_array, unsigned int n) {
  float median = 0;
  if (n%2 == 0) 
      median = (sorted_array[(n-1)/2] + sorted_array[(n/2)])/2.0;
  else
      median = sorted_array[n/2];
  return median;
}

float find_mean(unsigned char *array, unsigned int n) {
  float sum = 0;
  for (int i=0; i<n; i++) {
    sum += array[i];
  }
  return sum/n;
}

unsigned char find_maximum(unsigned char *array, unsigned int n) {
  unsigned char max = array[0];
  for (int i=1; i<n; i++) {
    if (max < array[i])
      max = array[i];
  }
  return max;

}

unsigned char find_minimum(unsigned char *array, unsigned int n) {
  unsigned char min = array[0];
  for (int i=1; i<n; i++) {
    if (min < array[i])
      min = array[i];
  }
  return min;

}

void print_statistics(unsigned char *array, unsigned int n) {
  printf("Minimum \t = %d\n", find_minimum(array, n));
  printf("Maximum \t = %d\n", find_maximum(array, n));
  printf("Mean \t = %0.2f\n", find_mean(array, n));
  printf("Median \t = %0.2f\n", find_median(array, n));
}