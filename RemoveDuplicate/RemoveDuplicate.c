#include <stdio.h>

int removeDuplicates(int array[], int size)
{
    if (size == 0 || size == 1)
        return size;

    int temp[size];
    int j = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] != array[i + 1])
        {
            temp[j++] = array[i];
        }
    }

    temp[j++] = array[size - 1];

    for (int i = 0; i < j; i++)
    {
        array[i] = temp[i];
    }

    return j;
}

int main()
{

    int element;
    int arraySize;
    printf("Enter array size: ");
    scanf("%d", &arraySize);

    int array[arraySize];
    printf("Enter elements of the array:\n");

    for (int i = 0; i < arraySize; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &element);
        array[i] = element;
    }

    int newSize = sizeof(array) / sizeof(array[0]);
    newSize = removeDuplicates(array, newSize);

    printf("New Elements: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}