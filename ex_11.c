#include <stdio.h>
#include <stdlib.h>

/*
ABC Pvt. Ltd. manages employee recods of other companies.
Employee Id can be of any length and it can contain any character
For 3 Employee, you have to take "Length of Employee Id "as input in a length integer variable
Then, you have to take employee id as an input and display on its screen.
Store the employee id in  character array which is allocted dynamically.
You have to create only one character array dynamically
*/

int main()
{
    int n;
    int a;
    printf("Enter The no. of Empoyee u want to Enter: ");
    scanf("%d",&a);
    char *ptr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Employee %d\n",i+1);
        printf("Enter the size of Employee Id: ");
        scanf("%d", &n);

        ptr[i] = (char *)malloc(n * sizeof(char));
        printf("Enter the Employee Id: ");
        scanf("%s", ptr[i]);
    }

    printf("\n");
    for (int i = 0; i < a; i++)
    {
        printf("The %d Emoloyee Id is %s\n",i+1, ptr[i]);
    }

    return 0;
}