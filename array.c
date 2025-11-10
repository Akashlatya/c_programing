#include <stdio.h>
int main()
{
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
