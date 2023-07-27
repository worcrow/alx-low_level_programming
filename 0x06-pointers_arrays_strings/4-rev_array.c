/**
 *reverse_array - reverse the order of an array
 *@a: array of integers
 *@n: the number of element to swap
*/
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

