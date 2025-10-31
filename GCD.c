#include <stdio.h>
int gcd(int, int);

int main()
{
    int x, y;
    printf("Enter two number to find greatest commonn divisor : ");
    scanf("%d \n %d", &x, &y);
    printf("The GCD of two number %d %d = %d", x, y, gcd(x, y));
    return 0 ;
}

int gcd(int a, int b)
{
    int rem;
    rem = a % b ;
    if (rem == 0)
        return b;
    else
        return ( gcd(b , rem));
}