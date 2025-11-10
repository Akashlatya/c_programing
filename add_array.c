#include<stdio.h>
int main() {
    int i ;
    int sum[5] = {0};
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    for(int i = 0 ; i < 5 ; i++){
        sum[i] = arr1[i] + arr2[i];
        printf("Sum of element %d : %d\n", i+1 , sum[i]);
    }

    return 0;
}