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

int getMax(const int *arr, int size) {
  //TODO: implement
}

int getIndexOfMax(const int *arr, int size) {
  //TODO: implement
}

int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {
  //TODO: implement
}

int **createMultiplicationTable(int n, int m) {
  //TODO: implement
}
