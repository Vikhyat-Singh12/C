#include<stdio.h>
#include<string.h>


int main(){
    int a,b,c,d;
    printf("Enter the value of the shortest side: ");
    scanf("%d",&a);
    printf("Enter the value of the longest side: ");
    scanf("%d",&b);
    printf("Enter the value of the distace b/w shortest and longest side: ");
    scanf("%d",&c);

    d=0.5*(a+b)*c;

    printf("\n");
    printf("ans= %d",d);
    return 0;

}