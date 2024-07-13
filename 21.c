#include<stdio.h>

//  Recursive function


int factorial(int num){
    if (num ==1 || num == 0)
    {
        return 1;
    }
    else{
        return(num * factorial(num -1));
    }
    
}

int main(){
    int a,c;
    printf("Enter the number of factorial you want: ");
    scanf("%d",&a);

    c = factorial(a);
    printf("%d",c);


return 0;
}



