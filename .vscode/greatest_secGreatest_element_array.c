#include <stdio.h>

int main()
{
    int arr[10], greatest, second_greatest;

   
    for (int i = 0; i < 10; i++)
    {
        printf("Enter an array element: ");
        scanf("%d", &arr[i]);
    }

   
    if (arr[0] > arr[1])
    {
        greatest = arr[0];
        second_greatest = arr[1];
    }
    else
    {
        greatest = arr[1];
        second_greatest = arr[0];
    }

 
    for (int i = 2; i < 10; i++)
    {
        if (arr[i] > greatest)
        {
            second_greatest = greatest;
            greatest = arr[i];
        }
        else if (arr[i] > second_greatest && arr[i] != greatest)
        {
            second_greatest = arr[i];
        }
    }

   
    printf("Greatest element in the array is: %d\n", greatest);
    printf("Second greatest element in the array is: %d\n", second_greatest);

    return 0;
}
