/*

#include<stdio.h>
int main(){
    char a='34';
    char* ptra = &a;
    printf("%d\n",ptra);
    ptra++;

    printf("%d\n",ptra);
    printf("%d\n",ptra-3);
    
    return 0;
}

*/


// array and pointers.

#include<stdio.h>
int main(){
    int vik[] = {1,2,3,4,5,6,7,8,9};                     //Defining the array ....[]
    printf("Value at the position 3 of the array is %d\n",vik[2]);        //This is also the way to get the value at thos point

    //  Both are way to find position
    printf("The address of first element of the array is %d\n",&vik[0]);
    printf("The address of first element of the array is %d\n",vik);
    
    // Both are way to find position
    printf("The address of second element of the array is %d\n",&vik[1]);
    printf("The address of second element of the array is %d\n",vik + 1);
    
    
    //  Both are way to find the value at this position
    printf("The value at address of first element of the array is %d\n", *(&vik[0]));
    printf("The value at address of first element of the array is %d\n", *(vik));
    
    // Both are way to find the value at this position
    printf("The value at address of second element of the array is %d\n", *(&vik[1]));
    printf("The value at address of second element of the array is %d\n", *(vik + 1));

    return 0;
}