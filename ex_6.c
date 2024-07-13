#include<stdio.h>
void sum(int *a,int *b){
    *a = *a + *b;
    *b = (*a - *b) - *b;


}
int main(){
    int a = 4, b=3;
    sum(&a,&b);

    printf("a = %d and b = %d",a,b);

    return 0;
}