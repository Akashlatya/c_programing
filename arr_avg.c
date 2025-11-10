#include <stdio.h>
int main()
{
    int sum = 0, arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter an array : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    float avg = (float)sum / 5;
    printf("\n Average of the array is = %f " , avg);
    printf("\n sum is = %d", sum);
    return 0;
}