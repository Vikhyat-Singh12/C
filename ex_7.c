#include<stdio.h>
#include<string.h>
int main(){
    char u1[100];
    char u2[100]={" is a friend of "};
    char u3[100];
    char u4[100];
    char u5[100];
    printf("Enter Your Name: ");
    gets(u1);
    printf("Enter Your Friend Name: ");
    gets(u3);

    strcpy(u4,strcat(u1,u2));
    strcpy(u5,strcat(u4,u3));

    printf("%s",u5);
    printf("\n");
    puts(u5);


    return 0;
}