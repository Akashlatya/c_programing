#include <stdio.h>
// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             printf(" % c", ch);
//             ch = ch + 1;
//         }
//         printf("\n");
//     }

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++++++

// int main (){
//     int n = 5 ;
//     for(int i = 0 ; i < n ; i++ ){
//         for (int j = 0; j < n; j++)
//         {
//             int num = 1;
//            printf("% d" , num);
//            num += 1 ;

//         }
//         printf ("\n");
//     }
//     return 0 ;
// }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';

//         for (int j = 0; j < i + 1; j++)
//         {
//             printf(" %c " , ch);
            
//             ch = ch + 1 ;
//         }
//         printf("\n");
//     }

//     return 0;
// }




//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++








int main()
{
    int n = 5;
    int num = 0 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            num = num+1 ;
            printf(" %d " , num);
        
        }
        printf("\n");
    }

    return 0;
}