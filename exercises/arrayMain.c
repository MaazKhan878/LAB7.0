#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "array_utils.h"

int main(int argc, char **argv) {

  //seed the random number generator with the current time
  srand(time(NULL));

  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);
  // get sum of all element
  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  // Function print array
  printArray(arr, n);
  // function get the Mean of Number
  double mean= getMean(arr, n);
  // Check the function return valid number
  if(mean!= -1){
  printf("The mean of Numbers as %f\n",mean);
  }
  // Function return min of the number
  int min = getMin(arr, n);
  // check validaty
  if(min != -1){
    printf("The minimum as %d\n",min);
  }
  // Function to find minimum number index number
  int minIndex = getIndexOfMin(arr, n);
  if(minIndex != -1){
    printf("The Index of Minimuim number as %d\n",minIndex);
  }

  free(arr);

  return 0;
}
