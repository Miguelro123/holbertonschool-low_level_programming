#include "function_pointers.h"
/**
 *array_iterator - Execute a function given as a parameter.
 *@array: Pointer to array of int type.
 *@size: Size of array.
 *@action: Pointer a function.
 *Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t z;

	if (array != NULL && action != NULL)
	{
		for (z = 0; z < size; z++)

		{
			action(array[z]);
		}
	}
}
