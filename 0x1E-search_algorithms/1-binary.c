/**
 * binary_search - searches for a value in a sorted array of integers using
 *                 the Binary search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not present in
 *         array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		print_array(array, left, right);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - prints an array of integers between two indices
 * @array: pointer to the first element of the array to print
 * @start: the first index to print
 * @end: the last index to print
 */
void print_array(int *array, int start, int end)
{
	int i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);

		if (i != end)
			printf(", ");
	}

	printf("\n");
}
