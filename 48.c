#include<stdio.h>
#include<string.h>


int main(){
    for (int i = 0; i < 51; i++)
    {
        if (i%2 == 0)
        {
           continue;
        }
        printf("%d\n",i);
        
    }
    
    return 0;
}