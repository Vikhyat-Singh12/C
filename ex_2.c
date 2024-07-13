#include<stdio.h>


int table(int a){
    for (int i = 0; i < 11; i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    

}
int main(){
    int num;
    printf("Enter the no. you want multiplication table of: ");
    scanf("%d",&num);
    printf("Multiplication table of %d is as follow: ");
    printf(table(num));
return 0;
}