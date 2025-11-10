#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    int len = strlen(str);
    printf("Length of the string is: %d\n", len);

    return 0;
}