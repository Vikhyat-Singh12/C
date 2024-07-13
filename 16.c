#include<stdio.h>
int main(){
    // label:
    // printf("We are inside label");
    // goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the no. Enter 0 to exit\n");
            scanf("%d",&num);
            if (num ==0){
                goto end;
            }
        }
        
    }
    

return 0;
}