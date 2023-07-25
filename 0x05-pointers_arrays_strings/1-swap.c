/**
 *swap_int - swap the value of two pointers
 *@a: the first variable
 *@b: the second variable
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

