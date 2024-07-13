
// Functions


// with argument and without return value

/*
#include<stdio.h>
    
#include<stdio.h>
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
       printf("%c",'*');
    }
    
    
}
int main(){
    printstar(7);
return 0;
}
*/





// With argument and with return value


#include<stdio.h>

int sum(int a, int b){
    int c = a+b;
    return c;

}
int main(){
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    c = sum(a,b);
    printf("The sum is %d",c);


return 0;
}


// Without argument and with return value

/*
#include<stdio.h>
int takenumber(){
    int i;
    printf("What is the number: ");
    scanf("%d",&i);
    return i;
}
int main(){
    int c;
    c = takenumber();
    printf("The number is %d",c);
return 0;
}
*/


//  Without argument and without return value


/*
#include<stdio.h>

void sum(){
    int a,b,c;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("The sum is %d",c);

}
int main(){
    sum();
return 0;
}
*/
