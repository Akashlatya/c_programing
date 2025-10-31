#include <stdio.h>
int main()
{
    char grade;
    printf("for grade: ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'S':
        printf("supper\n");
        break;
    case 'A':
        printf("Good\n");
        break;
    case 'B':
        printf("fair\n");
        break;
    case 'Y':
        printf("absent\n");
        break;
    case 'F':
        printf("fail\n");
        break;
    default:
        printf("Invalid grade\n");
    }
    return 0;
}