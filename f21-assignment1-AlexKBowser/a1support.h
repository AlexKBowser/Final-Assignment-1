#ifndef CMPSC311_A1SUPPORT_INCLUDED
#define CMPSC311_A1SUPPORT_INCLUDED

////////////////////////////////////////////////////////////////////////////////
//
//  File          : a1support.h
//  Description   : This is a set of general-purpose utility functions we use
//                  for the 311 homework assignments.
//
//  Author   : Patrick McDaniel
//  Created  : Mon Feb  9 07:30:26 EST 2021

//
// Functional Prototypes

int print_array_float(int length, float f_array[]) {
	// Print out the list of float values
	int fp;
	printf("Printing all float values up to three decimal places...\n");
	//loop through each element in array and print line by line
	for (fp = 0; fp < length; fp++)
		//.3 for three decimal places
		printf("%.3f\n", f_array[fp]);
	//leave space for next activity
	printf("\n");
}

int print_array_integer(int length, int i_array[]) {
	// Print out the list of integer values
	int ip;
	printf("Printing all integer values...\n");
	//loop through each element in array and print line by line
	for (ip = 0; ip < length; ip++)
		printf("%i\n", i_array[ip]);
	//leave space for next activity
	printf("\n");
}

float sum_array_float(int length, float f_array[]) {
	// Compute the sum of the float values
	int fs;
	float sum;

	printf("Summing all float values...\n");
	//loop through array and add each element to the sum variable
	for (fs = 0; fs < length; fs++)
		sum += f_array[fs];
	//return the final resulting sum
	return sum;
}

int sum_array_integer(int length, int i_array[]) {
	// Compute the sum of the integer values
	int is, sum;

	printf("Summing all integer values...\n");
	//loop through array and add each element to the sum variable
	for (is = 0; is < length; is++)
		sum += i_array[is];
	//return the final resulting sum
	return sum;
}

int euclids_algorithm(int a, int b){
	// Euclid's algorithm to calculate the greatest common divisor
	int t;
	//while b does not equal zero, set temp value to b, set b to a mod b,
	//and replace a with original b to continue minimizing result
	while (b != 0) {
		t = b;
		b = a % b;
		a = t
	}
	//when b equals zero, the final result has been found by b's successor. Return a
	return a
}

int selection_sort_float(int length, float f_array[]) {
	// Sort the list of float values
	int f1, f2, temp;

	//based off wiki page provided, finding mins and climbing up to max
	//continue through array's elements to find the min
	for (f1 = 0; f1 < length - 1; f1++)
	{
		//set temporary value for min to first element index
		int minLocation = f1;

		//find the minimum element by comparing the neighboring elements
		for (f2 = f1 + 1; f2 < length; f2++){
			//if element is less than current min element, set new index
			if (f_array[f2] < f_array[minLocation])
				minLocation = f2;
		}

		//finished search for min, switch current location of f1 index element with min
		if (minLocation != f1){
			temp = f_array[f1];
			f_array[f1] = f_array[minLocation];
			f_array[minLocation] = temp;
		}
		//min now in f1 position, moving forward to next f1++ to find new min
	}
}

int selection_sort_integer(int length, int i_array[]) {
	// Sort the list of integer values
	int i1, i2, temp;

	//same as selection_sort_float (see line 82)
	for (i1 = 0; i1 < length - 1; i1++)
	{
		int minLocation = i1;
		for (i2 = i1 + 1; i2 < length; i2++) {
			if (i_array[i2] < i_array[minLocation])
				minLocation = i2;
		}

		if (minLocation != i1) {
			temp = i_array[i1];
			i_array[i1] = i_array[minLocation];
			i_array[minLocation] = temp;
		}
	}
}

int graph_sin(float mult) {
	// Graph the sin(x*multiplier) function
	int col, row, colLine, colNum,
		x_axis = -3
	float y = 1.5,
		  x = -3.5;

	//continue through each row and col
	for (row = 0; row < 31; row++) {
		//first element in beginning of each row is y axis
		printf("%.1f|", y);

		//set x to beginning of row
		x = -3.5;
		//go through columns across the current row
		for (col = 0; col < 71; col++) {
			//if there is a correlation between y, x, and mult, then print *
			if (y == sin(x * mult))
				printf("*");
			//print whitespace to fill in empty portion of sine graph
			else printf(" ");
			//add to next point in col
			x += 0.1;
		}
		//down to next point in row
		y -= 0.1;
	}
	
	//two whitespaces for the number and line of y axis
	printf("  ");
	//set x back to -3.5
	x = -3.5;
	//print the x-axis line
	for (colLine = 0; colLine < 71; colLine++)
		printf("-");
	//label the x-axis with integers of x
	for (colNum = 0; colNum < 71; colNum++) {
		if (x == x_axis) {
			printf("%i", x_axis);
			x_axis += 1;
		}
		//if x is currently not an integer, do not label (fill with whitespace)
		else printf(" ");
		x += 0.1;
	}

}
#endif // CMPSC311_A1SUPPORT_INCLUDED
