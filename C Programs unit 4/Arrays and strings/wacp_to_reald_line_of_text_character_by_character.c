// ERROR IS COMING as CH IS UNDECLARED
// should we add ch = getchar(); ??

#include <stdio.h>
void main()
{
    char name[30];
    int i = 0;
    printf("Enter name");
    while (ch != '\n')
    {
        name[i] = getchar();
        i++;
    }
    name[i] = '\0';
    printf("Name:%s", name);
}