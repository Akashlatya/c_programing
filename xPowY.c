#include <stdio.h>

int power(int x, int y);

int main()
{
    int x, y ;
    printf("Enter the value of Base  : ");
    scanf("%d", &x);
    printf("Enter the value of Exponent  : ");
    scanf("%d", &y);
    printf("The value of  %d ^ %d = %d \n " , x , y ,  power(x , y));
    return 0 ;
}

int power(int x, int y)
{

    if (y == 0)
        return 1;
    else
        return x * power(x , (y - 1));
}