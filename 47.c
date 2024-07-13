#include<stdio.h>
#include<stdlib.h>  // Calloc , Malloc,etc will run by <stdlib.h>

// 

int main(){
    // Use of malloc
    // IN this if you not enter the value it will initillaize by a garbage value 



    // int  n;
    // printf("Enter the size of array u want: ");
    // scanf("%d",&n);
    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("Enter the value no %d of this array: ",i);
    //     scanf("%d", &ptr[i]);
    // }
    // printf("\n");
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("The value at %d of this array is %d\n",i,ptr[i]);
    // }
    
    // return 0;



    
    
    
    // Use of calloc
    // if you not enter value in calloc then it will initialize by 0 to all the value of array
    
    
    
    int  n;
    int *ptr;
    printf("Enter the size of array u want: ");
    scanf("%d",&n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value no %d of this array: ",i);
        scanf("%d", &ptr[i]);
    }
    printf("\n");
    for (int i =1; i <= n; i++)
    {
        printf("The value at %d of this array is %d\n",i,ptr[i]);
    }
    
    printf("\n");




    // Use of realloc
    // This is used to get the new size of array and the bew value also
    
    
    
   
    printf("Enter the size of new array u want: ");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr , n*sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the new value no %d of this array: ",i);
        scanf("%d", &ptr[i]);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("The new value at %d of this array is %d\n",i,ptr[i]);
    }

    free(ptr);      //It is used to free the used memory
    
    return 0;
}