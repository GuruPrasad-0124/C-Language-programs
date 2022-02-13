/* to read and print array elements
#include <stdio.h>
main()
{
    int i, arr[50], num;
    printf("\n Enter no of elements:");
    scanf("%d", &num);
    // Reading values into Array
    printf("\nEnter the values:");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Printing all elements of array
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }
}
*/

/* wacp to bubble sort the elements in an array
#include <stdio.h>
int main()
{
    int array[100], n, c, d, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
         scanf("%d", &array[c]);
    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d + 1])  // For decreasing order use '<' instead of '>'
                       
                {
                    swap = array[d];
                    array[d] = array[d + 1];
                    array[d + 1] = swap;
                }
        }
    }
    printf("Sorted list in ascending order:\n");
    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);
    return 0;
} */

// linear search //

/*
#include <stdio.h>
int main()
{
    int array[100], search, c, n, count = 0;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    printf("Enter a number to search\n");
    scanf("%d", &search);
    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("%d is present at location %d. \n", search, c + 1);
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d isnt present int the array .\n", search);
    }
    else
    {
        printf("%d is present %d times in the array\n", search, count);
    }

    return 0;
}
*/

/* WACP To do binary search in c
#include <stdio.h>
int main()
{
    int c, first, last, middle, n, search, array[100];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    printf("Enter valur to find\n");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if (array[middle] == search)
        {
            printf("%d found at location %d \n", search, middle + 1);
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        printf("Not found!! %d isn't present in the list.\n", search);
    }
    return 0;
}
*/

// 2D array demo
/*

#include <stdio.h>
int main()
{
    int m, n; // Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d", &m, &n); // Matrix Size Initialization
    int arr[10][10];        // Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for (int i = 0; i < m; i++) // Matrix Initialization
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for (int i = 0; i < m; i++) // Print the matrix
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

*/

// Given a two-dimensional array of integers and a row index, return the largest element in that row.

/*
#include <stdio.h>
int main()
{
    int m, n; // Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d", &m, &n); // Matrix Size Initialization
    int arr[10][10];        // Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for (int i = 0; i < m; i++) // Matrix Initialization
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for (int i = 0; i < m; i++) // Print the matrix
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter row number:");
    int x, j = 0;
    scanf("%d", &x);
    int res[m], max = 0;
    for (int i = 0; i < m; i++)
    {
        if (i == x)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
            }
        }
    }
    printf("%d is largest", max);

    return 0;
}
*/

// Completed.
