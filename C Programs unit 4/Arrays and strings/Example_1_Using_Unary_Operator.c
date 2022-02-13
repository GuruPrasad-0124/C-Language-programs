// Example 1 Using Unary Operator (++)
#include <stdio.h>
main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i, *p;
    p = &a[0]; //  OR p=a;
    for (i = 0; i < 5; i++)
    {
        printf("Address p=%u value *p=%d\n", p, *p);
        p++;
    }
}