#include <stdio.h>

int main(int argc, char const *argv[])
{
    // DO While Loop

    int num, index = 3;

    printf("Enter a no. : ");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);
        index = index + 1;

    } while (index < num);

    return 0;
}

