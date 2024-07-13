#include<stdio.h>
/*
int main(){
 //typtdef is used to shorten the name of keywards 

// typedef <previous_name>  <alias_name>;


    typedef unsigned long ul;          
    typedef int integer;

    ul l1,l2,l3;
    integer a = 4;
    printf("Value of a is %d",a);
    

    return 0;
}

 
*/

/*
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

}std;

int main()
{
    std s1,s2;
    s1.id = 56;
    s2.id= 89;
    printf("Value of s1's Id is %d\n",s1.id);
    printf("Value of s2's Id is %d\n",s2.id);
    return 0;
}


*/

int main(int argc, char const *argv[])
{
    // int* a, b;                               here on a is pointer cursor not b
    typedef int* intPointer;

    intPointer a,b;
    int c;
    a = &c;
    b = &c;
    return 0;
}


