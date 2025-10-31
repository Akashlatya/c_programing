// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 5; i > 0; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf(" %d ", i);
//         }
//         printf("\n");
//     }
// }

//==================================================

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr = (int*)malloc(4 * sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }
//     for (int i = 0; i < 4; i++) {
//         ptr[i] = i + 1;
//         printf("%d ", ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }


//================================================


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20] = "Hello";
//     char str2[20] = "World";
    
//     strcat(str1, " ");
//     strcat(str1, str2);
//     printf("Concatenated: %s\n", str1);
//     printf("Length: %zu\n", strlen(str1));
//     return 0;
// }





// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20] = "Hello";
//     char str2[20] = "World";
    
//     strcat(str1, " ");
//     strcat(str1, str2);
//     printf("Concatenated: %s\n", str1);
//     printf("Length: %zu\n", strlen(str1));
//     return 0;
// }






// #include <stdio.h>
// #include <math.h>

// int main() {
//     double num = 16.0;
//     printf("Square root of %.2f = %.2f\n", num, sqrt(num));
//     printf("2^3 = %.2f\n", pow(2, 3));
//     printf("Ceiling of 4.3 = %.2f\n", ceil(4.3));
//     printf("Floor of 4.7 = %.2f\n", floor(4.7));
//     return 0;
// }




// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char ch = 'a';
//     printf("Original: %c\n", ch);
//     printf("Uppercase: %c\n", toupper(ch));
//     printf("Is digit? %s\n", isdigit(ch) ? "Yes" : "No");
//     printf("Is alpha? %s\n", isalpha(ch) ? "Yes" : "No");
//     return 0;
// }




// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t current_time = time(NULL);
//     struct tm *local = localtime(&current_time);
    
//     printf("Current date and time: %s", asctime(local));
//     printf("Year: %d\n", local->tm_year + 1900);
//     printf("Month: %d\n", local->tm_mon + 1 );

//     return 0;
// }







// #include <stdio.h>
// #include <limits.h>

// int main() {
//     printf("Int Max: %d\n", INT_MAX);
//     printf("Int Min: %d\n", INT_MIN);
//     printf("Char Max: %d\n", CHAR_MAX);
//     printf("Long Max: %ld\n", LONG_MAX);
//     return 0;
// }






//     #include <stdio.h>
// #include <float.h>

// int main() {
//     printf("Float Max: %e\n", FLT_MAX);
//     printf("Float Min: %e\n", FLT_MIN);
//     printf("Double Max: %e\n", DBL_MAX);
//     printf("Float Precision: %d digits\n", FLT_DIG);
//     return 0;
// }



// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     bool isValid = true;
//     bool isError = false;
    
//     if (isValid) {
//         printf("Valid input : %d\n", isValid);
//     }
//     printf("isError value: %d\n", isError);
//     return 0;
// }



// #include <stdio.h>
// #include <errno.h>
// #include <math.h>
// #include <string.h>

// int main() {
//     errno = 0;
//     double result = sqrt(-1);
    
//     if (errno != 0) {
//         printf("Error: %s\n", strerror(errno));
//     }
//     return 0;
// }



#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handle_signal(int sig) {
    printf("\nSignal %d caught! Exiting gracefully.\n", sig);
    exit(0);
}

int main() {
    signal(SIGINT, handle_signal);
    printf("Press Ctrl+C to trigger signal...\n");
    while(1);  // Infinite loop
    return 0;
}