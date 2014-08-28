#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "read_data.h"

/* 
 * Takes a file name as input from command line
 * which contains array of integers. These are
 * sorted either in ascending order or descending
 * order. The array is printed out both pre- and 
 * post-sort.
 *
 * DO NOT EDIT THIS MAIN FUNCTION 
 */
int
main(int argc, char **argv)
{
	int i;
        int num;
	int to_sort_array[MAX_NUM];
	int sorted_array[MAX_NUM];
	
	if (argc != 2) {
		perror("Input arguments are not correct.\n");
		return 1;
	}

	/* Fill the input array */
	num = fillInput(to_sort_array, argv[1]);
	if (num <= 0) {
		perror("Data initilization error.\n");
		return 1;
	}

	/* Print input and sort */
	printf("Unsorted array:\t");
	for (i = 0; i < num; i++) {
		printf("%d ",to_sort_array[i]);
	}
	printf("\n");

	merge_sort(to_sort_array, sorted_array, num);
#ifdef DSC
	printf("Sorted (descending) array: ");
#elif ASC
	printf("Sorted (ascending) array: ");
#endif
	for (i = 0; i < num; i++) {
		printf("%d ",sorted_array[i]);
	}
	printf("\n");
	return 0;
}

/*
 * INSERT DESCRIPTION HERE
 */
void 
merge_sort(int input_array[], int output_array[], int num)
{
	/* COMPLETE ME */
}
