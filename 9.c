#include<stdio.h>
#define PI 3.14

int main(int argc, char const *argv[])
{
    int a = 8;
    const float b = 3.33;
    // b=9.6;   cannot do this since b is set as constant.

    printf("The value of a is %d and the value of b is %10.3f\n ",a,b);  /*here %10.3f specify that of 10 gap and upto 3 decimal point*/

    printf("%f", PI);
    return 0;
}



/*
%c --> character
%d --> integer
%f --> float
%l --> long
%lf --> double
%LF --> long double
*/