#include<stdio.h>

int fact(int); // prototype

int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    printf("factorial of the number %d = %d", num, fact(num));
    return 0;
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}