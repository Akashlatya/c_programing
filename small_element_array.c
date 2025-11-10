#include <stdio.h>
int main()
{
    int arr[5], small = arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter an array element : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("Smallest element in the array is: %d\n", small);
    return 0;
}