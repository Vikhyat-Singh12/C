#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Q1.>Write a code to check wheather it is NEON number or not.
/*
int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;
    int a = n * n;

    while (a > 0)
    {
        i = i + a % 10;
        a = a / 10;
    }
    if (n == i)
    {
        printf("The Number is NEON number.");
    }
    else
    {
        printf("The number is not a NEON number.");
    }

    return 0;
}
*/

// Q2.> Write a programe for ARMSTRONG number.

/*
int main(){
    int n,j=0,sum = 0;
    scanf("%d",&n);
    int a =n;
    int b = n;

    while (a>0)
    {
        j++;
        a /= 10;
    }

    for (int i = 0; i < j; i++)
    {
        int c = b%10;
        b /= 10;
        sum += pow(c,j);
    }

    if (sum==n)
    {
        printf("Yes! %d",sum);

    }
    else{
        printf("No %d",sum);
    }
}
*/

// Q3.> Write  a code for SPY number.
/*
int main()
{
    int n, c = 0, d = 1, j = 0;
    scanf("%d", &n);
    int a=n,b=n;

    while (a > 0)
    {
        j++;
        a = a / 10;
    }

    for (int i = 0; i < j; i++)
    {
        int e = b % 10;
        c = c + e;
        d = d * e;
        b = b / 10;
    }
    if (c == d)
    {
        printf("Yes! %d %d", c, d);
    }
    else
    {
        printf("No %d %d", c, d);
    }
}
*/

// Q4.>Write a programe to find the STRONG Number.

/*
int main(){
    int n;
    scanf("%d",&n);

    int a = n, b=n,sum =0;

    while (a>0)
    {
        int r = a%10;
        int p = 1;
        for (int i = 1; i <= r; i++)
        {
            p *= i;
        }
        sum += p;
        a /=10;

    }

    if (sum==n) printf("Yes");
    else printf("No");
}
*/

// Q5.>Write a programe to find the PERFECT number.

/*
int main()
{
    int n;
    scanf("%d", &n);
    int a = n, sum = 0;

    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        printf("YES");
    else
        printf("NO");
}
*/

// Q6.> Write a programe to find the CYCLIC Prime.

/*
int main(){
    int n;
    scanf("%d",&n);
    int a =n,i=0;
    bool flag = 1;

    while (a>0)
    {
        i++;
        a/=10;
    }

    for (int j = 1; j <= i; j++)
    {
        for (int k = 2; k < n; k++)
        {
            if (n%i==0)
            {
                flag = 0;
            }

        }
        int r = n%10;
        n = n/10;
        n = r*pow(10,i-1) + n;
    }
    if(flag){
        printf("Yes");
    }
    else{
        printf("NO");
    }
}
*/

// Q7.> Write a programe to find wheather it is NIVEN number or not.

/*
int main(){
    int n;
    scanf("%d",&n);

    int a=n,sum = 0;
    while (a>0)
    {
        int r = a%10;
        sum += r;
        a/=10;
    }
    if (n%sum==0)
    {
        printf("YES");
    }
    else printf("NO");

}
*/

// Q8.> Write a programme to find HAPPY numner.

/*
#include <stdio.h>

int sumOfSquares(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int isHappy(int n) {
    while (n != 1 && n != 4) {
        n = sumOfSquares(n);
    }
    return (n == 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isHappy(num))
        printf("%d is a happy number.\n", num);
    else
        printf("%d is not a happy number.\n", num);
    
    return 0;
}

*/

int main(){
    // int n;
    // scanf("%d",&n);
    // int a = n*n,sum = 0;

    // while (a>0)
    // {
    //     int r = a%10;
    //     sum += r;
    //     a/=10;
    // }
    // if(sum==n) printf("YES");
    // else printf("NO");
    int n;
    scanf("%d",&n);
    int a=2,b=1,sum=0;
for (int i = 1; i < n; i++)
{
    sum = a+b;
    a=b;
    b=sum;
}

printf("%d",sum);


}