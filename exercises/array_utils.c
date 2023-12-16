#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

void printArray(const int *arr, int n) {
  if(arr == NULL) {
    printf("[null]\n");
    return;
  }
  printf("[ ");
  for(int i=0; i<n-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d ]\n", arr[n-1]);
  return;
}

void printTable(int **table, int n, int m) {
  if(table == NULL) {
    printf("[null]\n");
    return;
  }
  for(int i=0; i<n; i++) {
    printArray(table[i], m);
  }
  return;
}

int * generateRandomArray(int size) {
  if(size < 0) {
    return NULL;
  }
  // Make daynamic memory we add the malloc function 
  int *randomArr = (int *)malloc(size * sizeof(int));
  for(int i=0; i<size; i++) {
    randomArr[i] = rand() % 100;
  }
  return randomArr;
}

int getSum(int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int total = 0;
  for(int i=0; i<size; i++) {
    total += arr[i];
  }
  return total;
}

void freeTable(int **table, int n) {
  if(table == NULL) {
    return;
  }
  for(int i=0; i<n; i++) {
    free(table[i]);
  }
  free(table);
}
// function to find the mean of numbers
double getMean(const int *arr, int size) {
  // check the array address 
  if(arr == NULL){
    printf("Invalide address or no address of array\n");
    return -1;
  }
  // check the size because we cannot find the mean of 1 element
  if(size == 0){
    printf("Invalide Size..\n");
    return -1;
  }
  double sum = 0.0;
  for(int i = 0; i<size; i++){
    sum += arr[i];
  }
  return sum/size;
}

int getMin(const int *arr, int size) {
  if(arr == NULL){
    printf("Invalide address or no address of array\n");
    return -1;
  }
  // check the size because we cannot find the Minimum of 1 element
  if(size == 0){
    printf("Invalide Size..\n");
    return -1;
  }
  int min = arr[0];
  for(int i = 0; i < size; i++){
    if(arr[i] < min){
      min = arr[i];
    
    }
  }
  return min;
}
// Function to find index of Minimum number index 
int getIndexOfMin(const int *arr, int size) {
  // check array validity
  if(arr == NULL){
    printf("Invalide array or No Address...\n");
    return -1;
  }
  int min = arr[0];
  int minIndex = 0;
  for(int i = 0; i<size; i++){
    if(arr[i] < min){
      min = arr[i];
      minIndex = i;

    }
  }
  return minIndex;
}
// function for to find max number in array
int getMax(const int *arr, int size) {
  if(arr == NULL){
    printf("Invalide array...\n");
    return -1;
  }
  int max = 0;
  for(int i = 0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}
// Funtion to find max number index
int getIndexOfMax(const int *arr, int size) {
  if(arr == NULL){
    printf("Invalide array...");
    return -1;
  }
  int max = 0;
  int maxIndex = 0;
  for(int i = 0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
      maxIndex = i;
    }
   
  }
  return maxIndex;
}
// the function filter the number from array according the condition 
// The function as not a normal function because it return the pointer / Address of dynamic array/pointer
int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {
  // check validity
  if(arr == NULL || resultSize == NULL){
    printf("Invalide array....");
    return NULL;
  }
  // variable count to store the increment value for the size of thresholdResult array/pointer;
  int count = 0;
  for(int i = 0; i<size; i++){
    // condition which filter size for filterArray array
    if(arr[i] >= threshold){
      count++;
    }
  }
  // The dynamic memory allocation for FilterArray 
  int *filterArray = (int *)malloc(count * sizeof(int));
  // index variable use to increment the dynamic array index/slot
  int index = 0;
  for(int i = 0; i<size; i++){
    // Threshold as a boundry the value which equal or greater from threshold will filter from array in store in the 
    // dynamic filterArray
    if(arr[i]>=threshold){
       filterArray[index++] = arr[i];
    }
    *resultSize = count;

  }
  // we will return the whole array/pointer to main
  return filterArray;
}
// create Multipliction table for 2D array
int **createMultiplicationTable(int n, int m) {
  // check Validity
  if(n == 0 || m == 0){
    printf("Invalide inpute...\n");
    return NULL;
  }
  // make the pointers array which store the address in row/pointer 
  int **table = (int **)malloc(n * sizeof(int *));
  // check validity
  if(table == NULL){
    printf("Invalide Memory allocation...\n");
    return NULL;
  }
  for(int i = 0; i<n; i++){
    // allocate memory for column for each row 
    table[i] = (int *)malloc(m * sizeof(int));
    // check validity
    if(table[i] == NULL){
      printf("Invalide memory Allocation for Column index...\n");
    }
      
  }
  // Multiplication of row and coloumn
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      table[i][j] = (i + 1) * (j + 1);
    }
  }
  // Return the 2D array
  return table;

}
