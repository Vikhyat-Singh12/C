#include<stdio.h>

// print  a multiplication table that no entered by user.


int main()
{
    int a;
    printf("Enter the no. you want multiplication table of: ");
    scanf("%d", &a);
   for (int i = 1; i < 11; i++)
   {
    printf("%d x %d = %d\n",a, i, (i)*a);

   }
   
    return 0;
}
