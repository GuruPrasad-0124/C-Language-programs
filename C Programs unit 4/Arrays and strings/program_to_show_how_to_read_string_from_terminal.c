/*#include <stdio.h>
void main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.\n\n\n\n", name);
}
*/
#include <stdio.h>
void main()
{
    char name[30];
    printf("Enter name: ");
    gets(name); // Function to read string from user.
    printf("Name: ");
    puts(name); // Function to display string.
}
