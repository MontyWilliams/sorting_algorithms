#include "sort.h"
/**
 * bubble_sort - bubble sort alg
 * @array - array padded in
 * @size - size of passed in array
 */

void bubble_sort(int *array, size_t size)
{

	size_t i = 0;
	int temp, flag = 0;

	if (size < 2)
		return;
	while (flag == 0)
	{
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
			flag = 1;
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
		}
		i++;
	}
		if (flag == 0)
				break;
		flag = 0;
		i = 0;
	}

}
