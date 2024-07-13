#include <stdio.h>

// Static allways keep in mind that how many time it is beeing called


int func(){
        //static int a;             //If we not give value it will start from 1
        static int a =5;
        a++;
        return a;

    }
int main(){
    printf("%d\n",func());
    printf("%d\n",func());
    printf("%d\n",func());
    printf("%d\n",func());
    printf("%d\n",func());

    return 0;
}


/*
int func()
{
    static int a = 5;
    a++;
    return a;
}

int main()
{
    //static int a = func();               // Here we can't call the function for static variable it want only constant value.
    return 0;
}

*/

