#include <stdio.h>

// for Reverse Triangular pattern

/*

int main(){
    int n;
    printf("How many line of star patern you want: ");
    scanf("%d",&n);
    for (int i = n; i >0; i--)
    {
        for (int j = 1; j <i+1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



                                            // or
int main(){
    int n;
    printf("How many line of star patern you want: ");
    scanf("%d",&n);
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("*");
        }
        printf("\n");


    }


    return 0;
}

*/

// For Trigangular pattern

int main()
{
    int n;
    printf("How many line of star patern you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
