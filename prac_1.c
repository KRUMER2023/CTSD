#include <stdio.h>
#include <stdlib.h>

void modify(int **arr, int *old, int new)
{
    int *arr1 = (int *)malloc(new * sizeof(int)); // making new arrray
    if (arr1 == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = 0; i < (*old < new ? *old : new); i++)
    {
        arr1[i] = (*arr)[i];
    }

    if (*old > new)
    {
        free(*arr);
    }

    *arr = arr1;
    *old = new;
    printf("Array resized to size %d\n", new);
}


int main()
{
    int *arr = (int *)malloc(7 * sizeof(int)); // Initial size of 5
    for (int i = 0; i < 7; i++)
    {
        arr[i] = i + 1; // Initialize elements (optional)
    }

    int old = 7;

    printf("Original array: ");
    for (int i = 0; i < old; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Increase size
    int new = 9;
    modify(&arr, &old, new);

    printf("Resized array: ");

    for (int i = 0; i < new; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Decrease size (optional)
    new = 4;
    modify(&arr, &old, new);
    printf("Resized array: ");
    for (int i = 0; i < new; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
