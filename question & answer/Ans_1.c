// Write a programme to find the sum of numbers between 1 to n.

#include<stdio.h>
#include<string.h>


int main(){
    int n,s=0;
    printf("Enter the nth digit: ");
    scanf("%d",&n);
    for (int i = 0; i < n+1; i++)
    {
        s = s + i;
    }
    printf("%d",s);

    
    
    return 0;
} 