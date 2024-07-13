#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "Vikhyat ";
    char s2[] = "Vishu";
    char s3[100];

    //puts(strcat(s1,s2));           //This is used to concatinate the string

    printf("The length of the s1 is %d\n",strlen(s1));   //The strlen() is used to find the length of the string
    printf("The length of the s2 is %d\n",strlen(s2));
    
    printf("The reverse of the s1 is: ");
    puts(strrev(s1));                    // this is used to reverse the string
    
    printf("The reverse of the s2 is: ");
    puts(strrev(s2));                    // this is used to reverse the string

    strcpy(s3,strcat(s1,s2));          //strcpy is used to copy the string in another string
    puts(s3);

    printf("The strcmp for s1, s2 returned %d ", strcmp(s1,s2)); 


    return 0;
}



// Allow user to enter two strings and then concatenate them by saying that 
// str1 is a friend of str2

// this Q is done Ex_7.c
