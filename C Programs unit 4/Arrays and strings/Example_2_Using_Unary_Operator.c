#include <stdio.h>
main()
{
    float f[5] = {10.5, 12.3, 20.6, 25.8, 28.7};
    int i;
    float *pf = &f[4];
    for (i = 0; i < 5; i++)
    {
        printf("Address f=%u value *pf=%f \n", f, *pf);
        pf--;
    }
}
