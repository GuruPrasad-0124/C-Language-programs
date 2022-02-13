#include <stdio.h>
main()
{
    int i, arr[50], num;
    printf("\nEnter no of elements : ");
    scanf("%d", &num);
    printf("\n Enter the values:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n\n");
}