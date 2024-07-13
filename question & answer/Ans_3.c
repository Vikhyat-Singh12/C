// Finding Comound interest

#include<stdio.h>
#include<math.h>


int main(){
    float p,r,n,t,A,a,b,c;

    printf("Enter the initial principal balance: ");
    scanf("%f",&p);

    printf("Enter the initial rate: ");
    scanf("%f",&r);

    printf("Enter the number of time interest applied per time period: ");
    scanf("%f",&n);
    
    printf("Enter the number of time periods elapsed: ");
    scanf("%f",&t);

    // a = (1 + (r/n));
    // printf("%f\n",a);
    // b = n*t;
    // printf("%f\n",b);
    // c = pow(a,b);
    // printf("%f\n",c);

    A = p * pow((1 + r/n), (n*t));
    printf("The Compund interest is: %f", A);

    

    return 0;
}