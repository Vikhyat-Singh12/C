#include<stdio.h>

// this is for changing row and coloumn
int main(){
    int n;
    printf("Print star: ");
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
return 0;
}


// this is for fixed row and coloumn
int main(){
    int n;
    printf("Print star: ");
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
return 0;
}