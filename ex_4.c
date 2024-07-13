#include<stdio.h>


int fib_recursive(int n)
{
    if (n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }

    return 0;
}

int fib_iterative(int n)
{
    int a =0;
    int b =1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a = b-a;
    }
    



    return a;
}






int main(){
    int a;
    printf("Enter the index to get fibonacci series: ");
    scanf("%d",&a);
    printf("The value of fibonacci series at the position %d using the iterative approach is %d\n",a,fib_iterative(a));
    printf("The value of fibonacci series at the position %d using the recursive approach is %d\n",a,fib_recursive(a));

return 0;
}