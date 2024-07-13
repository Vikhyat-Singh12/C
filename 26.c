#include<stdio.h>
int main(){
   printf("Lets learn about pointers\n");
   int a=10;
   int  *ptra = &a;                           // assigning the value of a to other
   int  *ptr2 = NULL;

   printf("The value of a is %d\n",a);           //Normal way to use value
   printf("The value of a is %d\n",*ptra);       //finding the value of a by other method
   
   printf("The address of pointer to a is  %x\n",ptra);       //address of a
   printf("The address of pointer to a is  %x\n",&a);       //address of a

   printf("The address of pointer to a is  %p\n",ptra);       //address of a
   printf("The address of pointer to a is  %p\n",&a);       //address of a

   printf("The address of some grabage is %p\n", ptr2);
return 0;
} 

 




