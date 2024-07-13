/*
#include<stdio.h>
void printStr(char str[]){
    int i;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

}
int main(){
    char vik[]={'V','i','k','h','y','a','t','\0'};       //Define like this
    char str[6] = "Vishu";                                // Or Define like this
    printf(vik);
    printf("\n");
    printf(str);
    return 0;

}
*/

#include <stdio.h>
#include <string.h>
int greater_of_all(int a, int b, int c, int d){
    
       if (a>b && a>c && a>d)
       {
        return a;
       }
       else if (b>c && b>d)
       {
        return b;
       }
       else if (c>d)
       {
        return c;
       }
       else{
        return d;
       }
       
       
       
    }
int main()
{
    // char str[50];
    // gets(str);                                                     //This is used to get input form the user
    // printf("By using the Printf fn :- %s\n",str);                  // %s -- is used for string type
    // printf("By Using the puts fn :-  ");
    // puts(str);                                                     // it is used to print the string

    int a, b, c, d, m;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);

    m = greater_of_all(a,b,c,d);
    printf("%d",m);
    
}