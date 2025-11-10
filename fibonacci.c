#include <stdio.h>
int fibonacci(int) ;

int main()
{
    int num;
    printf("Enter the number of fibonacci : ");
    scanf("%d", &num);
    printf("The fibonacci of the number %d = %d", num, fibonacci(num));
    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;

    else
        return fibonacci(n - 1) + fibonacci(n - 2);
        
}