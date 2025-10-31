#include<stdio.h>
int main(){
    int n,m ;
    printf("Enter the coloum size  :");
    scanf("%d",&n);
    printf("Enter the row size  :");
    scanf("%d",&m);

    for(int i = n ; i>0 ; i--){
        for(int j = 1; j <= i; j++){
        printf("*");
        }
            printf("\n");
    }

    return 0 ;

}


