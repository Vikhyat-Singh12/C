#include <stdio.h>

// programe without using a switch

/*
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a no, : ");
    scanf("%d", &a);
    if (a == 2){

        printf("Value is 2");
    }
    else
    {

        printf("Value is anoter than 2");
    }

    return 0;
}

*/

// programme by using switch

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Enter your marks : ");
    scanf("%d", &marks);

    // switch

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)                    //nested switch
        {
        case 45:
            printf("Your marks are 45");
            break;

        default:
            printf("Your marks is not 45");
            break;
        }
        break;
    case 13:
        printf("The age is 13");
        break;
    case 23:
        printf("The age is 23");
        break;

    default:
        printf("Age is not 3,13,23");
        break;
    }

    return 0;
}
