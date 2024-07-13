#include<stdio.h>

/*

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}


int main(){
    int a =23 , b= 65;
    printf("%d and %d\n",a,b);
    swap(&a, &b);
    printf("%d and %d",a,b);
    return 0;
}  

*/

void changeValue(int *address){
    *address=336;
}

int main()
{
    int a=34;
    printf("The value of a is now %d\n",a);
    changeValue(&a);
    printf("The value of a is now %d",a);
    return 0;
}



// Quick Qwiz;


/*
Given two number a and b , add them then subtract them and then assign them to a and b usin call by reference.

ex:-

a = 4
b = 3

after running the code ;

a = 7
b = 1
*/


// solve in ex_6.c