#include "search_algos.h"

/**
 * linear_search - function that uses linear search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: -1 if not found else return the first index
 */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = { 5, 8, 2, 6, 1, 9, 3 };
    int size = sizeof(array) / sizeof(array[0]);
    int value = 6;
    int index = linear_search(array, size, value);
    if (index != -1) {
        printf("%d found at index %d\n", value, index);
    } else {
        printf("%d not found in the array\n", value);
    }
    return 0;
}
