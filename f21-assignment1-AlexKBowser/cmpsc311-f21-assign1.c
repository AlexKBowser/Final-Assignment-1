////////////////////////////////////////////////////////////////////////////////
//
//  File           : cmpsc311-f21-assign1.c
//  Description    : This is the main source code for for the first assignment
//                   of CMPSC311 (systems programming).  See the related
//                   assignment page for details.
//
//   Author        : ????
//   Last Modified : ????
//

// Include Files
#include <stdio.h>
#include <math.h>

// Project Includes
#include <a1support.h>

//
// Functions

////////////////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for assignment #1
//
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {

	// Local variables
	// NOTE: this is where you will want to add some new variables
	float f_array[20];
	int i_array[20];
    int i, j, k, l;

	// First, lets read in the float numbers to process
	for (i=0; i<20; i++) {
		scanf("%f", &f_array[i]);
	}

	for (j = 0; j < 20; j++) {
		if (f_array[j] >= 10)
			f_array[j] = f_array[j] * M_PI;
		else f_array[j] = f_array[j] * 8.4;
	}

	for (l = 0; l < 20; l++)
		i_array[l] = f_array[l];

	//test print
	print_array_float(20, f_array);
	print_array_integer(20, i_array);

	//test sum
	printf("The sum of the float values is: %f\n", sum_array_float(20, f_array));
	printf("The sum of the integer values is: %i\n", sum_array_integer(20, i_array);
	
	//test Euclid GCD
	printf("Now printing the GCD of adjacent values in the integer array...\n");
	for (m = 0; m < 19; m++)
		printf("%i\n", euclids_algorithm(i_array[m], i_array[m + 1]));

	//test sort
	selection_sort_float(20, f_array);
	print_array_float(20, f_array);
	selection_sort_integer(20, i_array);
	print_array_integer(20, i_array);

	//test sine graph
	graph_sin(mult);

	// Return successfully
	return(0);
}
