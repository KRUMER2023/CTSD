#include <stdio.h>
#include <stdlib.h>

int main() {
    int **array;
    int rows, cols;

    // Get initial size of the array from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the 2D array
    array = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        array[i] = (int *)malloc(cols * sizeof(int));
    }

    // Initialize the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = j+1;
        }
    }

    // Display the initial array
    printf("Initial Array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    // Resizing the array based on user input
    int new_rows, new_cols;
    printf("\nEnter the new number of rows: ");
    scanf("%d", &new_rows);

    printf("Enter the new number of columns: ");
    scanf("%d", &new_cols);

    // Resize rows
    array = (int **)realloc(array, new_rows * sizeof(int *));
    for (int i = rows; i < new_rows; i++)
    {
        array[i] = (int *)realloc(array[i], new_cols * sizeof(int));
        for(int j=0;j<new_cols;j++)
        {
            array[i][j]=j+1;
        }
    }

    //Resize columns


    for (int i = 0; i < new_rows; i++)
    {
        array[i] = (int *)realloc(array[i], new_cols * sizeof(int));
        for(int j=cols;j<new_cols;j++)
        {
            array[i][j]=j+1;
        }
    }

    // Display the resized array
    printf("\nResized Array:\n");
    for (int i = 0; i < new_rows; i++)
    {
        for (int j = 0; j < new_cols; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < new_rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
