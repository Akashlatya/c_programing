#include <stdio.h>
int main()
{
    int arr[5], great;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter an array element : ");
        scanf("%d", &arr[i]);
    }
    great = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > great)
        {
            great = arr[i];
        }
    }
    printf("Greatest element in the array is: %d\n", great);
    return 0;
}