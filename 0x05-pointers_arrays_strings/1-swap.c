#include "main.h"
/**
 *swap_int - Function to swap integers
 *@a: variable of first integer
 *@b: variable of second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
