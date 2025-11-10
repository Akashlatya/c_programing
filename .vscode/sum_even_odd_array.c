#include <stdio.h>
int main()
{
    int arr[10], even_sum = 0, odd_sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter an array element : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_sum += arr[i];
        }
        else
        {
            odd_sum += arr[i];
        }
    }
    printf("Sum of even elements in the array is: %d\n", even_sum);
    printf("Sum of odd elements in the array is: %d\n", odd_sum);
    return 0;
}