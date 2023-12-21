/**
 * A collection of array and 2-D array utility
 * functions.
 */

/**
 * Prints the given integer array to the standard output
 */
void printArray(const int *arr, int n);

/**
 * Prints the given (n x m) integer table to the standard
 * output.
 */
void printTable(int **table, int n, int m);

/**
 * Generates an array of integers of the given size filled
 * with random integer values between 0 and 100 (exclusive).
 * This function assumes that the random number
 * generator has already been seeded.
 */
int * generateRandomArray(int size);

/**
 * Sums the elements in the given array.
 */
int getSum(int *arr, int size);

/**
 * Frees the given (n x m) table.  Only the first parameter
 * (n, number of rows) is necessary to free the table.
 */
void freeTable(int **table, int n);

/**
 * return the mean of the array
 */
double getMean(const int *arr, int size);

/**
 * return the min of the array
 */
int getMin(const int *arr, int size);

/**
 * return the min number index
 */
int getIndexOfMin(const int *arr, int size);

/**
 * return max number from array
 */
int getMax(const int *arr, int size);

/**
 * rturn max number index 
 */
int getIndexOfMax(const int *arr, int size);

/**
 * return the new or dynamic array to main with new size
 */
int * filterThreshold(const int *arr, int size, int threshold, int *resultSize);

/**
 * Formed two dimensional new array for multiplication table and return
 */
int **createMultiplicationTable(int n, int m);
